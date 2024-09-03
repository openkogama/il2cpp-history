
/* String Get(XPRewardType) */

String * Assembly-CSharp.dll::LocalizedEnums+XPRewardTypeLS::LocalizedEnums_XPRewardTypeLS_Get
                   (XPRewardType__Enum enumVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__LocalizedEnums__XPRewardTypeLS->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__LocalizedEnums__XPRewardTypeLS->static_fields->enumLocalizeBookkeeping;
  if (this != (EnumLocalizeBookkeeping *)0x0) {
    pSVar1 = Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping_GetLocalizedString
                       (this,enumVal & 0xff,(MethodInfo *)0x0);
    return pSVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Void Init(Dictionary`2[System.Int32,System.String]) */

void Assembly-CSharp.dll::LocalizedEnums+XPRewardTypeLS::LocalizedEnums_XPRewardTypeLS_Init
               (Dictionary_2_System_Int32_System_String_ *map,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
                   );
    func_?(&StringLiteral_Play_mode_reward_);
    func_?(&StringLiteral_Cool_);
    func_?(&StringLiteral_Build_mode_reward_);
    func_?(&StringLiteral_Nice_);
    func_?(&StringLiteral_Awesome_);
    func_?(&StringLiteral_Avatar_mode_reward_);
    func_?(&StringLiteral_Ad_completed_);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Play_mode_reward_,(MethodInfo *)0x0);
  if (map != (Dictionary_2_System_Int32_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,1,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Avatar_mode_reward_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,3,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Build_mode_reward_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,2,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Cool_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,4,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Nice_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,5,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Awesome_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,6,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Ad_completed_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)map,8,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* LocalizedEnums+XPRewardTypeLS() */

void Assembly-CSharp.dll::LocalizedEnums+XPRewardTypeLS::LocalizedEnums_XPRewardTypeLS__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::String>_>
                   );
    func_?(&TypeInfo__Localize__EnumLocalizeBookkeeping);
    func_?(&
                    MethodInfo__LocalizedEnums__XPRewardTypeLS__Init_System__Collections__Generic__Dictionary<int,_System::String>_
                   );
    func_?(&TypeInfo__LocalizedEnums__XPRewardTypeLS);
    cRam_? = '\x01';
  }
  this = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
         func_?(
                        TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::String>_>
                        );
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this,(Object *)0x0,
             MethodInfo__LocalizedEnums__XPRewardTypeLS__Init_System__Collections__Generic__Dictionary<int,_System::String>_
             ,(MethodInfo *)0x0);
  this_00 = (EnumLocalizeBookkeeping *)func_?(TypeInfo__Localize__EnumLocalizeBookkeeping);
  Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping__ctor
            (this_00,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_ *
                     )this,(MethodInfo *)0x0);
  TypeInfo__LocalizedEnums__XPRewardTypeLS->static_fields->enumLocalizeBookkeeping = this_00;
  func_?(TypeInfo__LocalizedEnums__XPRewardTypeLS->static_fields,this_00);
  return;
}

