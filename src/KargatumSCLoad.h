/*
 * Copyright (С) since 2019 Andrei Guluaev (Winfidonarleyan/Kargatum) https://github.com/Winfidonarleyan 
 * Licence MIT https://opensource.org/MIT
 */

#ifndef _KARGATUM_SCRIPTS_LOADER_H_
#define _KARGATUM_SCRIPTS_LOADER_H_

#ifndef KARGATUMCORE
// From Lib
void AddSC_Kargatum_Startup();
#endif

// From SC
void AddSC_Kargatum_CFBG();

// Add all
void AddKargatumScripts()
{
#ifndef KARGATUMCORE
    // Lib
    AddSC_Kargatum_Startup();
#endif

#ifdef KARGATUM_CFBG
    AddSC_Kargatum_CFBG();
#endif
}

#endif /* _KARGATUM_SCRIPTS_LOADER_H_ */


