
/* Void CreatePlanetScreenshot() */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_CreatePlanetScreenshot
               (BrowserComm *this,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 == MVJoinState__Enum_Playing) {
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar2 == MVGameMode__Enum_Edit) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
        uVar3 = func_?(&stack0x00000000);
        func_?(uVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UploadGameScreenShot
                (this_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ExecuteBrowserRequest(String) */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_ExecuteBrowserRequest
               (String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest != 0) {
    if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Application);
    }
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?(&UNK_?,unaff_EBP);
    }
    (*pcRam_?)(url);
    return;
  }
  return;
}


/* Void Exit() */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_Exit(BrowserComm *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_This_does_nothing_remove_from_we);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_This_does_nothing_remove_from_we,(MethodInfo *)0x0);
  return;
}


/* Void ExternalCallback(String) */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_ExternalCallback
               (BrowserComm *this,String *jsonData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__get_Item_int_
                   );
    func_?(&
                    BrowserComm__JsonReturnData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<BrowserComm::JsonReturnData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_No_callback_function_with_callba);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  this_00 = (BrowserComm_JsonReturnData *)
            Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                      (jsonData,
                       BrowserComm__JsonReturnData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<BrowserComm::JsonReturnData>_System__String_
                      );
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  pDVar1 = TypeInfo__BrowserComm->static_fields->callbacks;
  if ((this_00 != (BrowserComm_JsonReturnData *)0x0) &&
     (pDVar1 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,
                       (this_00->fields).callbackId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&this_00->fields,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_No_callback_function_with_callba,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar1 = TypeInfo__BrowserComm->static_fields->callbacks;
    if (pDVar1 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                          (this_00->fields).callbackId,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__get_Item_int_
                         );
      pDVar1 = TypeInfo__BrowserComm->static_fields->callbacks;
      if (pDVar1 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(this_00->fields).callbackId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Remove_int_
                  );
        bVar2 = BrowserComm+JsonReturnData::BrowserComm_JsonReturnData_Validate
                          (this_00,(MethodInfo *)0x0);
        if (pOVar4 != (Object *)0x0) {
          pOVar5 = pOVar4[1].klass;
          if (bVar2 == 0) {
            if (pOVar5 != (Object__Class *)0x0) {
              puStack6 = (undefined *)0x0;
              (*(code *)(pOVar5->_0).namespaze)();
              return;
            }
          }
          else if (pOVar5 != (Object__Class *)0x0) {
            puStack6 = (undefined *)0x1;
            (*(code *)(pOVar5->_0).namespaze)();
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void GiveBrowserInfo(String) */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_GiveBrowserInfo
               (BrowserComm *this,String *browserinfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if (browserinfo != (String *)0x0) {
    pSVar1 = mscorlib.dll::System::String::String_Split
                       (browserinfo,0x2c,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    if (pSVar1 != (String__Array *)0x0) {
      if (pSVar1->max_length != 0) {
        pSVar2 = pSVar1->vector[0];
        if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        TypeInfo__BrowserComm->static_fields->browserName = pSVar2;
        func_?(&TypeInfo__BrowserComm->static_fields->browserName);
        if (1 < pSVar1->max_length) {
          iVar3 = mscorlib.dll::System::Int32::Int32_Parse(pSVar1->vector[1],(MethodInfo *)0x0);
          TypeInfo__BrowserComm->static_fields->browserVersion = iVar3;
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PublishPlanetFromWeb() */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_PublishPlanetFromWeb
               (BrowserComm *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&MethodInfo__BrowserComm____c___PublishPlanetFromWeb_b__12_0_System__String_);
    func_?(&TypeInfo__BrowserComm____c);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if ((TypeInfo__BrowserComm____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm____c);
  }
  this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            TypeInfo__BrowserComm____c->static_fields->__9__12_0;
  if (this_01 == (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
    if ((TypeInfo__BrowserComm____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BrowserComm____c);
    }
    object = TypeInfo__BrowserComm____c->static_fields->__9;
    this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<System::String>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_01,(Object *)object,
               MethodInfo__BrowserComm____c___PublishPlanetFromWeb_b__12_0_System__String_,
               (MethodInfo *)0x0);
    TypeInfo__BrowserComm____c->static_fields->__9__12_0 = (Action_1_String_ *)this_01;
    func_?(&TypeInfo__BrowserComm____c->static_fields->__9__12_0,this_01);
  }
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PublishPlanet
              (this_00,(Action_1_String_ *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UserGoldUpdate(String) */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_UserGoldUpdate
               (BrowserComm *this,String *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (data,
                      BrowserComm__JsonGoldUpdateData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<BrowserComm::JsonGoldUpdateData>_System__String_
                     );
  if ((this->fields).OnGoldPurchasedFromWeb != (Action_2_Int32_Int32_ *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      uVar2 = func_?(&stack0xfffffff8);
      func_?(uVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pAVar4 = (this->fields).OnGoldPurchasedFromWeb;
    (*(pAVar4->fields)._._.invoke_impl)((pAVar4->fields)._._.method_code);
  }
  return;
}


/* BrowserComm() */

void Assembly-CSharp.dll::BrowserComm::BrowserComm__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>)
    ;
    func_?(&StringLiteral_browser_name_not_set);
    cRam_? = '\x01';
  }
  TypeInfo__BrowserComm->static_fields->enableExternalCall = 1;
  TypeInfo__BrowserComm->static_fields->enableBrowserRequest = 1;
  TypeInfo__BrowserComm->static_fields->browserName = StringLiteral_browser_name_not_set;
  func_?(&TypeInfo__BrowserComm->static_fields->browserName,
                  StringLiteral_browser_name_not_set);
  TypeInfo__BrowserComm->static_fields->browserVersion = -1;
  this = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Dictionary__
            );
  TypeInfo__BrowserComm->static_fields->callbacks =
       (Dictionary_2_System_Int32_BrowserComm_Callback_ *)this;
  func_?(&TypeInfo__BrowserComm->static_fields->callbacks,this);
  return;
}


/* String get_BrowserName() */

String * Assembly-CSharp.dll::BrowserComm::BrowserComm_get_BrowserName(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  return TypeInfo__BrowserComm->static_fields->browserName;
}


/* Int32 get_BrowserVersion() */

int32_t Assembly-CSharp.dll::BrowserComm::BrowserComm_get_BrowserVersion(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  return TypeInfo__BrowserComm->static_fields->browserVersion;
}

