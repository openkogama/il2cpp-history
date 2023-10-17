
/* Void <SetAccessoriesToSelectable>b__0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController+<>c__DisplayClass32_0::
     AccessoryShopController_c_DisplayClass32_0__SetAccessoriesToSelectable_b__0
               (AccessoryShopController_c_DisplayClass32_0 *this,IGetCurrentBody *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVBody>);
    func_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    func_?(&
                    MethodInfo__AccessoryShopController____c__DisplayClass32_0___SetAccessoriesToSelectable_b__1_MVBody_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Action_1_Object_ *)(this->fields).__9__1;
  if (this_00 == (Action_1_Object_ *)0x0) {
    this_00 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<MVBody>);
    if (this_00 == (Action_1_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__AccessoryShopController____c__DisplayClass32_0___SetAccessoriesToSelectable_b__1_MVBody_
               ,(MethodInfo *)0x0);
    (this->fields).__9__1 = (Action_1_MVBody_ *)this_00;
    func_?(&(this->fields).__9__1,this_00);
  }
  if (x != (IGetCurrentBody *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody,x,this_00);
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

