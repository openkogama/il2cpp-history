
/* Void Awake() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_Awake
               (WebGLInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    WebGLSupport__WebGLInputMobile_MethodInfo__UnityEngine__GameObject__AddComponent<WebGLSupport::WebGLInputMobile>__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__WebGLSupport__WrappedInputField);
    cRam_? = '\x01';
  }
  exists = (Object_1 *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                     );
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    (exists,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                       );
    value = (Object__Class *)func_?(TypeInfo__WebGLSupport__WrappedInputField);
    if (value != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value,ExceptionArgument__Enum_obj,method);
      (value->_0).name = (char *)pOVar2;
      func_?();
      pOVar2 = (Object *)func_?(TypeInfo__WebGLSupport__Detail__RebuildChecker);
      if (pOVar2 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar2,ExceptionArgument__Enum_obj,method);
        pOVar2[1].klass = value;
        func_?();
        (value->_0).namespaze = (char *)pOVar2;
        func_?(&(value->_0).namespaze,pOVar2);
        (this->fields).input = (IInputField *)value;
        func_?(&(this->fields).input,value);
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this,0,(MethodInfo *)0x0);
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::
                Application_get_isMobilePlatform((MethodInfo *)0x0);
        if (bVar1 == 0) {
          return;
        }
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                    (this_00,
                     WebGLSupport__WebGLInputMobile_MethodInfo__UnityEngine__GameObject__AddComponent<WebGLSupport::WebGLInputMobile>__
                    );
          return;
        }
      }
    }
    func_?();
  }
  uVar3 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar3);
  func_?(this_01);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Can_not_Setup_WebGLInput__);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
  func_?(&MethodInfo__WebGLSupport__WebGLInput__Setup__);
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IEnumerator Blur(Int32) */

IEnumerator *
Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_Blur(int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WebGLSupport__WebGLInput___Blur_d__21);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__WebGLSupport__WebGLInput___Blur_d__21);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)id;
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void CheckOutFocus() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_CheckOutFocus
               (WebGLInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__WebGLSupport__WebGLInput);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isMobilePlatform
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WebGLSupport__WebGLInput);
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
    if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)(this->fields).id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                         ((MethodInfo *)0x0);
      if (pEVar3 == (EventSystem *)0x0) goto code_?;
      x = (pEVar3->fields).m_CurrentSelected;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Int32 CompareTo(WebGLInput) */

int32_t Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_CompareTo
                  (WebGLInput *this,WebGLInput *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WebGLSupport__IInputField);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  pIVar2 = (this->fields).input;
  if (pIVar2 != (IInputField *)0x0) {
    pRVar3 = (RectTransform *)func_?(0xf,TypeInfo__WebGLSupport__IInputField,pIVar2);
    pRVar4 = WebGLInput_GetScreenCoordinates(&RStack_5,this,pRVar3,(MethodInfo *)0x0);
    puStack_1 = (undefined *)pRVar4->m_XMin;
    if ((other != (WebGLInput *)0x0) &&
       (pIVar2 = (other->fields).input, pIVar2 != (IInputField *)0x0)) {
      pRVar3 = (RectTransform *)func_?(0xf,TypeInfo__WebGLSupport__IInputField,pIVar2);
      WebGLInput_GetScreenCoordinates(&RStack_5,this,pRVar3,(MethodInfo *)0x0);
      SStack_6.m_value =
           mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__GetValueOrDefault
                     ((Nullable_1_Single_ *)&stack0xffffffd8,(MethodInfo *)0x0);
      fVar7 = mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__GetValueOrDefault
                        ((Nullable_1_Single_ *)&puStack_1,(MethodInfo *)0x0);
      RStack_5.m_Height = (float)&UNK_?;
      iVar8 = mscorlib.dll::System::Single::Single_CompareTo_1(&SStack_6,fVar7,(MethodInfo *)0x0);
      if (iVar8 == 0) {
        SStack_6.m_value =
             mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::
             Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                       ((KeyValuePair_2_System_Single_System_Single_ *)&puStack_1,(MethodInfo *)0x0
                       );
        fVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::
                Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                          ((KeyValuePair_2_System_Single_System_Single_ *)&stack0xffffffd8,
                           (MethodInfo *)0x0);
        iVar8 = mscorlib.dll::System::Single::Single_CompareTo_1(&SStack_6,fVar7,(MethodInfo *)0x0);
      }
      return iVar8;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  iVar8 = (*pcVar9)();
  return iVar8;
}


/* Void DeactivateInputField() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_DeactivateInputField
               (WebGLInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__Remove_int_
                   );
    func_?(&TypeInfo__WebGLSupport__IInputField);
    func_?(&MethodInfo__WebGLSupport__WebGLInput__OnWindowBlur__);
    func_?(&TypeInfo__WebGLSupport__WebGLInput);
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLInput);
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)(this->fields).id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return;
    }
    if ((this->fields).input != (IInputField *)0x0) {
      func_?(0x11,TypeInfo__WebGLSupport__IInputField);
      if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__WebGLSupport__WebGLInput);
      }
      this_01 = TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
      if (this_01 != (Dictionary_2_System_Int32_WebGLSupport_WebGLInput_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,(this->fields).id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__Remove_int_
                  );
        (this->fields).id = -1;
        this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        if (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,MethodInfo__WebGLSupport__WebGLInput__OnWindowBlur__,
                     (MethodInfo *)0x0);
          if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          source = TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnBlurEvent;
          do {
            pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)source,(Delegate *)this_02,(MethodInfo *)0x0);
            if (pDVar2 != (Delegate *)0x0) {
              pDVar3 = (Delegate *)0x0;
              if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
                pDVar3 = pDVar2;
              }
              if (pDVar3 == (Delegate *)0x0) {
                func_?();
                break;
              }
            }
            if ((TypeInfo__WebGLSupport__WebGLWindow->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_02 = (NavMesh_OnNavMeshPreUpdate *)
                      &TypeInfo__WebGLSupport__WebGLWindow->static_fields->OnBlurEvent;
            pAVar4 = (Action *)func_?();
            bVar5 = pAVar4 == source;
            source = pAVar4;
            if (bVar5) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* RectInt GetElemetRect() */

RectInt * Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_GetElemetRect
                    (RectInt *__return_storage_ptr__,WebGLInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WebGLSupport__IInputField);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).input;
  if (pIVar1 != (IInputField *)0x0) {
    uiElement = (RectTransform *)func_?(0xf,TypeInfo__WebGLSupport__IInputField,pIVar1);
    WebGLInput_GetScreenCoordinates((Rect *)auStack_2,this,uiElement,(MethodInfo *)0x0);
    if ((this->fields).showHtmlElement == 0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isMobilePlatform
                        ((MethodInfo *)0x0);
      if (bVar3 == 0) {
        fStack_4 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System
                   ::Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                             ((KeyValuePair_2_System_Single_System_Single_ *)&stack0xffffffd8,
                              (MethodInfo *)0x0);
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        fVar6 = mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__GetValueOrDefault
                          ((Nullable_1_Single_ *)&stack0xffffffd8,(MethodInfo *)0x0);
        unique0x0000aa00 = (double)((float)iVar5 - fVar6);
        fVar7 = SubscribableVariableBase`1[System::Single]::
                SubscribableVariableBase_1_System_Single__get_Value
                          ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffd8,
                           (MethodInfo *)0x0);
        __return_storage_ptr__->m_XMin = 0;
        __return_storage_ptr__->m_YMin = 0;
        __return_storage_ptr__->m_Width = 0;
        __return_storage_ptr__->m_Height = 0;
        UnityEngine.CoreModule.dll::UnityEngine::RectInt::RectInt__ctor
                  (__return_storage_ptr__,(int)fStack_4,(int)((float)iVar5 - fVar6),(int)fVar7,1,
                   (MethodInfo *)0x0);
        return __return_storage_ptr__;
      }
    }
    fStack_8 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::
               Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                         ((KeyValuePair_2_System_Single_System_Single_ *)&stack0xffffffd8,
                          (MethodInfo *)0x0);
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    fStack_4 = mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__GetValueOrDefault
                         ((Nullable_1_Single_ *)&stack0xffffffd8,(MethodInfo *)0x0);
    fVar6 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
            Int32Enum,System::Single]::
            Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                      ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                        *)&stack0xffffffd8,(MethodInfo *)0x0);
    fVar6 = fVar6 + fStack_4;
    fStack_4 = SubscribableVariableBase`1[System::Single]::
               SubscribableVariableBase_1_System_Single__get_Value
                         ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffd8,
                          (MethodInfo *)0x0);
    fVar7 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
            Int32Enum,System::Single]::
            Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                      ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                        *)&stack0xffffffd8,(MethodInfo *)0x0);
    __return_storage_ptr__->m_XMin = 0;
    __return_storage_ptr__->m_YMin = 0;
    __return_storage_ptr__->m_Width = 0;
    __return_storage_ptr__->m_Height = 0;
    UnityEngine.CoreModule.dll::UnityEngine::RectInt::RectInt__ctor
              (__return_storage_ptr__,(int)fStack_8,(int)((float)iVar5 - fVar6),(int)fStack_4,
               (int)fVar7,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pRVar10 = (RectInt *)(*pcVar9)();
  return pRVar10;
}


/* Rect GetScreenCoordinates(RectTransform) */

Rect * Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_GetScreenCoordinates
                 (Rect *__return_storage_ptr__,WebGLInput *this,RectTransform *uiElement,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Canvas_MethodInfo__UnityEngine__Component__GetComponentInParent<UnityEngine::Canvas>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fourCornersArray = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  if (uiElement != (RectTransform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetWorldCorners
              (uiElement,fourCornersArray,(MethodInfo *)0x0);
    this_00 = (Canvas *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInParent_1
                        ((Component *)uiElement,
                         UnityEngine__Canvas_MethodInfo__UnityEngine__Component__GetComponentInParent<UnityEngine::Canvas>__
                        );
    if (this_00 != (Canvas *)0x0) {
      RVar1 = UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas_get_renderMode
                        (this_00,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)this_00,(MethodInfo *)0x0);
      if ((RVar1 != RenderMode__Enum_ScreenSpaceOverlay & bVar2) != 0) {
        exists = UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas_get_worldCamera
                           (this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        __return_storage_ptr__ = (Rect *)&UNK_?;
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)exists,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          this_01 = (RectTransform *)
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                              ((MethodInfo *)0x0);
        }
        else {
          this_01 = (RectTransform *)0x0;
        }
        uVar3 = 0;
        if (fourCornersArray == (Vector3__Array *)0x0) goto code_?;
        pVVar4 = fourCornersArray->vector;
        for (; (int)uVar3 < (int)fourCornersArray->max_length; uVar3 = uVar3 + 1) {
          if (fourCornersArray->max_length <= uVar3) goto code_?;
          if (this_01 == (RectTransform *)0x0) goto code_?;
          uVar5 = pVVar4->x;
          __return_storage_ptr__ = (Rect *)&stack0xfffffff0;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                             ((Vector3 *)__return_storage_ptr__,(Camera *)this_01,*pVVar4,
                              (MethodInfo *)0x0);
          fVar7 = pVVar6->y;
          fVar8 = pVVar6->z;
          if (fourCornersArray->max_length <= uVar3) goto code_?;
          pVVar4->x = pVVar6->x;
          pVVar4->y = fVar7;
          pVVar4->z = fVar8;
          pVVar4 = pVVar4 + 1;
          this_01 = (RectTransform *)uVar5;
        }
      }
      uVar3 = 0;
      if (fourCornersArray != (Vector3__Array *)0x0) {
        pfVar9 = &fourCornersArray->vector[0].y;
        fVar8 = _UNK_?;
        fVar7 = _UNK_?;
        x = _UNK_?;
        y = _UNK_?;
        while( true ) {
          if ((int)fourCornersArray->max_length <= (int)uVar3) {
            __return_storage_ptr__->m_XMin = 0.0;
            __return_storage_ptr__->m_YMin = 0.0;
            __return_storage_ptr__->m_Width = 0.0;
            __return_storage_ptr__->m_Height = 0.0;
            UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4__ctor
                      ((Vector4 *)__return_storage_ptr__,x,y,fVar7 - x,fVar8 - y,(MethodInfo *)0x0
                      );
            return __return_storage_ptr__;
          }
          if (fourCornersArray->max_length <= uVar3) break;
          if (((Vector3 *)(pfVar9 + -1))->x <= x) {
            x = ((Vector3 *)(pfVar9 + -1))->x;
          }
          if (*pfVar9 <= y) {
            y = *pfVar9;
          }
          if (fVar7 <= ((Vector3 *)(pfVar9 + -1))->x) {
            fVar7 = ((Vector3 *)(pfVar9 + -1))->x;
          }
          if (fVar8 <= *pfVar9) {
            fVar8 = *pfVar9;
          }
          uVar3 = uVar3 + 1;
          pfVar9 = pfVar9 + 3;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pRVar11 = (Rect *)(*pcVar10)();
  return pRVar11;
}


/* Void OnBlur(Int32) */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_OnBlur(int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__get_Item_int_
                   );
    func_?(&TypeInfo__WebGLSupport__WebGLInput);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLInput);
  }
  this = TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
  if (this != (Dictionary_2_System_Int32_WebGLSupport_WebGLInput_ *)0x0) {
    this_00 = (MonoBehaviour *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this,id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__get_Item_int_
                        );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__WebGLSupport__WebGLInput___Blur_d__21);
      cRam_? = '\x01';
    }
    method_00 = (MethodInfo *)&UNK_?;
    value = (Object *)func_?(TypeInfo__WebGLSupport__WebGLInput___Blur_d__21);
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)id;
      if (this_00 != (MonoBehaviour *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  (this_00,(IEnumerator *)value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_OnDestroy
               (WebGLInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                   );
    func_?(&TypeInfo__WebGLSupport__WebGLInput);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLInput);
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)(this->fields).id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      WebGLInput_DeactivateInputField(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_OnDisable
               (WebGLInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?();
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
              (this_00,(RegexCharClass_SingleRange)this,
               MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__Remove_WebGLSupport__WebGLInput_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEditEnd(Int32, String) */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_OnEditEnd
               (int32_t id,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar1 = TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
  if (((pDVar1 != (Dictionary_2_System_Int32_WebGLSupport_WebGLInput_ *)0x0) &&
      (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,id,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__get_Item_int_
                          ), pOVar2 != (Object *)0x0)) &&
     (key = pOVar2[2].klass, key != (Object__Class *)0x0)) {
    cVar3 = func_?();
    if (cVar3 != '\0') {
      return;
    }
    if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar1 = TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
    if (((pDVar1 != (Dictionary_2_System_Int32_WebGLSupport_WebGLInput_ *)0x0) &&
        (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                             (Int32Enum__Enum)key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__get_Item_int_
                            ), pOVar2 != (Object *)0x0)) &&
       (pOVar2[2].klass != (Object__Class *)0x0)) {
      func_?();
      return;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_OnEnable
               (WebGLInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?();
  }
  this_00 = TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
  if (this_00 != (List_1_WebGLSupport_WebGLInput_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)this,
               MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__Add_WebGLSupport__WebGLInput_
              );
    this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
    if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Sort
                (this_01,
                 MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__Sort__);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSelect() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_OnSelect
               (WebGLInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action<int,_System::String>);
    func_?(&TypeInfo__System__Action<int,_int>);
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__set_Item_int__WebGLSupport__WebGLInput_
                   );
    func_?(&TypeInfo__WebGLSupport__IInputField);
    func_?(&MethodInfo__WebGLSupport__WebGLInput__OnBlur_int_);
    func_?(&MethodInfo__WebGLSupport__WebGLInput__OnEditEnd_int__System__String_);
    func_?(&MethodInfo__WebGLSupport__WebGLInput__OnFocus_int_);
    func_?(&MethodInfo__WebGLSupport__WebGLInput__OnTab_int__int_);
    func_?(&MethodInfo__WebGLSupport__WebGLInput__OnValueChange_int__System__String_);
    func_?(&MethodInfo__WebGLSupport__WebGLInput__OnWindowBlur__);
    func_?(&TypeInfo__WebGLSupport__WebGLInput);
    func_?(&TypeInfo__WebGLSupport__WebGLWindow);
    cRam_? = '\x01';
  }
  VStack_1._span._pointer._value = (void *)0x0;
  VStack_1._span._length = 0;
  VStack_1._arrayFromPool = (Object__Array *)0x0;
  VStack_1._pos = 0;
  if ((this->fields).id == -1) {
    pRVar2 = WebGLInput_GetElemetRect((RectInt *)&puStack_3,this,(MethodInfo *)0x0);
    VStack_1._span._pointer._value = (void *)pRVar2->m_XMin;
    VStack_1._span._length = pRVar2->m_YMin;
    VStack_1._arrayFromPool = (Object__Array *)pRVar2->m_Width;
    VStack_1._pos = pRVar2->m_Height;
    pIVar4 = (this->fields).input;
    if (pIVar4 != (IInputField *)0x0) {
      func_?(0,TypeInfo__WebGLSupport__IInputField,pIVar4);
      pIVar4 = (this->fields).input;
      if (pIVar4 != (IInputField *)0x0) {
        func_?(2,TypeInfo__WebGLSupport__IInputField,pIVar4);
        if ((this->fields).showHtmlElement == 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isMobilePlatform
                    ((MethodInfo *)0x0);
        }
        if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__WebGLSupport__WebGLInput);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__WebGLSupport__WebGLInput);
          cRam_? = '\x01';
        }
        if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__WebGLSupport__WebGLInput);
        }
        mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_7
                  ((uint8_t *)&VStack_1,(MethodInfo *)0x0);
        mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
        SparselyPopulatedArrayAddInfo_1_System_Object__get_Index
                  ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&VStack_1,(MethodInfo *)0x0);
        mscorlib.dll::System::Tuple`3[Object,Object,Object]::Tuple_3_Object_Object_Object__get_Item1
                  ((Tuple_3_Object_Object_Object_ *)&VStack_1,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::ValueListBuilder`1[System::Object]::
        ValueListBuilder_1_System_Object__1_get_Length(&VStack_1,(MethodInfo *)0x0);
        pIVar4 = (this->fields).input;
        if (pIVar4 != (IInputField *)0x0) {
          func_?(3,TypeInfo__WebGLSupport__IInputField,pIVar4);
          pIVar4 = (this->fields).input;
          if (pIVar4 != (IInputField *)0x0) {
            func_?(5,TypeInfo__WebGLSupport__IInputField,pIVar4);
            pIVar4 = (this->fields).input;
            if (pIVar4 != (IInputField *)0x0) {
              func_?(1,TypeInfo__WebGLSupport__IInputField,pIVar4);
              UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isMobilePlatform
                        ((MethodInfo *)0x0);
              (this->fields).id = 0;
              this_00 = (Dictionary_2_System_Object_System_Object_ *)
                        TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
              if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__set_Item
                          (this_00,(Object *)0x0,(Object *)this,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__set_Item_int__WebGLSupport__WebGLInput_
                          );
                pIVar4 = (this->fields).input;
                if (pIVar4 != (IInputField *)0x0) {
                  func_?(1,TypeInfo__WebGLSupport__IInputField,pIVar4);
                  pUVar5 = (UnityAction_1_System_Int32Enum_ *)
                           func_?(TypeInfo__System__Action<int>);
                  if (pUVar5 != (UnityAction_1_System_Int32Enum_ *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                    Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                              (pUVar5,(Object *)0x0,
                               MethodInfo__WebGLSupport__WebGLInput__OnFocus_int_,(MethodInfo *)0x0)
                    ;
                    pUVar5 = (UnityAction_1_System_Int32Enum_ *)
                             func_?(TypeInfo__System__Action<int>);
                    if (pUVar5 != (UnityAction_1_System_Int32Enum_ *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                      Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                (pUVar5,(Object *)0x0,
                                 MethodInfo__WebGLSupport__WebGLInput__OnBlur_int_,(MethodInfo *)0x0
                                );
                      pAVar6 = (Action_2_Int32Enum_Object_ *)
                               func_?(TypeInfo__System__Action<int,_System::String>);
                      if (pAVar6 != (Action_2_Int32Enum_Object_ *)0x0) {
                        mscorlib.dll::System::Action`2[Int32Enum,Object]::
                        Action_2_Int32Enum_Object___ctor
                                  (pAVar6,(Object *)0x0,
                                   MethodInfo__WebGLSupport__WebGLInput__OnValueChange_int__System__String_
                                   ,(MethodInfo *)0x0);
                        pAVar6 = (Action_2_Int32Enum_Object_ *)
                                 func_?(TypeInfo__System__Action<int,_System::String>);
                        if (pAVar6 != (Action_2_Int32Enum_Object_ *)0x0) {
                          mscorlib.dll::System::Action`2[Int32Enum,Object]::
                          Action_2_Int32Enum_Object___ctor
                                    (pAVar6,(Object *)0x0,
                                     MethodInfo__WebGLSupport__WebGLInput__OnEditEnd_int__System__String_
                                     ,(MethodInfo *)0x0);
                          this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
                                    func_?(TypeInfo__System__Action<int,_int>);
                          if (this_01 != (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                            Int32,System::Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                                      (this_01,(Object *)0x0,
                                       MethodInfo__WebGLSupport__WebGLInput__OnTab_int__int_,
                                       (MethodInfo *)0x0);
                            pIVar4 = (this->fields).input;
                            if (pIVar4 != (IInputField *)0x0) {
                              iVar7 = func_?(6,TypeInfo__WebGLSupport__IInputField,pIVar4);
                              if (0 < iVar7) {
                                pIVar4 = (this->fields).input;
                                if (pIVar4 == (IInputField *)0x0) goto code_?;
                                func_?(6,TypeInfo__WebGLSupport__IInputField,pIVar4);
                              }
                              pIVar4 = (this->fields).input;
                              if (pIVar4 != (IInputField *)0x0) {
                                cVar8 = func_?(0xe,TypeInfo__WebGLSupport__IInputField,
                                                        pIVar4);
                                if (cVar8 != '\0') {
                                  pIVar4 = (this->fields).input;
                                  if (pIVar4 == (IInputField *)0x0) goto code_?;
                                  iVar7 = func_?(3,TypeInfo__WebGLSupport__IInputField,
                                                          pIVar4);
                                  if (iVar7 == 0) goto code_?;
                                }
                                this_02 = (NavMesh_OnNavMeshPreUpdate *)
                                          func_?(TypeInfo__System__Action);
                                if (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                  UnityEngine.AIModule.dll::UnityEngine::AI::
                                  NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                            (this_02,(Object *)this,
                                             MethodInfo__WebGLSupport__WebGLInput__OnWindowBlur__,
                                             (MethodInfo *)0x0);
                                  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  if (cRam_? == '\0') {
                                    func_?();
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  if ((TypeInfo__WebGLSupport__WebGLWindow->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  a = (Action__Class *)
                                      TypeInfo__WebGLSupport__WebGLWindow->static_fields->
                                      OnBlurEvent;
                                  do {
                                    VStack_1._span._length =
                                         (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                                                            ((Delegate *)a,(Delegate *)this_02,
                                                             (MethodInfo *)0x0);
                                    pDVar9 = (Delegate *)0x0;
                                    if ((Delegate *)VStack_1._span._length != (Delegate *)0x0) {
                                      if ((Action__Class *)
                                          ((Delegate *)VStack_1._span._length)->klass ==
                                          TypeInfo__System__Action) {
                                        pDVar9 = (Delegate *)VStack_1._span._length;
                                      }
                                      VStack_1._arrayFromPool =
                                           (Object__Array *)TypeInfo__System__Action;
                                      if (pDVar9 == (Delegate *)0x0) goto code_?;
                                    }
                                    if ((TypeInfo__WebGLSupport__WebGLWindow->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      VStack_1._arrayFromPool =
                                           (Object__Array *)TypeInfo__WebGLSupport__WebGLWindow;
                                      VStack_1._span._length = (int32_t)&UNK_?;
                                      func_?();
                                    }
                                    VStack_1._span._pointer._value =
                                         &TypeInfo__WebGLSupport__WebGLWindow->static_fields->
                                          OnBlurEvent;
                                    VStack_1._span._length = (int32_t)pDVar9;
                                    VStack_1._arrayFromPool = (Object__Array *)a;
                                    pAVar10 = (Action__Class *)func_?();
                                    bVar11 = pAVar10 == a;
                                    a = pAVar10;
                                    if (bVar11) {
                                      return;
                                    }
                                  } while( true );
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar12 = func_?(&TypeInfo__System__Exception);
    this_03 = (Exception *)func_?(uVar12);
    func_?(this_03);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_OnSelect___id_____1);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_03,message,method_00);
    uVar12 = func_?(&MethodInfo__WebGLSupport__WebGLInput__OnSelect__);
    VStack_1._span._length = func_?(this_03,uVar12);
    VStack_1._arrayFromPool = (Object__Array *)extraout_ECX;
code_?:
    VStack_1._span._pointer._value = &UNK_?;
    func_?();
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnTab(Int32, Int32) */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_OnTab
               (int32_t id,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__get_Item_int_
                   );
    func_?(&TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus);
    func_?(&TypeInfo__WebGLSupport__WebGLInput);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLInput);
  }
  this = TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
  if (this != (Dictionary_2_System_Int32_WebGLSupport_WebGLInput_ *)0x0) {
    RVar1 = (RegexCharClass_SingleRange)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__get_Item_int_
                      );
    if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor == 0
       ) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__IndexOf_WebGLSupport__WebGLInput_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__get_Item_int_
                     );
      func_?(&TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus);
      cRam_? = '\x01';
    }
    if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor == 0
       ) {
      func_?();
    }
    pLVar2 = TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
    if (pLVar2 != (List_1_WebGLSupport_WebGLInput_ *)0x0) {
      if ((pLVar2->fields)._size < 2) {
        return;
      }
      if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor ==
          0) {
        func_?();
      }
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
      if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        iVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__IndexOf
                          (pLVar3,RVar1,
                           MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__IndexOf_WebGLSupport__WebGLInput_
                          );
        iVar4 = iVar4 + value;
        if (iVar4 < 0) {
          if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pLVar2 = TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
          if (pLVar2 == (List_1_WebGLSupport_WebGLInput_ *)0x0) goto code_?;
          iVar4 = (pLVar2->fields)._size + -1;
        }
        else {
          if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pLVar2 = TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
          if (pLVar2 == (List_1_WebGLSupport_WebGLInput_ *)0x0) goto code_?;
          if ((pLVar2->fields)._size <= iVar4) {
            iVar4 = 0;
          }
        }
        if ((TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->_1).cctor_finished_or_no_cctor
            == 0) {
          func_?();
        }
        pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 TypeInfo__WebGLSupport__WebGLInput__WebGLInputTabFocus->static_fields->inputs;
        if (((pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
            (RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar3,iVar4,
                                MethodInfo__System__Collections__Generic__List<WebGLSupport::WebGLInput>__get_Item_int_
                               ), RVar1 != (RegexCharClass_SingleRange)0x0)) &&
           (*(int *)((int)RVar1 + 0x10) != 0)) {
          func_?();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnValueChange(Int32, String) */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_OnValueChange
               (int32_t id,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__get_Item_int_
                   );
    func_?(&TypeInfo__WebGLSupport__IInputField);
    func_?(&TypeInfo__WebGLSupport__WebGLInput);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLInput);
  }
  this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
         TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
  if (this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this,(Object *)id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return;
    }
    if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WebGLSupport__WebGLInput);
    }
    this_00 = TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
    if (((this_00 != (Dictionary_2_System_Int32_WebGLSupport_WebGLInput_ *)0x0) &&
        (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,id,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__get_Item_int_
                            ), pOVar2 != (Object *)0x0)) &&
       (strB = pOVar2[2].klass, strB != (Object__Class *)0x0)) {
      cVar3 = func_?();
      if (cVar3 == '\0') {
        if (pOVar2[2].klass == (Object__Class *)0x0) goto code_?;
        func_?(4,TypeInfo__WebGLSupport__IInputField,pOVar2[2].klass,strB);
      }
      if (pOVar2[2].klass != (Object__Class *)0x0) {
        iVar4 = func_?(0,TypeInfo__WebGLSupport__IInputField,pOVar2[2].klass);
        if (iVar4 == 5) {
          if (pOVar2[2].klass == (Object__Class *)0x0) goto code_?;
          pSVar5 = (String *)func_?(3,TypeInfo__WebGLSupport__IInputField,pOVar2[2].klass);
          iVar6 = mscorlib.dll::System::String::String_Compare
                            (pSVar5,(String *)strB,1,(MethodInfo *)0x0);
          if (iVar6 == 0) {
            if (pOVar2[2].klass == (Object__Class *)0x0) goto code_?;
            strB = (Object__Class *)
                   func_?(3,TypeInfo__WebGLSupport__IInputField,pOVar2[2].klass);
          }
        }
        if (pOVar2[2].klass != (Object__Class *)0x0) {
          pSVar5 = (String *)func_?(3,TypeInfo__WebGLSupport__IInputField,pOVar2[2].klass);
          bVar1 = mscorlib.dll::System::String::String_op_Inequality
                            ((String *)strB,pSVar5,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            return;
          }
          if (((pOVar2[2].klass != (Object__Class *)0x0) &&
              (iVar4 = func_?(3,TypeInfo__WebGLSupport__IInputField,pOVar2[2].klass),
              iVar4 != 0)) &&
             ((strB != (Object__Class *)0x0 && (pOVar2[2].klass != (Object__Class *)0x0)))) {
            func_?(3,TypeInfo__WebGLSupport__IInputField,pOVar2[2].klass);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IInputField Setup() */

IInputField *
Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_Setup(WebGLInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__WebGLSupport__WrappedInputField);
    cRam_? = '\x01';
  }
  exists = (Object_1 *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                     );
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    (exists,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                       );
    value = (Object__Class *)func_?();
    if (value != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value,ExceptionArgument__Enum_obj,in_stack_3);
      (value->_0).name = (char *)pOVar2;
      func_?();
      pOVar2 = (Object *)func_?();
      if (pOVar2 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar2,ExceptionArgument__Enum_obj,in_stack_3);
        pOVar2[1].klass = value;
        func_?();
        (value->_0).namespaze = (char *)pOVar2;
        func_?(&(value->_0).namespaze);
        return (IInputField *)value;
      }
    }
    func_?();
  }
  uVar4 = func_?();
  this_00 = (Exception *)func_?(uVar4);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Can_not_Setup_WebGLInput__);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar6 = (IInputField *)(*pcVar5)();
  return pIVar6;
}


/* Void Update() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_Update
               (WebGLInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                   );
    func_?(&TypeInfo__WebGLSupport__IInputField);
    func_?(&TypeInfo__WebGLSupport__WebGLInput);
    cRam_? = '\x01';
  }
  if (((this->fields).input == (IInputField *)0x0) ||
     (cVar1 = func_?(8,TypeInfo__WebGLSupport__IInputField,(this->fields).input),
     cVar1 == '\0')) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                     );
      func_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&TypeInfo__WebGLSupport__WebGLInput);
      cRam_? = '\x01';
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isMobilePlatform
                      ((MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WebGLSupport__WebGLInput);
    }
    pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
             TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
    if (pDVar3 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar3,(Object *)(this->fields).id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        return;
      }
      if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                         ((MethodInfo *)0x0);
      if (pEVar4 != (EventSystem *)0x0) {
        x = (pEVar4->fields).m_CurrentSelected;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                  ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WebGLSupport__WebGLInput);
    }
    pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
             TypeInfo__WebGLSupport__WebGLInput->static_fields->instances;
    if (pDVar3 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar3,(Object *)(this->fields).id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Application::
                Application_get_isMobilePlatform((MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
        WebGLInput_OnSelect(this,(MethodInfo *)0x0);
      }
      else {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Application::
                Application_get_isMobilePlatform((MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
      }
      pIVar5 = (this->fields).input;
      if (pIVar5 != (IInputField *)0x0) {
        func_?(10,TypeInfo__WebGLSupport__IInputField,pIVar5,0);
        pIVar5 = (this->fields).input;
        if (pIVar5 != (IInputField *)0x0) {
          func_?(0xc,TypeInfo__WebGLSupport__IInputField,pIVar5,0);
          pIVar5 = (this->fields).input;
          if (pIVar5 != (IInputField *)0x0) {
            func_?(0x12,TypeInfo__WebGLSupport__IInputField,pIVar5);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* WebGLInput() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>
                   );
    func_?(&TypeInfo__WebGLSupport__WebGLInput);
    func_?(&StringLiteral_unity_container);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_WebGLSupport_WebGLInput_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>
                        );
  if (this != (Dictionary_2_System_Int32_WebGLSupport_WebGLInput_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInput>__Dictionary__
              );
    TypeInfo__WebGLSupport__WebGLInput->static_fields->instances = this;
    func_?(TypeInfo__WebGLSupport__WebGLInput->static_fields,this);
    pSVar1 = StringLiteral_unity_container;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__WebGLSupport__WebGLInput->static_fields->_CanvasId_k__BackingField = pSVar1;
    func_?(&TypeInfo__WebGLSupport__WebGLInput->static_fields->_CanvasId_k__BackingField);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* WebGLInput() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput__ctor
               (WebGLInput *this,MethodInfo *method)

{
  (this->fields).id = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* String get_CanvasId() */

String * Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_get_CanvasId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WebGLSupport__WebGLInput);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLInput);
  }
  return TypeInfo__WebGLSupport__WebGLInput->static_fields->_CanvasId_k__BackingField;
}


/* Void set_CanvasId(String) */

void Assembly-CSharp.dll::WebGLSupport::WebGLInput::WebGLInput_set_CanvasId
               (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WebGLSupport__WebGLInput);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInput->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLInput);
  }
  TypeInfo__WebGLSupport__WebGLInput->static_fields->_CanvasId_k__BackingField = value;
  func_?(&TypeInfo__WebGLSupport__WebGLInput->static_fields->_CanvasId_k__BackingField,
                  unaff_EBP);
  return;
}

