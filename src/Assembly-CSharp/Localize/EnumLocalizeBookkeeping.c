
/* String GetLocalizedString(Int32) */

String * Assembly-CSharp.dll::Localize::EnumLocalizeBookkeeping::
         EnumLocalizeBookkeeping_GetLocalizedString
                   (EnumLocalizeBookkeeping *this,int32_t enumVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).enumToStringKeyMap;
  if (pDVar1 != (Dictionary_2_System_Int32_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,enumVal,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      arg1 = (Object *)func_?(TypeInfo__System__Int32);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_No_localized_string_found_for__,arg1,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        method = (MethodInfo *)TypeInfo__UnityEngine__Debug;
        enumVal = (int32_t)&UNK_?;
        func_?();
      }
      method = (MethodInfo *)0x0;
      enumVal = (int32_t)pSVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      enumVal = (int32_t)&enumVal;
      method = (MethodInfo *)0x0;
      pSVar3 = (String *)func_?();
      return pSVar3;
    }
    pDVar1 = (this->fields).enumToStringKeyMap;
    if (pDVar1 != (Dictionary_2_System_Int32_System_String_ *)0x0) {
      pTVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)pDVar1,enumVal,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                         );
      return (String *)pTVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* Void Init() */

void Assembly-CSharp.dll::Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping_Init
               (EnumLocalizeBookkeeping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (Dictionary_2_System_Int32_System_String_ *)
        func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)obj,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).initCallback;
  (this->fields).enumToStringKeyMap = obj;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)obj,
               MethodInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::String>_>__Invoke_System__Collections__Generic__Dictionary<int,_System::String>_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* EnumLocalizeBookkeeping(Action`1[System.Collections.Generic.Dictionary`2[System.Int32,System.String]])
    */

void Assembly-CSharp.dll::Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping__ctor
               (EnumLocalizeBookkeeping *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_
               *initCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).initCallback = initCallback;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,MethodInfo__Localize__EnumLocalizeBookkeeping__Init__,
             (MethodInfo *)0x0);
  TM::TM_LanguageChanged((Action *)this_01,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  obj = (Dictionary_2_System_Int32_System_String_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)obj,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).initCallback;
  (this->fields).enumToStringKeyMap = obj;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)obj,
               MethodInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::String>_>__Invoke_System__Collections__Generic__Dictionary<int,_System::String>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

