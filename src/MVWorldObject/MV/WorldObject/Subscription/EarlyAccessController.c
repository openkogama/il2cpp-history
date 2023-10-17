
/* Boolean IsEarlyAccess(Object) */

bool MVWorldObject.dll::MV::WorldObject::Subscription::EarlyAccessController::
     EarlyAccessController_IsEarlyAccess(Object *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__Subscription__EarlyAccessController);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if (key != (Object *)0x0) {
    item.First = 0;
    item.Last = 0;
    if ((String__Class *)key->klass == TypeInfo__System__String) {
      item = (RegexCharClass_SingleRange)key;
    }
    if (item != (RegexCharClass_SingleRange)0x0) {
      if ((TypeInfo__MV__WorldObject__Subscription__EarlyAccessController->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__Subscription__EarlyAccessController);
      }
      this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             TypeInfo__MV__WorldObject__Subscription__EarlyAccessController->static_fields->
             earlyAccessKeys;
      if (this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                          (this,item,
                           MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                          );
        return bVar1;
      }
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
  }
  return 0;
}


/* EarlyAccessController() */

void MVWorldObject.dll::MV::WorldObject::Subscription::EarlyAccessController::
     EarlyAccessController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__Subscription__EarlyAccessController);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    cRam_? = '\x01';
  }
  this = (List_1_System_String_ *)
         func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  if (this != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    TypeInfo__MV__WorldObject__Subscription__EarlyAccessController->static_fields->earlyAccessKeys =
         this;
    func_?(TypeInfo__MV__WorldObject__Subscription__EarlyAccessController->static_fields,
                    this);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

