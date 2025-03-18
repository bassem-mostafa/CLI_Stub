// #############################################################################
// #### Copyright ##############################################################
// #############################################################################

/*
 * Copyright 2024 BaSSeM
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// #############################################################################
// #### Description ############################################################
// #############################################################################

// #############################################################################
// #### Control Include(s) #####################################################
// #############################################################################

#include "Platform.h"

// #############################################################################
// #### Control Macro(s) #######################################################
// #############################################################################

#ifndef DEBUG
    #define DEBUG
#endif

#ifdef DEBUG
    #undef DEBUG
#endif

// #############################################################################
// #### File Guard #############################################################
// #############################################################################

#ifdef CLI_STUB

// #############################################################################
// #### Include(s) #############################################################
// #############################################################################

    #include "../../CLI_Internal.h"
    #include "CLI_Stub_Port.h"

// #############################################################################
// #### Private Macro(s) #######################################################
// #############################################################################

// #############################################################################
// #### Private Type(s) ########################################################
// #############################################################################

// #############################################################################
// #### Private Method(s) Prototype ############################################
// #############################################################################

// #############################################################################
// #### Private Variable(s) ####################################################
// #############################################################################

// #############################################################################
// #### Private Method(s) ######################################################
// #############################################################################

CLI_Status_t CLI_IsValid( CLI_t CLI )
{
    CLI_Status_t CLI_Status = CLI_Status_Error;
    do
    {
        CLI_Trace( "%s( CLI=%d )", __FUNCTION__, CLI );
        switch ( CLI )
        {
            case CLI_Null:
                // TODO Add valid/supported CLI interfaces
                CLI_Status = CLI_Status_Success;
                break;
            default:
                CLI_Error( "Invalid Argument" );
                CLI_Status = CLI_Status_ArgumentInvalid;
                break;
        }
    }
    while ( 0 );
    return CLI_Status;
}

CLI_Status_t CLI_Instance_Initialize( CLI_Instance_t * CLI_Instance )
{
    CLI_Status_t CLI_Status = CLI_Status_Error;
    do
    {
        CLI_Trace( "%s( Instance=%p )", __FUNCTION__, CLI_Instance );
        if ( ( CLI_Status = CLI_Instance_IsValid( CLI_Instance ) ) != CLI_Status_Success )
        {
            break;
        }
        switch ( CLI_Instance->CLI )
        {
            case CLI_Null:
                do
                {
                    // TODO
                    CLI_Status = CLI_Status_Success;
                }
                while ( 0 );
                break;
            default:
                CLI_Status = CLI_Status_Error;
                break;
        }
    }
    while ( 0 );
    return CLI_Status;
}

CLI_Status_t CLI_Instance_Cycle( CLI_Instance_t * CLI_Instance )
{
    CLI_Status_t CLI_Status = CLI_Status_Error;
    do
    {
        CLI_Trace( "%s( Instance=%p )", __FUNCTION__, CLI_Instance );
        if ( ( CLI_Status = CLI_Instance_IsValid( CLI_Instance ) ) != CLI_Status_Success )
        {
            break;
        }
        switch ( CLI_Instance->CLI )
        {
            case CLI_Null:
                do
                {
                    // TODO
                    CLI_Status = CLI_Status_Success;
                }
                while ( 0 );
                break;
            default:
                CLI_Status = CLI_Status_Error;
                break;
        }
    }
    while ( 0 );
    return CLI_Status;
}

CLI_Status_t CLI_Instance_DeInitialize( CLI_Instance_t * CLI_Instance )
{
    CLI_Status_t CLI_Status = CLI_Status_Error;
    do
    {
        CLI_Trace( "%s( Instance=%p )", __FUNCTION__, CLI_Instance );
        if ( ( CLI_Status = CLI_Instance_IsValid( CLI_Instance ) ) != CLI_Status_Success )
        {
            break;
        }
        switch ( CLI_Instance->CLI )
        {
            case CLI_Null:
                do
                {
                    // TODO
                    CLI_Status = CLI_Status_Success;
                }
                while ( 0 );
                break;
            default:
                CLI_Status = CLI_Status_Error;
                break;
        }
    }
    while ( 0 );
    return CLI_Status;
}

CLI_Status_t CLI_Instance_Add( CLI_Instance_t * CLI_Instance, CLI_Command_t * CLI_Command_Root, CLI_Command_t * CLI_Command_Child )
{
    CLI_Status_t CLI_Status = CLI_Status_Error;
    do
    {
        CLI_Trace( "%s( Instance=%p, Root=%p, Child=%p )", __FUNCTION__, CLI_Instance, CLI_Command_Root, CLI_Command_Child );
        if ( ( CLI_Status = CLI_Instance_IsValid( CLI_Instance ) ) != CLI_Status_Success )
        {
            break;
        }
        switch ( CLI_Instance->CLI )
        {
            case CLI_Null:
                do
                {
                    // TODO
                    CLI_Status = CLI_Status_Success;
                }
                while ( 0 );
                break;
            default:
                CLI_Status = CLI_Status_Error;
                break;
        }
    }
    while ( 0 );
    return CLI_Status;
}

CLI_Status_t CLI_Instance_Remove( CLI_Instance_t * CLI_Instance, CLI_Command_t * CLI_Command )
{
    CLI_Status_t CLI_Status = CLI_Status_Error;
    do
    {
        CLI_Trace( "%s( Instance=%p, Command=%p )", __FUNCTION__, CLI_Instance, CLI_Command );
        if ( ( CLI_Status = CLI_Instance_IsValid( CLI_Instance ) ) != CLI_Status_Success )
        {
            break;
        }
        switch ( CLI_Instance->CLI )
        {
            case CLI_Null:
                do
                {
                    // TODO
                    CLI_Status = CLI_Status_Success;
                }
                while ( 0 );
                break;
            default:
                CLI_Status = CLI_Status_Error;
                break;
        }
    }
    while ( 0 );
    return CLI_Status;
}

CLI_Status_t CLI_Instance_List( CLI_Instance_t * CLI_Instance, CLI_Command_t * CLI_Command )
{
    CLI_Status_t CLI_Status = CLI_Status_Error;
    do
    {
        CLI_Trace( "%s( Instance=%p, Command=%p )", __FUNCTION__, CLI_Instance, CLI_Command );
        if ( ( CLI_Status = CLI_Instance_IsValid( CLI_Instance ) ) != CLI_Status_Success )
        {
            break;
        }
        switch ( CLI_Instance->CLI )
        {
            case CLI_Null:
                do
                {
                    // TODO
                    CLI_Status = CLI_Status_Success;
                }
                while ( 0 );
                break;
            default:
                CLI_Status = CLI_Status_Error;
                break;
        }
    }
    while ( 0 );
    return CLI_Status;
}

CLI_Status_t CLI_Instance_Read( CLI_Instance_t * CLI_Instance )
{
    CLI_Status_t CLI_Status = CLI_Status_Error;
    do
    {
        CLI_Trace( "%s( Instance=%p )", __FUNCTION__, CLI_Instance );
        if ( ( CLI_Status = CLI_Instance_IsValid( CLI_Instance ) ) != CLI_Status_Success )
        {
            break;
        }
        switch ( CLI_Instance->CLI )
        {
            case CLI_Null:
                do
                {
                    // TODO
                    CLI_Status = CLI_Status_Success;
                }
                while ( 0 );
                break;
            default:
                CLI_Status = CLI_Status_Error;
                break;
        }
    }
    while ( 0 );
    return CLI_Status;
}

CLI_Status_t CLI_Instance_Write( CLI_Instance_t * CLI_Instance, CLI_Data_t * CLI_Data, CLI_DataLength_t CLI_DataLength )
{
    CLI_Status_t CLI_Status = CLI_Status_Error;
    do
    {
        CLI_Trace( "%s( Instance=%p, Data=%p, Length=%d )", __FUNCTION__, CLI_Instance, CLI_Data, CLI_DataLength );
        if ( ( CLI_Status = CLI_Instance_IsValid( CLI_Instance ) ) != CLI_Status_Success )
        {
            break;
        }
        switch ( CLI_Instance->CLI )
        {
            case CLI_Null:
                do
                {
                    // TODO
                    CLI_Status = CLI_Status_Success;
                }
                while ( 0 );
                break;
            default:
                CLI_Status = CLI_Status_Error;
                break;
        }
    }
    while ( 0 );
    return CLI_Status;
}

// #############################################################################
// #### Public Method(s) #######################################################
// #############################################################################

// #############################################################################
// #### Public Variable(s) #####################################################
// #############################################################################

// #############################################################################
// #### File Guard #############################################################
// #############################################################################

#endif /* CLI_STUB */

// #############################################################################
// #### END OF FILE ############################################################
// #############################################################################
