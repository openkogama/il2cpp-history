
/* Color <DOFade>b__0() */

Color * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass4_0::
        DOTweenModuleUI_c_DisplayClass4_0__DOFade_b__0
                  (Color *__return_storage_ptr__,DOTweenModuleUI_c_DisplayClass4_0 *this,
                  MethodInfo *method)

{
  pIVar1 = (this->fields).target;
  if (pIVar1 != (Image *)0x0) {
    puVar2 = (undefined8 *)
             (*(pIVar1->klass->vtable).get_color.methodPtr)
                       (auStack_3,pIVar1,(pIVar1->klass->vtable).get_color.method);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    __return_storage_ptr__->r = (float)(int)uVar4;
    __return_storage_ptr__->g = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->b = (float)(int)uVar5;
    __return_storage_ptr__->a = (float)(int)((ulonglong)uVar5 >> 0x20);
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pCVar7 = (Color *)(*pcVar6)();
  return pCVar7;
}


/* Void <DOFade>b__1(Color) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass4_0::
     DOTweenModuleUI_c_DisplayClass4_0__DOFade_b__1
               (DOTweenModuleUI_c_DisplayClass4_0 *this,Color *x,MethodInfo *method)

{
  pIVar1 = (this->fields).target;
  if (pIVar1 != (Image *)0x0) {
    fStack_2 = x->r;
    fStack_3 = x->g;
    fStack_4 = x->b;
    fStack_5 = x->a;
    (*(pIVar1->klass->vtable).set_color.methodPtr)
              (pIVar1,&fStack_2,(pIVar1->klass->vtable).set_color.method);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

