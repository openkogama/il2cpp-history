
/* String Get(MVEventCodes) */

String * Assembly-CSharp.dll::LocalizedEnums+MVJoinStateLS::LocalizedEnums_MVJoinStateLS_Get
                   (MVEventCodes__Enum enumVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LocalizedEnums__MVJoinStateLS->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__LocalizedEnums__MVJoinStateLS->_1).cctor_started == 0)) {
    func_?(TypeInfo__LocalizedEnums__MVJoinStateLS);
  }
  this = TypeInfo__LocalizedEnums__MVJoinStateLS->static_fields->enumLocalizeBookkeeping;
  if (this != (EnumLocalizeBookkeeping *)0x0) {
    pSVar1 = Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping_GetLocalizedString
                       (this,enumVal & MVEventCodes__Enum_Join,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* Void Init(Dictionary`2[System.Int32,System.String]) */

void Assembly-CSharp.dll::LocalizedEnums+MVJoinStateLS::LocalizedEnums_MVJoinStateLS_Init
               (Dictionary_2_System_Int32_System_String_ *map,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Joining,(MethodInfo *)0x0);
  if (map != (Dictionary_2_System_Int32_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0xff,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Fetching_Materials,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x3a,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Fetching_Item_Types,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x3c,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Fetching_Ownership_Types,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x3b,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Fetching_Inventory,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x41,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Fetching_BuiltIn_Items,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x43,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Fetching_Shop_Inventory,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x42,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Fetching_Avatar_Shop_Inventory,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x44,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Fetching_Game_Snapshot,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x3e,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Setup_User_Play_mode,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x3d,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Fetching_Friends,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x40,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Setting_Actor_Ready,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x3f,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Fetching_Active_Avatar,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x46,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Initialize_Avatar_Edit,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x45,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Getting_Profile_Meta_Data,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x57,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Getting_Planet_Profile_Data,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x5a,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Getting_Project_Earnings,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x61,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Getting_Top_High_Scores,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x62,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Getting_KoGaMa_VAT,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,99,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Getting_Subscription_Perk_Data,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,100,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Setting_Up_User,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x65,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Setting_Up_User,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,0x66,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* LocalizedEnums+MVJoinStateLS() */

void Assembly-CSharp.dll::LocalizedEnums+MVJoinStateLS::LocalizedEnums_MVJoinStateLS__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (TypeInfo__LocalizedEnums__MVJoinStateLS->static_fields->__f__mg_cache0 ==
      (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_ *)0x0) {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::String>_>
                          );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,
               MethodInfo__LocalizedEnums__MVJoinStateLS__Init_System__Collections__Generic__Dictionary<int,_System::String>_
               ,
               MethodInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::String>_>__Action_System__Object__void__
              );
    TypeInfo__LocalizedEnums__MVJoinStateLS->static_fields->__f__mg_cache0 =
         (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_ *)this;
  }
  initCallback = TypeInfo__LocalizedEnums__MVJoinStateLS->static_fields->__f__mg_cache0;
  this_00 = (EnumLocalizeBookkeeping *)func_?(TypeInfo__Localize__EnumLocalizeBookkeeping);
  Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping__ctor
            (this_00,initCallback,(MethodInfo *)0x0);
  TypeInfo__LocalizedEnums__MVJoinStateLS->static_fields->enumLocalizeBookkeeping = this_00;
  return;
}

