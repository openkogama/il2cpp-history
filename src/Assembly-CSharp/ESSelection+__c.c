
/* Void <HandleDeleteSelection>b__15_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ESSelection+<>c::ESSelection_c__HandleDeleteSelection_b__15_1
               (ESSelection_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIVar1 = x->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
          iVar4 = pIVar1->interfaceOffsets[uVar2].offset;
          (*(code *)(&(x->klass->vtable).PopGroups)[iVar4].method)
                    (x,0x12,(&(x->klass->vtable).PopToGroup)[iVar4].methodPtr);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,3);
    (*(code *)*puVar5)(x,0x12,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ESSelection+<>c() */

void Assembly-CSharp.dll::ESSelection+<>c::ESSelection_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ESSelection____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ESSelection____c;
  value = (ESSelection_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__ESSelection____c->static_fields->__9 = value;
  func_?(TypeInfo__ESSelection____c->static_fields,value);
  return;
}

