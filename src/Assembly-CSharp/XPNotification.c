
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::XPNotification::XPNotification_Initialize
               (XPNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__XP_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__i__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__from_boost___i_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.timeSinceStart = 0.0;
  auStackX_8[0] = 4;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      pSVar2 = (String *)(*(pOVar1->klass->vtable).ToString.methodPtr)(pOVar1);
      iVar3 = mscorlib.dll::System::Int32::Int32_Parse(pSVar2,(MethodInfo *)0x0);
      auStackX_8[0] = 0x14;
      pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__get_Item
                (data,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                );
      value = (iVar3 + 10) - iVar3;
      pTVar4 = (this->fields).AmountLabel;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_5[0]._pointer._value = (void *)0x0;
      aRStack_5[0]._length = 0;
      aRStack_5[0]._12_4_ = 0;
      pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                         (iVar3 + 10,aRStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar2,StringLiteral__XP_,(MethodInfo *)0x0);
      if (pTVar4 != (Text *)0x0) {
        (*(pTVar4->klass->vtable).set_text.methodPtr)(pTVar4,pSVar2);
        if (-1 < value) {
          pTVar4 = (this->fields).BoostLabel;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_5[0]._pointer._value = (void *)0x0;
          aRStack_5[0]._length = 0;
          aRStack_5[0]._12_4_ = 0;
          pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                             (value,aRStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral__i__,pSVar2,StringLiteral__from_boost___i_,
                              (MethodInfo *)0x0);
          if (pTVar4 == (Text *)0x0) goto code_?;
          (*(pTVar4->klass->vtable).set_text.methodPtr)
                    (pTVar4,pSVar2,(pTVar4->klass->vtable).set_text.method);
        }
        this_00 = (this->fields).tertiaryNotificationUI;
        l = (*(this->klass->vtable).get_Lifetime.methodPtr)
                      (this,(this->klass->vtable).get_Lifetime.method);
        if (this_00 != (TertiaryNotificationUI *)0x0) {
          TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                    (this_00,(Notification *)this,l,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

