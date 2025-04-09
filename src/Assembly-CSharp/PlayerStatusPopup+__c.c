
/* Void <Update>b__5_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerStatusPopup+<>c::PlayerStatusPopup_c__Update_b__5_0
               (PlayerStatusPopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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
                    (x,0x40,(&(x->klass->vtable).PopToGroup)[iVar4].methodPtr);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,3);
    (*(code *)*puVar5)(x,0x40,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* PlayerStatusPopup+<>c() */

void Assembly-CSharp.dll::PlayerStatusPopup+<>c::PlayerStatusPopup_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerStatusPopup____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerStatusPopup____c;
  value = (PlayerStatusPopup_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__PlayerStatusPopup____c->static_fields->__9 = value;
  func_?(TypeInfo__PlayerStatusPopup____c->static_fields,value);
  return;
}

