
/* Void Initialize(SettingsWrapper, String, Int32, Action`1[Object]) */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[System::Object]::
     NamedThemeAttribute_1_System_Object__Initialize
               (NamedThemeAttribute_1_System_Object_ *this,SettingsWrapper *settings,String *key,
               int32_t groups,Action_1_Object_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this != (NamedThemeAttribute_1_System_Object_ *)0x0) {
    puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
    (*(code *)*puVar1)(this,settings,key,groups,onChange,puVar1);
    pSVar2 = TM::TM__((this->fields).name,(MethodInfo *)0x0);
    (this->fields).name = pSVar2;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,*(void **)(*(int *)(method->name + 0x60) + 0xc),
               (MethodInfo *)0x0);
    TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String Validate(String) */

String * Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[System::Object]::
         NamedThemeAttribute_1_System_Object__Validate
                   (NamedThemeAttribute_1_System_Object_ *this,String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((str == (String *)0x0) ||
     (pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)str,(MethodInfo *)0x0),
     StringLiteral____ == (String *)0x0)) goto code_?;
  pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items
                     ((Collection_1_VoxelHit_ *)StringLiteral____,(MethodInfo *)0x0);
  if ((int)pIVar1 < (int)pIVar2) {
code_?:
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    str = mscorlib.dll::System::String::String_Concat_2(StringLiteral____,str,(MethodInfo *)0x0);
  }
  else {
    if (StringLiteral____ == (String *)0x0) goto code_?;
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)StringLiteral____,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Substring_1
                       (str,0,(int32_t)pIVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar3,StringLiteral____,(MethodInfo *)0x0);
    if (bVar4 != 0) goto code_?;
  }
  if (((Collection_1_VoxelHit_ *)str != (Collection_1_VoxelHit_ *)0x0) &&
     (pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)str,(MethodInfo *)0x0),
     ::StringLiteral___ != (String *)0x0)) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)::StringLiteral___,(MethodInfo *)0x0);
    if ((int)pIVar2 <= (int)pIVar1) {
      pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)str,(MethodInfo *)0x0);
      if ((::StringLiteral___ == (String *)0x0) ||
         (pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)::StringLiteral___,(MethodInfo *)0x0),
         ::StringLiteral___ == (String *)0x0)) goto code_?;
      length = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items
                         ((Collection_1_VoxelHit_ *)::StringLiteral___,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Substring_1
                         (str,(int)pIVar1 - (int)pIVar2,(int32_t)length,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar4 = mscorlib.dll::System::String::String_op_Inequality
                        (pSVar3,::StringLiteral___,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return (String *)(Collection_1_VoxelHit_ *)str;
      }
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2(str,::StringLiteral___,(MethodInfo *)0x0)
    ;
    return pSVar3;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}

