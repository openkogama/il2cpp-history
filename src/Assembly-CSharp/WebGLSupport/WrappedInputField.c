
/* Void ActivateInputField() */

void Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_ActivateInputField
               (WrappedInputField *this,MethodInfo *method)

{
  pIVar1 = (this->fields).input;
  if (pIVar1 == (InputField *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pTVar2 = (pIVar1->fields).m_TextComponent;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pTVar2 = (pIVar1->fields).m_TextComponent;
    if (pTVar2 == (Text *)0x0) goto code_?;
    x = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_font(pTVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    cVar4 = (*(pIVar1->klass->vtable).IsActive.methodPtr)();
    if (cVar4 == '\0') {
      return;
    }
    cVar4 = (*(pIVar1->klass->vtable).IsInteractable.methodPtr)();
    if (cVar4 == '\0') {
      return;
    }
    if ((((pIVar1->fields).m_AllowInput != 0) &&
        ((pIVar1->fields).m_Keyboard != (TouchScreenKeyboard *)0x0)) &&
       (bVar3 = UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::
                TouchScreenKeyboard_get_active((pIVar1->fields).m_Keyboard,(MethodInfo *)0x0),
       bVar3 == 0)) {
      pTVar5 = (pIVar1->fields).m_Keyboard;
      if (pTVar5 == (TouchScreenKeyboard *)0x0) {
code_?:
        uVar6 = func_?(&stack0xfffffff0);
        func_?(uVar6);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_active
                (pTVar5,1,(MethodInfo *)0x0);
      pTVar5 = (pIVar1->fields).m_Keyboard;
      if (pTVar5 == (TouchScreenKeyboard *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
                (pTVar5,(pIVar1->fields).m_Text,(MethodInfo *)0x0);
    }
    (pIVar1->fields).m_ShouldActivateNextUpdate = 1;
  }
  return;
}


/* Void DeactivateInputField() */

void Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_DeactivateInputField
               (WrappedInputField *this,MethodInfo *method)

{
  this_00 = (this->fields).input;
  if (this_00 != (InputField *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if ((this_00->fields).m_AllowInput != 0) {
      pGVar1 = (this_00->fields).m_Placeholder;
      (this_00->fields).m_HasDoneFocusTransition = 0;
      (this_00->fields).m_AllowInput = 0;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pGVar1 = (this_00->fields).m_Placeholder;
        mscorlib.dll::System::String::String_IsNullOrEmpty
                  ((this_00->fields).m_Text,(MethodInfo *)0x0);
        if (pGVar1 == (Graphic *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pGVar1,0,(MethodInfo *)0x0);
      }
      x = (this_00->fields).m_TextComponent;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if ((bVar2 != 0) &&
         (cVar3 = (*(this_00->klass->vtable).IsInteractable.methodPtr)(), cVar3 != '\0')) {
        if ((this_00->fields).m_WasCanceled != 0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                    (this_00,(this_00->fields).m_OriginalText,1,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_
                         );
          func_?(&StringLiteral_InputField_onEndEdit);
          cRam_? = '\x01';
        }
        UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
                  (StringLiteral_InputField_onEndEdit,(Object_1 *)this_00,(MethodInfo *)0x0);
        if ((this_00->fields).m_OnDidEndEdit != (InputField_EndEditEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
          UnityEvent_1_System_Object__Invoke
                    ((UnityEvent_1_System_Object_ *)(this_00->fields).m_OnDidEndEdit,
                     (Object *)(this_00->fields).m_Text,
                     MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_
                    );
        }
        if ((this_00->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::
          TouchScreenKeyboard_set_active((this_00->fields).m_Keyboard,0,(MethodInfo *)0x0);
          (this_00->fields).m_Keyboard = (TouchScreenKeyboard *)0x0;
          func_?();
        }
        (this_00->fields).m_CaretSelectPosition = 0;
        (this_00->fields).m_CaretPosition = 0;
        pBVar4 = UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_input
                           (this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pBVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pBVar4 = UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_input
                             (this_00,(MethodInfo *)0x0);
          if (pBVar4 == (BaseInput *)0x0) goto code_?;
          (*(pBVar4->klass->vtable).set_imeCompositionMode.methodPtr)();
        }
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__UI__CanvasUpdateRegistry->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::UI::CanvasUpdateRegistry::
      CanvasUpdateRegistry_RegisterCanvasElementForGraphicRebuild
                ((ICanvasElement *)this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Rebuild() */

void Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_Rebuild
               (WrappedInputField *this,MethodInfo *method)

{
  this_00 = (this->fields).checker;
  if (this_00 != (RebuildChecker *)0x0) {
    bVar1 = Detail::RebuildChecker::RebuildChecker_NeedRebuild(this_00,0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pIVar2 = (this->fields).input;
    if ((pIVar2 != (InputField *)0x0) &&
       (pTVar3 = (pIVar2->fields).m_TextComponent, pTVar3 != (Text *)0x0)) {
      (*(pTVar3->klass->vtable).SetAllDirty.methodPtr)(pTVar3);
      pIVar2 = (this->fields).input;
      if (pIVar2 != (InputField *)0x0) {
        (*(pIVar2->klass->vtable).Rebuild_1.methodPtr)(pIVar2,4);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* RectTransform RectTransform() */

RectTransform *
Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_RectTransform
          (WrappedInputField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).input;
  if (this_00 != (InputField *)0x0) {
    pRVar1 = (RectTransform *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this_00,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                       );
    return pRVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pRVar1 = (RectTransform *)(*pcVar4)();
  return pRVar1;
}


/* WrappedInputField(InputField) */

void Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField__ctor
               (WrappedInputField *this,InputField *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WebGLSupport__Detail__RebuildChecker);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).input = input;
  func_?(&this->fields,input);
  value = (RebuildChecker *)func_?(TypeInfo__WebGLSupport__Detail__RebuildChecker);
  if (value != (RebuildChecker *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_EBP);
    (value->fields).input = (IInputField *)this;
    func_?(&value->fields,this);
    (this->fields).checker = value;
    func_?(&(this->fields).checker,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_ReadOnly() */

bool Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_get_ReadOnly
               (WrappedInputField *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIVar2 = (this->fields).input;
  if (pIVar2 != (InputField *)0x0) {
    return (pIVar2->fields).m_ReadOnly;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Int32 get_characterLimit() */

int32_t Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_get_characterLimit
                  (WrappedInputField *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIVar2 = (this->fields).input;
  if (pIVar2 != (InputField *)0x0) {
    return (pIVar2->fields).m_CharacterLimit;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* ContentType get_contentType() */

ContentType__Enum
Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_get_contentType
          (WrappedInputField *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIVar2 = (this->fields).input;
  if (pIVar2 != (InputField *)0x0) {
    return (pIVar2->fields).m_ContentType;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  CVar6 = (*pcVar5)();
  return CVar6;
}


/* Int32 get_fontSize() */

int32_t Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_get_fontSize
                  (WrappedInputField *this,MethodInfo *method)

{
  pIVar1 = (this->fields).input;
  if (((pIVar1 != (InputField *)0x0) &&
      (pTVar2 = (pIVar1->fields).m_TextComponent, pTVar2 != (Text *)0x0)) &&
     (pFVar3 = (pTVar2->fields).m_FontData, pFVar3 != (FontData *)0x0)) {
    return (pFVar3->fields).m_FontSize;
  }
  puStack_4 = &stack0xfffffffc;
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Boolean get_isFocused() */

bool Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_get_isFocused
               (WrappedInputField *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIVar2 = (this->fields).input;
  if (pIVar2 != (InputField *)0x0) {
    return (pIVar2->fields).m_AllowInput;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* LineType get_lineType() */

LineType__Enum
Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_get_lineType
          (WrappedInputField *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIVar2 = (this->fields).input;
  if (pIVar2 != (InputField *)0x0) {
    return (pIVar2->fields).m_LineType;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  LVar6 = (*pcVar5)();
  return LVar6;
}


/* String get_placeholder() */

String * Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_get_placeholder
                   (WrappedInputField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).input;
  if (pIVar1 != (InputField *)0x0) {
    pGVar2 = (pIVar1->fields).m_Placeholder;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return ::StringLiteral__;
    }
    pIVar1 = (this->fields).input;
    if ((pIVar1 != (InputField *)0x0) &&
       (pGVar2 = (pIVar1->fields).m_Placeholder, pGVar2 != (Graphic *)0x0)) {
      exists = (Object_1 *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)pGVar2,
                          UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        (exists,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return ::StringLiteral__;
      }
      if (exists != (Object_1 *)0x0) {
        p_Stack0000000c = exists->klass[3]._1.genericContainerHandle;
        pSVar4 = (String *)(*(code *)exists->klass[3]._1.cctor_thread)();
        return pSVar4;
      }
    }
  }
  p_Stack0000000c = (Il2CppMetadataGenericContainerHandle)&UNK_?;
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* Int32 get_selectionAnchorPosition() */

int32_t Assembly-CSharp.dll::WebGLSupport::WrappedInputField::
        WrappedInputField_get_selectionAnchorPosition(WrappedInputField *this,MethodInfo *method)

{
  this_00 = (this->fields).input;
  if (this_00 != (InputField *)0x0) {
    iVar1 = (this_00->fields).m_CaretPosition;
    pSVar2 = UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_compositionString
                       (this_00,(MethodInfo *)0x0);
    if (pSVar2 != (String *)0x0) {
      return (pSVar2->fields)._stringLength + iVar1;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Int32 get_selectionFocusPosition() */

int32_t Assembly-CSharp.dll::WebGLSupport::WrappedInputField::
        WrappedInputField_get_selectionFocusPosition(WrappedInputField *this,MethodInfo *method)

{
  this_00 = (this->fields).input;
  if (this_00 != (InputField *)0x0) {
    iVar1 = (this_00->fields).m_CaretSelectPosition;
    pSVar2 = UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_compositionString
                       (this_00,(MethodInfo *)0x0);
    if (pSVar2 != (String *)0x0) {
      return (pSVar2->fields)._stringLength + iVar1;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* String get_text() */

String * Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_get_text
                   (WrappedInputField *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIVar2 = (this->fields).input;
  if (pIVar2 != (InputField *)0x0) {
    return (pIVar2->fields).m_Text;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}


/* Void set_selectionAnchorPosition(Int32) */

void Assembly-CSharp.dll::WebGLSupport::WrappedInputField::
     WrappedInputField_set_selectionAnchorPosition
               (WrappedInputField *this,int32_t value,MethodInfo *method)

{
  this_00 = (this->fields).input;
  if ((this_00 != (InputField *)0x0) &&
     (pSVar1 = UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_compositionString
                         (this_00,(MethodInfo *)0x0), pSVar1 != (String *)0x0)) {
    if ((pSVar1->fields)._stringLength == 0) {
      (this_00->fields).m_CaretPosition = value;
      if (value < 0) {
        (this_00->fields).m_CaretPosition = 0;
        return;
      }
      pSVar1 = (this_00->fields).m_Text;
      if (pSVar1 == (String *)0x0) goto code_?;
      if ((pSVar1->fields)._stringLength < value) {
        (this_00->fields).m_CaretPosition = (pSVar1->fields)._stringLength;
      }
    }
    return;
  }
code_?:
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_selectionFocusPosition(Int32) */

void Assembly-CSharp.dll::WebGLSupport::WrappedInputField::
     WrappedInputField_set_selectionFocusPosition
               (WrappedInputField *this,int32_t value,MethodInfo *method)

{
  this_00 = (this->fields).input;
  if ((this_00 != (InputField *)0x0) &&
     (pSVar1 = UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_compositionString
                         (this_00,(MethodInfo *)0x0), pSVar1 != (String *)0x0)) {
    if ((pSVar1->fields)._stringLength == 0) {
      (this_00->fields).m_CaretSelectPosition = value;
      if (value < 0) {
        (this_00->fields).m_CaretSelectPosition = 0;
        return;
      }
      pSVar1 = (this_00->fields).m_Text;
      if (pSVar1 == (String *)0x0) goto code_?;
      if ((pSVar1->fields)._stringLength < value) {
        (this_00->fields).m_CaretSelectPosition = (pSVar1->fields)._stringLength;
      }
    }
    return;
  }
code_?:
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_text(String) */

void Assembly-CSharp.dll::WebGLSupport::WrappedInputField::WrappedInputField_set_text
               (WrappedInputField *this,String *value,MethodInfo *method)

{
  this_00 = (this->fields).input;
  if (this_00 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
              (this_00,value,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

