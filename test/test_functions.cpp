#include <gtest/gtest.h>
#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <fstream>
#include <sstream>
#include <cstdio>

/**
 * @brief Test fixture for Developer functionality.
 *
 * This fixture creates a temporary logo file to test the load_logo_from_file method.
 */
class DeveloperTest : public ::testing::Test {
protected:
    std::string testLogoFile;
    std::string expectedContent;

    void SetUp() override {
        testLogoFile = "test_logo.txt";
        expectedContent = "This is a test logo.";
        // Create the test logo file in the directory defined by LOGO_PATH
        std::ofstream out(std::string(LOGO_PATH) + testLogoFile);
        if (out.is_open()) {
            out << expectedContent;
            out.close();
        }
    }
    
    void TearDown() override {
        std::remove((std::string(LOGO_PATH) + testLogoFile).c_str());
    }
};

/**
 * @brief Test that a newly constructed developer has an empty logo.
 */
TEST_F(DeveloperTest, LogoInitiallyEmpty) {
    JuniorDeveloper dev("Test Developer", "Tester");
    EXPECT_EQ(dev.getLogo(), "");
}

/**
 * @brief Test successful loading of a logo file.
 */
TEST_F(DeveloperTest, LoadLogoSuccess) {
    JuniorDeveloper dev("Test Developer", "Tester");
    dev.load_logo_from_file(testLogoFile);
    EXPECT_EQ(dev.getLogo(), expectedContent);
}

/**
 * @brief Test that attempting to load a non-existent logo file throws a runtime_error.
 */
TEST_F(DeveloperTest, LoadLogoFailure) {
    JuniorDeveloper dev("Test Developer", "Tester");
    EXPECT_THROW(dev.load_logo_from_file("nonexistent_logo.txt"), std::runtime_error);
}

/**
 * @brief Test the overloaded << operator.
 *
 * This test verifies that the operator<< outputs the expected text.
 */
TEST_F(DeveloperTest, OperatorOutputWithoutLogo) {
    JuniorDeveloper dev("Alice", "WonderCoder");
    std::stringstream ss;
    ss << dev;
    
    std::string output = ss.str();
    // Expect that the output includes the developer's name and alias,
    // but no logo (since no logo was loaded).
    EXPECT_NE(output.find("Name: Alice"), std::string::npos);
    EXPECT_NE(output.find("Alias: WonderCoder"), std::string::npos);
}

/**
 * @brief Test the solve_problem method for JuniorDeveloper.
 *
 * This test captures std::cout output and checks if the junior-specific output strings are present.
 */
TEST_F(DeveloperTest, SolveProblemJuniorOutput) {
    JuniorDeveloper dev("Alice", "WonderCoder");
    // Optionally, load a logo to test its output being printed
    try {
        dev.load_logo_from_file(testLogoFile);
    } catch (...) {
        // if loading fails, ignore since LoadLogo* tests already cover that.
    }
    
    std::stringstream captured;
    std::streambuf* origBuf = std::cout.rdbuf();
    std::cout.rdbuf(captured.rdbuf());
    
    dev.solve_problem();
    std::cout.flush();  // Ensure all output is flushed
    
    std::cout.rdbuf(origBuf);  // Restore original buffer
    std::string output = captured.str();
    
    // Check if the output contains the expected strings
    EXPECT_NE(output.find("Solving a problem:"), std::string::npos);
    EXPECT_NE(output.find("Ha, that was EZ!"), std::string::npos);
    // Hier wird nach "bitcoin" geprüft, da deine normale Ausgabe 
    // diesen Text beinhaltet:
    EXPECT_NE(output.find("Ahhhh, I needed that bitcoin!!!"), std::string::npos);
    // If a logo was loaded, its contents should also be present in the output.
    if (!dev.getLogo().empty()) {
        EXPECT_NE(output.find(dev.getLogo()), std::string::npos);
    }
}

/**
 * @brief Test the solve_problem method for SeniorDeveloper.
 *
 * This test captures std::cout output and checks if the senior-specific output strings are present.
 */
TEST_F(DeveloperTest, SolveProblemSeniorOutput) {
    SeniorDeveloper dev("Bob", "CodeMaster");
    // Optionally, load a logo to test its output being printed
    try {
        dev.load_logo_from_file(testLogoFile);
    } catch (...) {
        // ignore potential load errors here.
    }
    
    std::stringstream captured;
    std::streambuf* origBuf = std::cout.rdbuf();
    std::cout.rdbuf(captured.rdbuf());
    
    dev.solve_problem();
    std::cout.flush();  // Flush the stream to ensure all output is captured
    
    std::cout.rdbuf(origBuf);  // Restore original buffer
    std::string output = captured.str();
    
    // Check for senior specific text in the output.
    EXPECT_NE(output.find("Solving a problem:"), std::string::npos);
    EXPECT_NE(output.find("Puh, that was tough"), std::string::npos);
    EXPECT_NE(output.find("Ahhhh, I needed that bitcoin!!!"), std::string::npos);
    // Check for logo output, if loaded.
    if (!dev.getLogo().empty()) {
        EXPECT_NE(output.find(dev.getLogo()), std::string::npos);
    }
}
