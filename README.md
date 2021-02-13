# Automation PIE tests Issues

A simple project with one test.

If you ran the test multiple times, you'll notice that its duration increases over time.

Steps to reproduce the issue:

 1. Compile project.
 2. execute the .uproject.
 3. Open Window -> Developer Tools -> Session Frontend.
 4. In the Automation Tab run the PIE Test many times and you'll start to notice that the tests times start to increase over time (not taking into consideration the first one, which takes longer because it needs to start the engine I guess).  

Basically, this is what's causing problems:

    ADD_LATENT_AUTOMATION_COMMAND(FEditorLoadMap(testWorldName));
    ADD_LATENT_AUTOMATION_COMMAND(FStartPIECommand(true));

    ADD_LATENT_AUTOMATION_COMMAND(FEndPlayMapCommand);
