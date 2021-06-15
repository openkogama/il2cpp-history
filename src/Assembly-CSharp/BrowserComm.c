
/* Void CreatePlanetScreenshot() */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_CreatePlanetScreenshot
               (BrowserComm *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 == MVJoinState__Enum_Playing) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar2 == MVGameMode__Enum_Edit) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest == 0) {
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?,unaff_EBP), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(url);
  return;
}


/* Void Exit() */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_Exit(BrowserComm *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_This_does_nothing_remove_from_we,(MethodInfo *)0x0);
  return;
}


/* Void ExternalCallback(String) */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_ExternalCallback
               (BrowserComm *this,String *jsonData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  this_01 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                      (jsonData,
                       BrowserComm__JsonReturnData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<BrowserComm::JsonReturnData>_System__String_
                      );
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm);
  }
  this_00 = TypeInfo__BrowserComm->static_fields->callbacks;
  if ((this_01 != (XPLevelLimits *)0x0) &&
     (this_00 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                       (this_01->fields)._PrevXP_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      jsonData = (String *)&jsonData;
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        jsonData = (String *)TypeInfo__System__String;
        func_?();
      }
      jsonData = (String *)0x0;
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_No_callback_function_with_callba,arg1,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      method = (MethodInfo *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)message,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
      jsonData = (String *)TypeInfo__BrowserComm;
      func_?();
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)TypeInfo__BrowserComm->static_fields->callbacks;
    if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      this_02 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (pDVar2,(this_01->fields)._PrevXP_k__BackingField,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__get_Item_int_
                          );
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)TypeInfo__BrowserComm->static_fields->callbacks;
      if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (pDVar2,(this_01->fields)._PrevXP_k__BackingField,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Remove_int_
                  );
        bVar1 = BrowserComm+JsonReturnData::BrowserComm_JsonReturnData_Validate
                          ((BrowserComm_JsonReturnData *)this_01,(MethodInfo *)0x0);
        if (this_02 != (MethodInfo *)0x0) {
          method = this_02;
          if (bVar1 == 0) {
            jsonData = (String *)&UNK_?;
            BrowserComm+Callback::BrowserComm_Callback_Execute
                      ((BrowserComm_Callback *)this_02,0,
                       (String *)(this_01->fields)._Level_k__BackingField,(MethodInfo *)0x0);
            return;
          }
          jsonData = (String *)&UNK_?;
          BrowserComm+Callback::BrowserComm_Callback_Execute
                    ((BrowserComm_Callback *)this_02,1,
                     (String *)(this_01->fields)._NextXP_k__BackingField,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GiveBrowserInfo(String) */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_GiveBrowserInfo
               (BrowserComm *this,String *browserinfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (separator == (Char__Array *)0x0) goto code_?;
  if (separator->max_length == 0) {
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    separator->vector[0] = 0x2c;
    if (browserinfo == (String *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    pSVar2 = mscorlib.dll::System::String::String_Split(browserinfo,separator,(MethodInfo *)0x0);
    if (pSVar2 == (String__Array *)0x0) goto code_?;
    if (pSVar2->max_length != 0) {
      pSVar3 = pSVar2->vector[0];
      if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
        func_?(TypeInfo__BrowserComm);
      }
      TypeInfo__BrowserComm->static_fields->browserName = pSVar3;
      if (1 < pSVar2->max_length) {
        iVar4 = mscorlib.dll::System::Int32::Int32_Parse_3(pSVar2->vector[1],(MethodInfo *)0x0);
        TypeInfo__BrowserComm->static_fields->browserVersion = iVar4;
        return;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PublishPlanetFromWeb() */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_PublishPlanetFromWeb
               (BrowserComm *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PublishPlanet
              (this_00,(String **)&stack0xfffffff8,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pXVar1 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                     (data,
                      BrowserComm__JsonGoldUpdateData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<BrowserComm::JsonGoldUpdateData>_System__String_
                     );
  this_00 = (Action_2_Int32_Object_ *)(this->fields).OnGoldPurchasedFromWeb;
  if (this_00 != (Action_2_Int32_Object_ *)0x0) {
    if (pXVar1 == (XPLevelLimits *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
              (this_00,(pXVar1->fields)._NextXP_k__BackingField,
               (Object *)(pXVar1->fields)._PrevXP_k__BackingField,
               MethodInfo__System__Action<int,_int>__Invoke_int__int_);
  }
  return;
}


/* BrowserComm() */

void Assembly-CSharp.dll::BrowserComm::BrowserComm__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__BrowserComm->static_fields->enableExternalCall = 1;
  TypeInfo__BrowserComm->static_fields->enableBrowserRequest = 1;
  TypeInfo__BrowserComm->static_fields->browserName = StringLiteral_browser_name_not_set;
  TypeInfo__BrowserComm->static_fields->browserVersion = -1;
  this = (Dictionary_2_System_Int32_BrowserComm_Callback_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Dictionary__
            );
  TypeInfo__BrowserComm->static_fields->callbacks = this;
  return;
}


/* String get_BrowserName() */

String * Assembly-CSharp.dll::BrowserComm::BrowserComm_get_BrowserName(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm);
  }
  return TypeInfo__BrowserComm->static_fields->browserName;
}


/* Int32 get_BrowserVersion() */

int32_t Assembly-CSharp.dll::BrowserComm::BrowserComm_get_BrowserVersion(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm);
  }
  return TypeInfo__BrowserComm->static_fields->browserVersion;
}

