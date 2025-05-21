
/* Void <DoAction>b__0_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     AdminObserveButton+<>c::AdminObserveButton_c__DoAction_b__0_0
               (AdminObserveButton_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    pIVar1 = handler->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
          pIVar1 = handler->klass;
          iVar4 = pIVar1->interfaceOffsets[uVar2].offset;
          (*(code *)(&(pIVar1->vtable).Pop)[iVar4].method)
                    (handler,(&(pIVar1->vtable).PopGroups)[iVar4].methodPtr);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)func_?(handler,TypeInfo__UnityEngine__EventSystems__IUIStack,2);
    (*(code *)*puVar5)(handler,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AdminObserveButton+<>c() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     AdminObserveButton+<>c::AdminObserveButton_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
                   );
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c;
  value = (AdminObserveButton_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c->
  static_fields->__9 = value;
  func_?(TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
                  ->static_fields,value);
  return;
}

