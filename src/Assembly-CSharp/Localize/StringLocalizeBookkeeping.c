
/* String GetLocalizedString(String) */

String * Assembly-CSharp.dll::Localize::StringLocalizeBookkeeping::
         StringLocalizeBookkeeping_GetLocalizedString
                   (StringLocalizeBookkeeping *this,String *stringVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).stringToStringKeyMap;
  if (pDVar1 != (Dictionary_2_System_String_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)pDVar1,stringVal,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_No_localized_string_found_for__,stringVal,(MethodInfo *)0x0)
      ;
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return stringVal;
    }
    pDVar1 = (this->fields).stringToStringKeyMap;
    if (pDVar1 != (Dictionary_2_System_String_System_String_ *)0x0) {
      pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar1,(Type *)stringVal,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                         );
      return (String *)pPVar4;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* Void Init() */

void Assembly-CSharp.dll::Localize::StringLocalizeBookkeeping::StringLocalizeBookkeeping_Init
               (StringLocalizeBookkeeping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (Dictionary_2_System_String_System_String_ *)
        func_?(
                       TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                       );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)obj,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).initCallback;
  (this->fields).stringToStringKeyMap = obj;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)obj,
               MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::String,_System::String>_>__Invoke_System__Collections__Generic__Dictionary<System::String,_System::String>_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* StringLocalizeBookkeeping(Action`1[System.Collections.Generic.Dictionary`2[System.String,System.String]])
    */

void Assembly-CSharp.dll::Localize::StringLocalizeBookkeeping::StringLocalizeBookkeeping__ctor
               (StringLocalizeBookkeeping *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_String_System_String_
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
            (this_01,(Object *)this,MethodInfo__Localize__StringLocalizeBookkeeping__Init__,
             (MethodInfo *)0x0);
  TM::TM_LanguageChanged((Action *)this_01,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  obj = (Dictionary_2_System_String_System_String_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)obj,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).initCallback;
  (this->fields).stringToStringKeyMap = obj;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)obj,
               MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::String,_System::String>_>__Invoke_System__Collections__Generic__Dictionary<System::String,_System::String>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

