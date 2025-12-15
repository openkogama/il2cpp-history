
/* Void Command_AssetBundleCacheTest(TextCommand+Command) */

void Assembly-CSharp.dll::TextCommand::TextCommand_Command_AssetBundleCacheTest
               (TextCommand_Command *command,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Command_failed___0__expects_exac);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Command_failed___0__expects_exac;
  aiStackX_8[0] = 0;
  if ((command != (TextCommand_Command *)0x0) &&
     (pSVar2 = (command->fields).commandComponents, pSVar2 != (String__Array *)0x0)) {
    if ((int)pSVar2->max_length != 2) {
      if ((int)pSVar2->max_length == 0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      PStack_4._arg0 = (Object *)0x0;
      PStack_4._arg1 = (Object *)0x0;
      PStack_4._arg2 = (Object *)0x0;
      PStack_4._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                (&PStack_4,(Object *)pSVar2->vector[0],(MethodInfo *)0x0);
code_?:
      PStack_5._arg0 = PStack_4._arg0;
      PStack_5._arg1 = PStack_4._arg1;
      PStack_5._arg2 = PStack_4._arg2;
      PStack_5._args = PStack_4._args;
      pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar1,&PStack_5,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar2 = (command->fields).commandComponents;
    if (pSVar2 != (String__Array *)0x0) {
      uVar6 = (uint)pSVar2->max_length;
      arg0 = ::StringLiteral__;
      if (1 < (int)uVar6) {
        if (uVar6 < 2) goto code_?;
        arg0 = pSVar2->vector[1];
      }
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (arg0 != (String *)0x0) {
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        PStack_4._arg0 = (Object *)&(arg0->fields)._firstChar;
        PStack_4._arg1 = (Object *)(ulonglong)(uint)(arg0->fields)._stringLength;
        info = mscorlib.dll::System::Globalization::NumberFormatInfo::
               NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar7 = mscorlib.dll::System::Number::Number_TryParseInt32
                          ((ReadOnlySpan_1_Char_ *)&PStack_4,NumberStyles__Enum_Integer,info,
                           aiStackX_8,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__AssetBundleCacheTest__OnFirstDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_SetStreamingAssetVersion_has_no_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_SetStreamingAssetVersion_has_no_,(MethodInfo *)0x0);
          this = (Action_3_Object_Single_Int32_ *)
                 FUN_?(
                              TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>
                              );
          mscorlib.dll::System::Action`3[Object,Single,Int32]::Action_3_Object_Single_Int32___ctor
                    (this,(Object *)0x0,
                     MethodInfo__AssetBundleCacheTest__OnFirstDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                     ,(MethodInfo *)0x0);
          AssetBundleCacheTest::AssetBundleCacheTest_DownloadTestAsset
                    ((Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *)this,
                     0x231e900c,(MethodInfo *)0x0);
          return;
        }
      }
      pSVar1 = StringLiteral__0__is_not_a_valid_version_numbe;
      pSVar2 = (command->fields).commandComponents;
      if (pSVar2 != (String__Array *)0x0) {
        if ((int)pSVar2->max_length == 0) goto code_?;
        PStack_4._arg0 = (Object *)0x0;
        PStack_4._arg1 = (Object *)0x0;
        PStack_4._arg2 = (Object *)0x0;
        PStack_4._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                  (&PStack_4,(Object *)arg0,(Object *)pSVar2->vector[0],(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Command_Invalid(TextCommand+Command) */

void Assembly-CSharp.dll::TextCommand::TextCommand_Command_Invalid
               (TextCommand_Command *command,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__0__is_not_a_valid_command_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral__0__is_not_a_valid_command_;
  if ((command != (TextCommand_Command *)0x0) &&
     (pSVar2 = (command->fields).commandComponents, pSVar2 != (String__Array *)0x0)) {
    if ((int)pSVar2->max_length != 0) {
      PStack_3._arg0 = (Object *)0x0;
      PStack_3._arg1 = (Object *)0x0;
      PStack_3._arg2 = (Object *)0x0;
      PStack_3._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                (&PStack_3,(Object *)pSVar2->vector[0],(MethodInfo *)0x0);
      PStack_4._arg0 = PStack_3._arg0;
      PStack_4._arg1 = PStack_3._arg1;
      PStack_4._arg2 = PStack_3._arg2;
      PStack_4._args = PStack_3._args;
      pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar1,&PStack_4,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
      return;
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void NotifyUser(String) */

void Assembly-CSharp.dll::TextCommand::TextCommand_NotifyUser(String *msg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,msg,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStackX_10[0] = 5;
  key = (Object *)FUN_?(uRam_?,auStackX_10);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,key,(Object *)msg,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase,this,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
        (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
      (*(pMVar1->fields)._._.invoke_impl)
                ((pMVar1->fields)._._.method_code,3,this,(pMVar1->fields)._._.method,unaff_RDI);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Resolve(String) */

void Assembly-CSharp.dll::TextCommand::TextCommand_Resolve(String *commandLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__abctest);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (commandLine != (String *)0x0) {
    auStackX_8[0] = 0x20;
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    PStack_1._arg0 = (Object *)auStackX_8;
    PStack_1._arg1 = (Object *)0x1;
    pSVar2 = mscorlib.dll::System::String::String_SplitInternal
                       (commandLine,(ReadOnlySpan_1_Char_ *)&PStack_1,0x7fffffff,
                        StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    lVar3 = FUN_?(TypeInfo__TextCommand__Command);
    bVar4 = iRam_? != 0;
    *(String__Array **)(lVar3 + 0x10) = pSVar2;
    if (bVar4) {
      uVar5 = (uint)(lVar3 + 0x10U >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    lVar9 = *(longlong *)(lVar3 + 0x10);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (*(String **)(lVar9 + 0x20) != (String *)0x0) {
        pSVar11 = mscorlib.dll::System::String::String_ToLower
                           (*(String **)(lVar9 + 0x20),(MethodInfo *)0x0);
        if ((((pSVar11 == StringLiteral__abctest) ||
             ((((pSVar11 != (String *)0x0 && (StringLiteral__abctest != (String *)0x0)) &&
               ((pSVar11->fields)._stringLength == (StringLiteral__abctest->fields)._stringLength))
              && (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                    ((uint8_t *)&(pSVar11->fields)._firstChar,
                                     (uint8_t *)&(StringLiteral__abctest->fields)._firstChar,
                                     (longlong)(pSVar11->fields)._stringLength * 2,(MethodInfo *)0x0)
                 , bVar12 != 0)))) || (pSVar11 == StringLiteral__assetbundlecachetest)) ||
           (((pSVar11 != (String *)0x0 && (StringLiteral__assetbundlecachetest != (String *)0x0)) &&
            (((pSVar11->fields)._stringLength ==
              (StringLiteral__assetbundlecachetest->fields)._stringLength &&
             (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(pSVar11->fields)._firstChar,
                                 (uint8_t *)
                                 &(StringLiteral__assetbundlecachetest->fields)._firstChar,
                                 (longlong)(pSVar11->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar12 != 0)))))) {
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_Command_failed___0__expects_exac,0);
            LOCK();
            UNLOCK();
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pSVar11 = StringLiteral_Command_failed___0__expects_exac;
          auStackX_8[0] = 0;
          auStackX_8[1] = 0;
          if ((lVar3 != 0) && (lVar9 = *(longlong *)(lVar3 + 0x10), lVar9 != 0)) {
            if (*(int *)(lVar9 + 0x18) != 2) {
              if (*(int *)(lVar9 + 0x18) == 0) {
code_?:
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              PStack_1._arg0 = (Object *)0x0;
              PStack_1._arg1 = (Object *)0x0;
              PStack_1._arg2 = (Object *)0x0;
              PStack_1._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                        (&PStack_1,*(Object **)(lVar9 + 0x20),(MethodInfo *)0x0);
code_?:
              PStack_13._arg0 = PStack_1._arg0;
              PStack_13._arg1 = PStack_1._arg1;
              PStack_13._arg2 = PStack_1._arg2;
              PStack_13._args = PStack_1._args;
              pSVar11 = mscorlib.dll::System::String::String_FormatHelper
                                 ((IFormatProvider *)0x0,pSVar11,&PStack_13,(MethodInfo *)0x0);
              MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                        (MVGameMsgType__Enum_AdminMsg,pSVar11,(MethodInfo *)0x0);
              return;
            }
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            lVar9 = *(longlong *)(lVar3 + 0x10);
            if (lVar9 != 0) {
              arg0 = ::StringLiteral__;
              if (1 < (int)*(uint *)(lVar9 + 0x18)) {
                if (*(uint *)(lVar9 + 0x18) < 2) goto code_?;
                arg0 = *(String **)(lVar9 + 0x28);
              }
              if (cRam_? == '\0') {
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (arg0 != (String *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                PStack_1._arg0 = (Object *)&(arg0->fields)._firstChar;
                PStack_1._arg1 = (Object *)(ulonglong)(uint)(arg0->fields)._stringLength;
                info = mscorlib.dll::System::Globalization::NumberFormatInfo::
                       NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                bVar12 = mscorlib.dll::System::Number::Number_TryParseInt32
                                  ((ReadOnlySpan_1_Char_ *)&PStack_1,NumberStyles__Enum_Integer,
                                   info,(int32_t *)auStackX_8,(MethodInfo *)0x0);
                if (bVar12 != 0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__AssetBundleCacheTest__OnFirstDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Debug);
                    LOCK();
                    UNLOCK();
                    FUN_?(&StringLiteral_SetStreamingAssetVersion_has_no_);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                            ((Object *)StringLiteral_SetStreamingAssetVersion_has_no_,
                             (MethodInfo *)0x0);
                  this = (Action_3_Object_Single_Int32_ *)
                         FUN_?(
                                      TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>
                                      );
                  mscorlib.dll::System::Action`3[Object,Single,Int32]::
                  Action_3_Object_Single_Int32___ctor
                            (this,(Object *)0x0,
                             MethodInfo__AssetBundleCacheTest__OnFirstDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                             ,(MethodInfo *)0x0);
                  AssetBundleCacheTest::AssetBundleCacheTest_DownloadTestAsset
                            ((Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *)this,
                             0x231e900c,(MethodInfo *)0x0);
                  return;
                }
              }
              pSVar11 = StringLiteral__0__is_not_a_valid_version_numbe;
              lVar3 = *(longlong *)(lVar3 + 0x10);
              if (lVar3 != 0) {
                if (*(int *)(lVar3 + 0x18) == 0) goto code_?;
                PStack_1._arg0 = (Object *)0x0;
                PStack_1._arg1 = (Object *)0x0;
                PStack_1._arg2 = (Object *)0x0;
                PStack_1._args = (Object__Array *)0x0;
                mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                          (&PStack_1,(Object *)arg0,*(Object **)(lVar3 + 0x20),(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral__0__is_not_a_valid_command_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar11 = StringLiteral__0__is_not_a_valid_command_;
        lVar3 = *(longlong *)(lVar3 + 0x10);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) != 0) {
            PStack_1._arg0 = (Object *)0x0;
            PStack_1._arg1 = (Object *)0x0;
            PStack_1._arg2 = (Object *)0x0;
            PStack_1._args = (Object__Array *)0x0;
            mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                      (&PStack_1,*(Object **)(lVar3 + 0x20),(MethodInfo *)0x0);
            PStack_13._arg0 = PStack_1._arg0;
            PStack_13._arg1 = PStack_1._arg1;
            PStack_13._arg2 = PStack_1._arg2;
            PStack_13._args = PStack_1._args;
            pSVar11 = mscorlib.dll::System::String::String_FormatHelper
                               ((IFormatProvider *)0x0,pSVar11,&PStack_13,(MethodInfo *)0x0);
            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                      (MVGameMsgType__Enum_AdminMsg,pSVar11,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

