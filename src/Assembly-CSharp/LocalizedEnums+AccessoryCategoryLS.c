
/* String Get(AccessoryCategoryClient) */

String * Assembly-CSharp.dll::LocalizedEnums+AccessoryCategoryLS::
         LocalizedEnums_AccessoryCategoryLS_Get
                   (AccessoryCategoryClient__Enum enumVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LocalizedEnums__AccessoryCategoryLS->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__LocalizedEnums__AccessoryCategoryLS->_1).cctor_started == 0)) {
    func_?(TypeInfo__LocalizedEnums__AccessoryCategoryLS);
  }
  this = TypeInfo__LocalizedEnums__AccessoryCategoryLS->static_fields->enumLocalizeBookkeeping;
  if (this != (EnumLocalizeBookkeeping *)0x0) {
    pSVar1 = Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping_GetLocalizedString
                       (this,enumVal,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* Void Init(Dictionary`2[System.Int32,System.String]) */

void Assembly-CSharp.dll::LocalizedEnums+AccessoryCategoryLS::
     LocalizedEnums_AccessoryCategoryLS_Init
               (Dictionary_2_System_Int32_System_String_ *map,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_HATS,(MethodInfo *)0x0);
  if (map != (Dictionary_2_System_Int32_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,1,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_PARTICLES,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,2,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_BACK_ACCESSORIES,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,3,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_BUNDLE,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0xfe,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_FEATURED,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0xff,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_LEVEL_UNLOCKS,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,4,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* LocalizedEnums+AccessoryCategoryLS() */

void Assembly-CSharp.dll::LocalizedEnums+AccessoryCategoryLS::
     LocalizedEnums_AccessoryCategoryLS__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (TypeInfo__LocalizedEnums__AccessoryCategoryLS->static_fields->__f__mg_cache0 ==
      (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_ *)0x0) {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::String>_>
                          );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,
               MethodInfo__LocalizedEnums__AccessoryCategoryLS__Init_System__Collections__Generic__Dictionary<int,_System::String>_
               ,
               MethodInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::String>_>__Action_System__Object__void__
              );
    TypeInfo__LocalizedEnums__AccessoryCategoryLS->static_fields->__f__mg_cache0 =
         (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_ *)this;
  }
  initCallback = TypeInfo__LocalizedEnums__AccessoryCategoryLS->static_fields->__f__mg_cache0;
  this_00 = (EnumLocalizeBookkeeping *)func_?(TypeInfo__Localize__EnumLocalizeBookkeeping);
  Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping__ctor
            (this_00,initCallback,(MethodInfo *)0x0);
  TypeInfo__LocalizedEnums__AccessoryCategoryLS->static_fields->enumLocalizeBookkeeping = this_00;
  return;
}

