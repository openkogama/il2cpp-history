
/* Void <StartGoldPurchasePendingUpdate>b__6_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GoldPurchasedTracker+<>c::
     GoldPurchasedTracker_c__StartGoldPurchasePendingUpdate_b__6_0
               (GoldPurchasedTracker_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Thank_you_for_your_purchase__It_);
    func_?(&StringLiteral_Purchase_pending);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Thank_you_for_your_purchase__It_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Purchase_pending,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GoldPurchasedTracker+<>c() */

void Assembly-CSharp.dll::GoldPurchasedTracker+<>c::GoldPurchasedTracker_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoldPurchasedTracker____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GoldPurchasedTracker____c;
  value = (GoldPurchasedTracker_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__GoldPurchasedTracker____c->static_fields->__9 = value;
  func_?(TypeInfo__GoldPurchasedTracker____c->static_fields,value);
  return;
}

