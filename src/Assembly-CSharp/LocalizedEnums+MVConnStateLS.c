
/* String Get(MVConnState) */

String * Assembly-CSharp.dll::LocalizedEnums+MVConnStateLS::LocalizedEnums_MVConnStateLS_Get
                   (MVConnState__Enum enumVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__LocalizedEnums__MVConnStateLS->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__LocalizedEnums__MVConnStateLS->static_fields->enumLocalizeBookkeeping;
  if (this != (EnumLocalizeBookkeeping *)0x0) {
    pSVar1 = Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping_GetLocalizedString
                       (this,enumVal,(MethodInfo *)0x0);
    return pSVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Void Init(Dictionary`2[System.Int32,System.String]) */

void Assembly-CSharp.dll::LocalizedEnums+MVConnStateLS::LocalizedEnums_MVConnStateLS_Init
               (Dictionary_2_System_Int32_System_String_ *map,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
                   );
    func_?(&StringLiteral_Joined);
    func_?(&StringLiteral_Disconnected);
    func_?(&StringLiteral_Disconnecting);
    func_?(&StringLiteral_TimeoutDisconnect);
    func_?(&StringLiteral_HandlingException);
    func_?(&StringLiteral_Exception);
    func_?(&StringLiteral_Joining);
    func_?(&StringLiteral_Connecting);
    func_?(&StringLiteral_SendError);
    func_?(&StringLiteral_DisconnectedByUser);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Disconnected,(MethodInfo *)0x0);
  if (map != (Dictionary_2_System_Int32_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)map,(Object *)0x0,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_DisconnectedByUser,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)map,(Object *)0x1,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Connecting,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)map,(Object *)0x2,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Joining,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)map,(Object *)0x3,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Joined,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)map,(Object *)0x4,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Disconnecting,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)map,(Object *)0x5,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Exception,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)map,(Object *)0x6,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_TimeoutDisconnect,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)map,(Object *)0x7,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_SendError,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)map,(Object *)0x8,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_HandlingException,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)map,(Object *)0x9,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* LocalizedEnums+MVConnStateLS() */

void Assembly-CSharp.dll::LocalizedEnums+MVConnStateLS::LocalizedEnums_MVConnStateLS__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::String>_>
                   );
    func_?(&TypeInfo__Localize__EnumLocalizeBookkeeping);
    func_?(&
                    MethodInfo__LocalizedEnums__MVConnStateLS__Init_System__Collections__Generic__Dictionary<int,_System::String>_
                   );
    func_?(&TypeInfo__LocalizedEnums__MVConnStateLS);
    cRam_? = '\x01';
  }
  this = (Action_1_Object_ *)
         func_?(
                        TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::String>_>
                        );
  if (this != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this,(Object *)0x0,
               MethodInfo__LocalizedEnums__MVConnStateLS__Init_System__Collections__Generic__Dictionary<int,_System::String>_
               ,(MethodInfo *)0x0);
    this_00 = (EnumLocalizeBookkeeping *)
              func_?(TypeInfo__Localize__EnumLocalizeBookkeeping);
    if (this_00 != (EnumLocalizeBookkeeping *)0x0) {
      Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping__ctor
                (this_00,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_
                          *)this,(MethodInfo *)0x0);
      TypeInfo__LocalizedEnums__MVConnStateLS->static_fields->enumLocalizeBookkeeping = this_00;
      func_?(TypeInfo__LocalizedEnums__MVConnStateLS->static_fields,this_00);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

