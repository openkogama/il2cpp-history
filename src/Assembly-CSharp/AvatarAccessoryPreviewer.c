
/* IEnumerator AnimationEndTrack(Single) */

IEnumerator *
Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_AnimationEndTrack
          (AvatarAccessoryPreviewer *this,float resetDelay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
    cRam_? = '\x01';
  }
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
            func_?(TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,(MethodInfo *)0x0);
  if (this_00 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    this_00[1].monitor = (MonitorData *)this;
    func_?(&this_00[1].monitor);
    this_00[1].klass = (SubscribableVariable_1_System_Int32Enum___Class *)resetDelay;
    return (IEnumerator *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void ChangeAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ChangeAnimation
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    cRam_? = '\x01';
  }
  piVar1 = &(this->fields).currentAnimation;
  *piVar1 = *piVar1 + 1;
  pLVar2 = (this->fields).animations;
  iVar3 = (this->fields).currentAnimation;
  if (pLVar2 != (List_1_System_String_ *)0x0) {
    if ((pLVar2->fields)._size <= iVar3) {
      iVar3 = 1;
    }
    (this->fields).currentAnimation = iVar3;
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).animations;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      animationName =
           mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,(this->fields).currentAnimation,
                      MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_)
      ;
      AvatarAccessoryPreviewer_PlayAnimation_1(this,(String *)animationName,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnDestroy
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarBody;
  if (this_00 != (MVBody *)0x0) {
    MVBody::MVBody_DestroyClone(this_00,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields).toPreviewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).toPreviewer;
    if (pAVar1 == (AvatarPreviewer *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pAVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  ppTVar4 = &(this->fields).avatarResetToTransform;
  x = *ppTVar4;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*ppTVar4 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)*ppTVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    *ppTVar4 = (Transform *)0x0;
    func_?();
  }
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnDrag
               (AvatarAccessoryPreviewer *this,PointerEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  (this->fields).pickedAccessory = 0;
  fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
          InputUnsafeUtility_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  pAVar2 = (this->fields).toPreviewer;
  (this->fields).currentRotationSpeed =
       (float)((uint)fVar1 ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
       (this->fields).rotationSensitivity;
  if (pAVar2 != (AvatarPreviewer *)0x0) {
    pCVar3 = (pAVar2->fields).previewCam;
    if (pCVar3 != (Camera *)0x0) {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                        (pCVar3,(MethodInfo *)0x0);
      fVar5 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
              InputUnsafeUtility_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      fVar1 = (this->fields).zoomSpeed;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                (pCVar3,fVar1 * fVar5 * fVar6 + fVar4,(MethodInfo *)0x0);
      pAVar2 = (this->fields).toPreviewer;
      if ((pAVar2 != (AvatarPreviewer *)0x0) &&
         (pCVar3 = (pAVar2->fields).previewCam, pCVar3 != (Camera *)0x0)) {
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                          (pCVar3,(MethodInfo *)0x0);
        fVar1 = _UNK_?;
        if ((fVar4 < _UNK_?) || (fVar1 = _UNK_?, _UNK_? < fVar4)) {
          fVar4 = fVar1;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                  (pCVar3,fVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPointerClick(PointerEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnPointerClick
               (AvatarAccessoryPreviewer *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionHelperAvatarAccessory>_bool_
                   );
    func_?(&TypeInfo__UnityEngine__RectTransformUtility);
    func_?(&
                    MethodInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0___OnPointerClick_b__0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0);
    cRam_? = '\x01';
  }
  pGStack_1 = (GameObject *)0x0;
  fVar2 = 0.0;
  fVar3 = 0.0;
  func_?(&stack0xffffff7c,0,0x2c);
  pVVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                      ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
  fVar5 = pVVar4->x;
  fVar6 = pVVar4->y;
  pRVar7 = (this->fields).toImage;
  if (pRVar7 != (RawImage *)0x0) {
    pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pRVar7,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__RectTransformUtility->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    VVar9.y = fVar6;
    VVar9.x = fVar5;
    UnityEngine.UIModule.dll::UnityEngine::RectTransformUtility::
    RectTransformUtility_ScreenPointToLocalPointInRectangle
              (pRVar8,VVar9,(Camera *)0x0,(Vector2 *)&stack0xffffffe8,(MethodInfo *)0x0);
    pRVar7 = (this->fields).toImage;
    if ((pRVar7 != (RawImage *)0x0) &&
       (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pRVar7,(MethodInfo *)0x0), pRVar8 != (RectTransform *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffb0,pRVar8,(MethodInfo *)0x0);
      pRVar7 = (this->fields).toImage;
      if ((pRVar7 != (RawImage *)0x0) &&
         (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pRVar7,(MethodInfo *)0x0), pRVar8 != (RectTransform *)0x0
         )) {
        VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                           (pRVar8,(MethodInfo *)0x0);
        fVar5 = VVar9.x;
        pRVar7 = (this->fields).toImage;
        if ((pRVar7 != (RawImage *)0x0) &&
           (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pRVar7,(MethodInfo *)0x0),
           pRVar8 != (RectTransform *)0x0)) {
          fVar10 = 0.0;
          pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                              ((Rect *)&stack0xffffffb0,pRVar8,(MethodInfo *)0x0);
          fVar6 = pRVar11->m_Height;
          pRVar7 = (this->fields).toImage;
          if ((pRVar7 != (RawImage *)0x0) &&
             (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  ((Graphic *)pRVar7,(MethodInfo *)0x0),
             pRVar8 != (RectTransform *)0x0)) {
            VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                               (pRVar8,(MethodInfo *)0x0);
            pAVar12 = (this->fields).toPreviewer;
            if ((pAVar12 != (AvatarPreviewer *)0x0) &&
               (this_00 = (pAVar12->fields).previewCam, this_00 != (Camera *)0x0)) {
              pos.y = fVar3 + fVar6 / (_UNK_? / VVar9.y);
              pos.x = fVar2 + fVar10 / (_UNK_? / fVar5);
              pos.z = 0.0;
              pRVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                                  ((Ray *)&stack0xffffffa8,this_00,pos,(MethodInfo *)0x0);
              if (((this->fields).pickedAccessory == 0) ||
                 (uVar14 = (pRVar13->m_Direction).z, uVar15 = (pRVar13->m_Origin).x,
                 uVar16 = (pRVar13->m_Origin).y, uVar17 = (pRVar13->m_Origin).z,
                 ray.m_Origin.z = (float)uVar17, ray.m_Origin.y = (float)uVar16,
                 ray.m_Origin.x = (float)uVar15, uVar18 = (pRVar13->m_Direction).x,
                 uVar19 = (pRVar13->m_Direction).y, ray.m_Direction.y = (float)uVar19,
                 ray.m_Direction.x = (float)uVar18, ray.m_Direction.z = (float)uVar14,
                 bVar20 = AvatarAccessoryPreviewer_PickAccessory
                                    (this,ray,&pGStack_1,(RaycastHit *)&stack0xffffff7c,
                                     (MethodInfo *)0x0), bVar20 == 0)) {
                return;
              }
              this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              UxmlObjectListAttributeDescription`1[System::Object]::
              UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
              if (((pGStack_1 != (GameObject *)0x0) &&
                  (pOVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_GetComponentInChildren_3
                                       (pGStack_1,1,
                                        SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionHelperAvatarAccessory>_bool_
                                       ), pOVar21 != (Object *)0x0)) &&
                 (pAVar22 = AccessoryDataManager::
                            AccessoryDataManager_GetAccessoryDataByStreamingAssetId
                                      ((int32_t)pOVar21[3].monitor,(MethodInfo *)0x0),
                 this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0)) {
                (this_01->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)pAVar22
                ;
                func_?();
                root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this,(MethodInfo *)0x0);
                callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?()
                ;
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                           (Object *)this_01,
                           MethodInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0___OnPointerClick_b__0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (root,(BaseEventData *)0x0,callbackFunction,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                          );
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnPointerDown
               (AvatarAccessoryPreviewer *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).currentRotationSpeed = 0.0;
  (this->fields).pickedAccessory = 1;
  return;
}


/* Void OnRestartAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).goAnimation;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pAVar1 = (this->fields).goAnimation;
    if (pAVar1 == (Animation *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pAVar4 = (ActivateOnAnimationBase__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)pAVar1,
                        ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                       );
    ppAVar5 = &(this->fields).OnAnimationActivators;
    *ppAVar5 = pAVar4;
    func_?(ppAVar5,pAVar4);
    AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers(this,(MethodInfo *)0x0);
    AvatarAccessoryPreviewer_PlayAnimation_1(this,StringLiteral_Idle,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean PickAccessory(Ray, GameObject ByRef, RaycastHit ByRef) */

bool Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PickAccessory
               (AvatarAccessoryPreviewer *this,Ray ray,GameObject **gameObject,
               RaycastHit *raycastHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<SelectionHelperAvatarAccessory>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Physics);
    func_?(&StringLiteral_Hidden);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawRay
            (ray.m_Origin,ray.m_Direction,color,10.0,(MethodInfo *)0x0);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Hidden,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar2 = (float)(1 << ((byte)iVar1 & 0x1f));
  ray_00.m_Direction.y = INFINITY;
  auVar3 = SUB1612(ray._0_16_,0);
  ray_00.m_Origin.x = (float)auVar3._0_4_;
  ray_00.m_Origin.y = (float)auVar3._4_4_;
  ray_00.m_Origin.z = (float)auVar3._8_4_;
  ray_00.m_Direction.x = (float)SUB164(ray._0_16_,0xc);
  ray_00.m_Direction.z = fVar2;
  pRVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastAll_5
                      (ray_00,INFINITY,(int32_t)fVar2,(MethodInfo *)0x0);
  uVar5 = 0;
  if (pRVar4 == (RaycastHit__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    this_01 = pRVar4->vector;
    while( true ) {
      if ((int)pRVar4->max_length <= (int)uVar5) {
        pGRam00000000 = (GameObject *)0x0;
        func_?();
        uStack6 = 0;
        pRStack7 = raycastHit;
        func_?();
        return 0;
      }
      if (pRVar4->max_length <= uVar5) break;
      this_00 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                          (this_01,(MethodInfo *)0x0);
      if (this_00 == (Collider *)0x0) goto code_?;
      pGRam00000000 =
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
      func_?();
      if (pRVar4->max_length <= uVar5) break;
      fVar2 = (this_01->m_Point).y;
      fVar8 = (this_01->m_Point).z;
      fVar9 = (this_01->m_Normal).x;
      iVar1 = this_01->m_Collider;
      fVar10 = (this_01->m_Normal).y;
      fVar11 = (this_01->m_Normal).z;
      uVar12 = this_01->m_FaceID;
      fVar13 = this_01->m_Distance;
      VVar14 = this_01->m_UV;
      (raycastHit->m_Point).x = (this_01->m_Point).x;
      (raycastHit->m_Point).y = fVar2;
      (raycastHit->m_Point).z = fVar8;
      (raycastHit->m_Normal).x = fVar9;
      (raycastHit->m_Normal).y = fVar10;
      (raycastHit->m_Normal).z = fVar11;
      raycastHit->m_FaceID = uVar12;
      raycastHit->m_Distance = fVar13;
      raycastHit->m_UV = VVar14;
      raycastHit->m_Collider = iVar1;
      if (pGRam00000000 == (GameObject *)0x0) goto code_?;
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                    (pGRam00000000,
                     SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<SelectionHelperAvatarAccessory>__
                    );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      this_01 = this_01 + 1;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  bVar15 = (*pcVar16)();
  return bVar15;
}


/* Void PlayAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PlayAnimation
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).animations;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    animationName =
         mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
         RegexCharClass+SingleRange]::
         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                   (this_00,(this->fields).currentAnimation,
                    MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    AvatarAccessoryPreviewer_PlayAnimation_1(this,(String *)animationName,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PlayAnimation(String) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PlayAnimation_1
               (AvatarAccessoryPreviewer *this,String *animationName,MethodInfo *method)

{
  pAVar1 = (this->fields).goAnimation;
  if (pAVar1 != (Animation *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
              (pAVar1,animationName,(MethodInfo *)0x0);
    pAVar2 = (this->fields).OnAnimationActivators;
    uVar3 = 0;
    if (pAVar2 != (ActivateOnAnimationBase__Array *)0x0) {
      iVar4 = 0x10;
      do {
        if ((int)pAVar2->max_length <= (int)uVar3) {
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                    ((MonoBehaviour *)this,(MethodInfo *)0x0);
          pAVar1 = (this->fields).goAnimation;
          if ((pAVar1 != (Animation *)0x0) &&
             (this_00 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                  (pAVar1,animationName,(MethodInfo *)0x0),
             this_00 != (AnimationState *)0x0)) {
            UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_get_length
                      (this_00,(MethodInfo *)0x0);
            fVar5 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_get_speed(this_00,(MethodInfo *)0x0);
            WVar6 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_get_wrapMode
                              ((AnimationState *)((float)this_00 / fVar5),(MethodInfo *)0x0);
            fVar7 = _UNK_?;
            if (WVar6 == WrapMode__Enum_Loop) {
              fVar7 = _UNK_?;
            }
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_01 = (SubscribableVariable_1_System_Int32Enum_ *)func_?();
            SubscribableVariable`1[System::Int32Enum]::
            SubscribableVariable_1_System_Int32Enum___ctor(this_01,0,(MethodInfo *)0x0);
            if (this_01 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
              this_01[1].monitor = (MonitorData *)this;
              func_?(&this_01[1].monitor,this);
              this_01[1].klass =
                   (SubscribableVariable_1_System_Int32Enum___Class *)
                   (((float)this_00 / fVar5) * fVar7);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_StartCoroutine_Auto
                        ((MonoBehaviour *)this,(IEnumerator *)this_01,(MethodInfo *)0x0);
              return;
            }
          }
          break;
        }
        if (pAVar2 == (ActivateOnAnimationBase__Array *)0x0) break;
        if (pAVar2->max_length <= uVar3) goto code_?;
        piVar8 = *(int **)((int)pAVar2->vector + iVar4 + -0x10);
        if (piVar8 == (int *)0x0) break;
        (**(code **)(*piVar8 + 0xe8))(piVar8,animationName,*(undefined4 *)(*piVar8 + 0xec));
        pAVar2 = (this->fields).OnAnimationActivators;
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (pAVar2 != (ActivateOnAnimationBase__Array *)0x0);
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RemoveSkinnedMeshOptimizers() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::
     AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodyClone;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (this_00,
                        SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                       );
    uVar2 = 0;
    if (pOVar1 != (Object__Array *)0x0) {
      ppOVar3 = pOVar1->vector;
code_?:
      if ((int)pOVar1->max_length <= (int)uVar2) {
        return;
      }
      if (uVar2 < pOVar1->max_length) {
        pOVar4 = (Object_1 *)*ppOVar3;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (pOVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 == 0) {
code_?:
          uVar2 = uVar2 + 1;
          ppOVar3 = ppOVar3 + 1;
          goto code_?;
        }
        if (uVar2 < pOVar1->max_length) {
          if ((SkinnedMeshOptimizer *)*ppOVar3 == (SkinnedMeshOptimizer *)0x0)
          goto code_?;
          SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
                    ((SkinnedMeshOptimizer *)*ppOVar3,(MethodInfo *)0x0);
          if (uVar2 < pOVar1->max_length) {
            if ((SkinnedMeshOptimizer *)*ppOVar3 != (SkinnedMeshOptimizer *)0x0) {
              SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
                        ((SkinnedMeshOptimizer *)*ppOVar3,(MethodInfo *)0x0);
              if (uVar2 < pOVar1->max_length) {
                pOVar4 = (Object_1 *)*ppOVar3;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          (pOVar4,(MethodInfo *)0x0);
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
        }
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ResetPreviewTransform() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ResetPreviewTransform
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if ((this->fields).imagesReady == 0) {
    return;
  }
  this_00 = (this->fields).bodyClone;
  if (this_00 != (GameObject *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar2 = (pQVar1->identityQuaternion).x;
    fVar3 = (pQVar1->identityQuaternion).y;
    fVar4 = (pQVar1->identityQuaternion).z;
    fVar5 = (pQVar1->identityQuaternion).w;
    auVar6._4_8_ = 0;
    auVar6._0_4_ = _UNK_?;
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffffa0,(Vector3)(auVar6 << 0x20),(MethodInfo *)0x0
                        );
    fVar8 = pQVar7->y;
    fVar9 = pQVar7->z;
    fVar10 = pQVar7->w;
    if (this_02 != (Transform *)0x0) {
      value.y = (fVar8 * fVar5 + fVar10 * fVar3 + pQVar7->x * fVar4) - fVar9 * fVar2;
      value.x = (pQVar7->x * fVar5 + fVar10 * fVar2 + fVar9 * fVar3) - fVar8 * fVar4;
      value.z = (fVar9 * fVar5 + fVar10 * fVar4 + fVar8 * fVar2) - pQVar7->x * fVar3;
      value.w = ((fVar10 * fVar5 - pQVar7->x * fVar2) - fVar8 * fVar3) - fVar9 * fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_02,value,(MethodInfo *)0x0);
      pAVar11 = (this->fields).toPreviewer;
      if ((pAVar11 != (AvatarPreviewer *)0x0) &&
         (this_01 = (pAVar11->fields).previewCam, this_01 != (Camera *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                  (this_01,(this->fields).startFov,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetupPreviewer(MVBody) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_SetupPreviewer
               (AvatarAccessoryPreviewer *this,MVBody *avatarBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&
                    ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                   );
    func_?(&
                    InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                   );
    func_?(&
                    AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                   );
    func_?(&
                    AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                   );
    func_?(&
                    AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                   );
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    func_?(&
                    UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                   );
    func_?(&
                    PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                   );
    func_?(&
                    SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                   );
    func_?(&
                    SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    func_?(&
                    AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__Color);
    func_?(&StringLiteral_SETUP);
    func_?(&StringLiteral_Avatar_accessory_preview);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_SETUP,(MethodInfo *)0x0);
  ppMVar1 = &(this->fields).avatarBody;
  *ppMVar1 = avatarBody;
  func_?(ppMVar1,avatarBody);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  auVar2._4_8_ = 0;
  auVar2._0_4_ = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
            ((Quaternion *)&stack0xffffffd0,(Vector3)(auVar2 << 0x20),(MethodInfo *)0x0);
  pMVar3 = (Material *)&(this->fields).bodyClone;
  pGVar4 = *(GameObject **)pMVar3;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)pGVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    pGVar4 = (this->fields).bodyClone;
    if ((pGVar4 == (GameObject *)0x0) ||
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar4,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
              ((Quaternion *)&stack0xffffffa0,pTVar6,(MethodInfo *)0x0);
  }
  if (avatarBody != (MVBody *)0x0) {
    pGVar4 = MVBody::MVBody_CreateClone(avatarBody,1,1,(MethodInfo *)0x0);
    (this->fields).bodyClone = pGVar4;
    func_?();
    MVBody::MVBody_set_AccessoryMoveOverride(avatarBody,0,(MethodInfo *)0x0);
    pTVar6 = (this->fields).avatarResetToTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    puVar7 = (undefined *)0x0;
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)pTVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      pTVar6 = (this->fields).avatarResetToTransform;
      if (pTVar6 == (Transform *)0x0) goto code_?;
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar6,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar4,(MethodInfo *)0x0);
    }
    pAVar8 = (this->fields).toPreviewer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)pAVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      pAVar8 = (this->fields).toPreviewer;
      if (pAVar8 == (AvatarPreviewer *)0x0) goto code_?;
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pAVar8,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar4,(MethodInfo *)0x0);
    }
    pGVar4 = (GameObject *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              (pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (GameObject *)0x0) {
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar4,(MethodInfo *)0x0);
      (this->fields).avatarResetToTransform = pTVar6;
      func_?();
      pRVar9 = (this->fields).toImage;
      if (pRVar9 != (RawImage *)0x0) {
        (*(code *)(pRVar9->klass->vtable).set_color.method)();
        pGVar4 = (this->fields).bodyClone;
        if (pGVar4 != (GameObject *)0x0) {
          pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentsInChildren
                              (pGVar4,
                               UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                              );
          uVar11 = 0;
          if (pOVar10 != (Object__Array *)0x0) {
            ppOVar12 = pOVar10->vector;
            for (; (int)uVar11 < (int)pOVar10->max_length; uVar11 = uVar11 + 1) {
              if (pOVar10->max_length <= uVar11) goto code_?;
              if ((Behaviour *)*ppOVar12 == (Behaviour *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)*ppOVar12,0,(MethodInfo *)0x0);
              ppOVar12 = ppOVar12 + 1;
            }
            if (pMVar3->klass != (Material__Class *)0x0) {
              pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren
                                  ((GameObject *)pMVar3->klass,
                                   PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                  );
              uVar11 = 0;
              if (pOVar10 != (Object__Array *)0x0) {
                ppOVar12 = pOVar10->vector;
                for (; (int)uVar11 < (int)pOVar10->max_length; uVar11 = uVar11 + 1) {
                  if (pOVar10->max_length <= uVar11) goto code_?;
                  if (((Component *)*ppOVar12 == (Component *)0x0) ||
                     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)*ppOVar12,(MethodInfo *)0x0),
                     pGVar4 == (GameObject *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,0,(MethodInfo *)0x0);
                  ppOVar12 = ppOVar12 + 1;
                }
                if (pMVar3->klass != (Material__Class *)0x0) {
                  pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponentsInChildren
                                      ((GameObject *)pMVar3->klass,
                                       AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                                      );
                  uVar11 = 0;
                  if (pOVar10 != (Object__Array *)0x0) {
                    ppOVar12 = pOVar10->vector;
                    for (; (int)uVar11 < (int)pOVar10->max_length; uVar11 = uVar11 + 1) {
                      if (pOVar10->max_length <= uVar11) goto code_?;
                      if (((Component *)*ppOVar12 == (Component *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject
                                              ((Component *)*ppOVar12,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,0,(MethodInfo *)0x0);
                      ppOVar12 = ppOVar12 + 1;
                    }
                    if (pMVar3->klass != (Material__Class *)0x0) {
                      p_Var17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponentsInChildren_3
                                          ((GameObject *)pMVar3->klass,1,
                                           SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                                          );
                      uVar11 = 0;
                      if (p_Var17 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                        pp_Var28 = p_Var17->vector;
                        for (; (int)uVar11 < (int)p_Var17->max_length; uVar11 = uVar11 + 1) {
                          if (p_Var17->max_length <= uVar11) goto code_?;
                          if (((Component *)*pp_Var28 == (Component *)0x0) ||
                             (this_01 = (Collider *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_GetComponent_1
                                                  ((Component *)*pp_Var28,
                                                                                                      
                                                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                                                  ), this_01 == (Collider *)0x0))
                          goto code_?;
                          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                                    (this_01,1,(MethodInfo *)0x0);
                          pp_Var28 = pp_Var28 + 1;
                        }
                        if (pMVar3->klass != (Material__Class *)0x0) {
                          p_Var17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentsInChildren_3
                                              ((GameObject *)pMVar3->klass,1,
                                               AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                              );
                          uVar11 = 0;
                          if (p_Var17 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                            pp_Var28 = p_Var17->vector;
                            for (; (int)uVar11 < (int)p_Var17->max_length; uVar11 = uVar11 + 1) {
                              if (p_Var17->max_length <= uVar11) goto code_?;
                              if ((Behaviour *)*pp_Var28 == (Behaviour *)0x0) goto code_?;
                              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                              Behaviour_set_enabled((Behaviour *)*pp_Var28,1,(MethodInfo *)0x0);
                              pp_Var28 = pp_Var28 + 1;
                            }
                            if (pMVar3->klass != (Material__Class *)0x0) {
                              p_Var17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponentsInChildren_3
                                                  ((GameObject *)pMVar3->klass,1,
                                                                                                      
                                                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                                  );
                              uVar11 = 0;
                              if (p_Var17 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                pp_Var28 = p_Var17->vector;
                                for (; (int)uVar11 < (int)p_Var17->max_length; uVar11 = uVar11 + 1)
                                {
                                  if (p_Var17->max_length <= uVar11) goto code_?;
                                  if ((Behaviour *)*pp_Var28 == (Behaviour *)0x0)
                                  goto code_?;
                                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                  Behaviour_set_enabled((Behaviour *)*pp_Var28,1,(MethodInfo *)0x0);
                                  pp_Var28 = pp_Var28 + 1;
                                }
                                if (pMVar3->klass != (Material__Class *)0x0) {
                                  pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_GetComponentsInChildren
                                                      ((GameObject *)pMVar3->klass,
                                                                                                              
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                  uVar11 = 0;
                                  if (pOVar10 != (Object__Array *)0x0) {
                                    ppOVar12 = pOVar10->vector;
                                    for (; (int)uVar11 < (int)pOVar10->max_length;
                                        uVar11 = uVar11 + 1) {
                                      if (pOVar10->max_length <= uVar11) goto code_?;
                                      if ((Component *)*ppOVar12 == (Component *)0x0)
                                      goto code_?;
                                      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_gameObject
                                                          ((Component *)*ppOVar12,(MethodInfo *)0x0)
                                      ;
                                      if ((TypeInfo__UnityEngine__Object->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_Destroy_1((Object_1 *)pGVar4,(MethodInfo *)0x0);
                                      ppOVar12 = ppOVar12 + 1;
                                    }
                                    if (pMVar3->klass != (Material__Class *)0x0) {
                                      this_05 = pMVar3;
                                      this_02 = (Component *)
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_GetComponentInChildren_1
                                                          ((GameObject *)pMVar3->klass,
                                                                                                                      
                                                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                                  );
                                      if ((TypeInfo__UnityEngine__Object->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                               Object_1_op_Inequality
                                                         ((Object_1 *)this_02,(Object_1 *)0x0,
                                                          (MethodInfo *)0x0);
                                      if (bVar5 != 0) {
                                        if ((this_02 == (Component *)0x0) ||
                                           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_get_gameObject
                                                                (this_02,(MethodInfo *)0x0),
                                           pGVar4 == (GameObject *)0x0)) goto code_?;
                                        puVar7 = &UNK_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                                      }
                                      AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers
                                                (this,(MethodInfo *)0x0);
                                      if (pMVar3->klass != (Material__Class *)0x0) {
                                        pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_GetComponentsInChildren
                                                            ((GameObject *)pMVar3->klass,
                                                                                                                          
                                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                                  );
                                        puVar13 = (undefined *)0x0;
                                        if (pOVar10 != (Object__Array *)0x0) {
                                          __return_storage_ptr__ = (Color *)pOVar10->vector;
                                          for (; (int)puVar13 < (int)pOVar10->max_length;
                                              puVar13 = puVar13 + 1) {
                                            uVar11 = 0;
                                            iVar14 = 0x10;
                                            while( true ) {
                                              if ((undefined *)pOVar10->max_length <= puVar13)
                                              goto code_?;
                                              if (((Renderer *)__return_storage_ptr__->r ==
                                                   (Renderer *)0x0) ||
                                                 (pMVar15 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)
                                                                       __return_storage_ptr__->r,
                                                                       (MethodInfo *)0x0),
                                                 pMVar15 == (Material__Array *)0x0))
                                              goto code_?;
                                              if ((int)pMVar15->max_length <= (int)uVar11) break;
                                              if ((undefined *)pOVar10->max_length <= puVar13)
                                              goto code_?;
                                              if (((Renderer *)__return_storage_ptr__->r ==
                                                   (Renderer *)0x0) ||
                                                 (pMVar15 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)
                                                                       __return_storage_ptr__->r,
                                                                       (MethodInfo *)0x0),
                                                 pMVar15 == (Material__Array *)0x0))
                                              goto code_?;
                                              if (pMVar15->max_length <= uVar11)
                                              goto code_?;
                                              pMVar3 = *(Material **)
                                                         ((int)pMVar15->vector + iVar14 + -0x10);
                                              if (pMVar3 == (Material *)0x0) goto code_?;
                                              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::
                                                       Material::Material_HasProperty_1
                                                                 (pMVar3,StringLiteral__Color,
                                                                  (MethodInfo *)0x0);
                                              if (bVar5 != 0) {
                                                if ((undefined *)pOVar10->max_length <= puVar13)
                                                goto code_?;
                                                if (((Renderer *)__return_storage_ptr__->r ==
                                                     (Renderer *)0x0) ||
                                                   (pMVar15 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Renderer::
                                                              Renderer_get_materials
                                                                        ((Renderer *)
                                                                         __return_storage_ptr__->r,
                                                                         (MethodInfo *)0x0),
                                                   pMVar15 == (Material__Array *)0x0))
                                                goto code_?;
                                                if (pMVar15->max_length <= uVar11)
                                                goto code_?;
                                                pMVar3 = *(Material **)
                                                           ((int)pMVar15->vector + iVar14 + -0x10);
                                                if (pMVar3 == (Material *)0x0)
                                                goto code_?;
                                                __return_storage_ptr__ = (Color *)&stack0xffffffd0;
                                                pOVar10 = (Object__Array *)&UNK_?;
                                                pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Material::Material_get_color
                                                                    (__return_storage_ptr__,pMVar3,
                                                                     (MethodInfo *)0x0);
                                                fVar17 = pCVar16->r;
                                                fVar18 = pCVar16->g;
                                                fVar19 = pCVar16->b;
                                                if ((Material *)pOVar10->max_length <= pMVar3)
                                                goto code_?;
                                                if (((Renderer *)__return_storage_ptr__->r ==
                                                     (Renderer *)0x0) ||
                                                   (pMVar15 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Renderer::
                                                              Renderer_get_materials
                                                                        ((Renderer *)
                                                                         __return_storage_ptr__->r,
                                                                         (MethodInfo *)0x0),
                                                   pMVar15 == (Material__Array *)0x0))
                                                goto code_?;
                                                if (pMVar15->max_length <= uVar11)
                                                goto code_?;
                                                this_05 = *(Material **)
                                                           ((int)pMVar15->vector + iVar14 + -0x10);
                                                if (this_05 == (Material *)0x0)
                                                goto code_?;
                                                puVar13 = &UNK_?;
                                                value_02.g = fVar18;
                                                value_02.r = fVar17;
                                                value_02.b = fVar19;
                                                value_02.a = 1.0;
                                                UnityEngine.CoreModule.dll::UnityEngine::Material::
                                                Material_set_color(this_05,value_02,
                                                                   (MethodInfo *)0x0);
                                              }
                                              uVar11 = uVar11 + 1;
                                              iVar14 = iVar14 + 4;
                                            }
                                            __return_storage_ptr__ =
                                                 (Color *)&__return_storage_ptr__->g;
                                          }
                                          if (this_05->klass != (Material__Class *)0x0) {
                                            pAVar20 = (Animation *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::
                                                      GameObject_GetComponentInChildren_1
                                                                ((GameObject *)this_05->klass,
                                                                                                                                  
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                            ppAVar21 = &(this->fields).goAnimation;
                                            *ppAVar21 = pAVar20;
                                            func_?();
                                            pAVar20 = *ppAVar21;
                                            this_04 = (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)(this->fields).animations;
                                            if (this_04 !=
                                                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                 *)0x0) {
                                              fVar17 = (float)(this->fields).currentAnimation;
                                              puVar13 = &UNK_?;
                                              animation = mscorlib.dll::System::Collections::Generic
                                                          ::List`1[System::Text::RegularExpressions
                                                          ::RegexCharClass+SingleRange]::
                                                                                                                    
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                            (this_04,(int32_t)fVar17,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                                                  );
                                              if (pAVar20 != (Animation *)0x0) {
                                                UnityEngine.AnimationModule.dll::UnityEngine::
                                                Animation::Animation_Play_2
                                                          (pAVar20,(String *)animation,
                                                           (MethodInfo *)0x0);
                                                if (*ppAVar21 != (Animation *)0x0) {
                                                  pAVar22 = (ActivateOnAnimationBase__Array *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Component::
                                                            Component_GetComponentsInChildren
                                                                      ((Component *)*ppAVar21,
                                                                                                                                              
                                                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                                                  );
                                                  ppAVar23 = &(this->fields).OnAnimationActivators;
                                                  *ppAVar23 = pAVar22;
                                                  func_?();
                                                  pAVar22 = *ppAVar23;
                                                  uVar11 = 0;
                                                  if (pAVar22 !=
                                                      (ActivateOnAnimationBase__Array *)0x0) {
                                                    iVar14 = 0x10;
                                                    while ((int)uVar11 < (int)pAVar22->max_length) {
                                                      pAVar22 = (this->fields).OnAnimationActivators
                                                      ;
                                                      if (pAVar22 ==
                                                          (ActivateOnAnimationBase__Array *)0x0)
                                                      goto code_?;
                                                      if (pAVar22->max_length <= uVar11)
                                                      goto code_?;
                                                      piVar24 = *(int **)((int)pAVar22->vector +
                                                                        iVar14 + -0x10);
                                                      this_00 = (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)(this->fields).animations;
                                                  if ((this_00 ==
                                                       (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)0x0) || (mscorlib.dll::System::Collections::
                                                             Generic::List`1[System::Text::
                                                             RegularExpressions::
                                                             RegexCharClass+SingleRange]::
                                                                                                                          
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                            (this_00,(this->fields).currentAnimation
                                                             ,
                                                  MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                                                  ), piVar24 == (int *)0x0)) goto code_?;
                                                  (**(code **)(*piVar24 + 0xe8))();
                                                  uVar11 = uVar11 + 1;
                                                  iVar14 = iVar14 + 4;
                                                  pAVar22 = (this->fields).OnAnimationActivators;
                                                  if (pAVar22 ==
                                                      (ActivateOnAnimationBase__Array *)0x0)
                                                  goto code_?;
                                                  }
                                                  pAVar8 = (this->fields).previewer;
                                                  if ((TypeInfo__UnityEngine__Object->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  pAVar8 = (AvatarPreviewer *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Object::Object_1_Instantiate_4
                                                                      ((Object *)pAVar8,
                                                                                                                                              
                                                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                                  );
                                                  ppAVar25 = &(this->fields).toPreviewer;
                                                  *ppAVar25 = pAVar8;
                                                  func_?();
                                                  iVar26 = (this->fields).previewDimensionsX;
                                                  pAVar8 = *ppAVar25;
                                                  textureHeight = (this->fields).previewDimensionsY;
                                                  pMVar27 = MVGameControllerBase::
                                                            MVGameControllerBase_get_LocalPlayer
                                                                      ((MethodInfo *)0x0);
                                                  if ((pMVar27 != (MVLocalPlayer *)0x0) &&
                                                     (pMVar28 = MVLocalPlayer::
                                                                MVLocalPlayer_get_Body
                                                                          (pMVar27,(MethodInfo *)0x0
                                                                          ),
                                                     pMVar28 != (MVBody *)0x0)) {
                                                    layersToRender =
                                                         (pMVar28->fields)._._._.previewLayerMask;
                                                    pTVar6 = (this->fields).avatarResetToTransform;
                                                    uVar29 = 0xbf00000000000000;
                                                    fVar18 = -1.0;
                                                    fVar19 = 100.0;
                                                    fVar30 = 100.0;
                                                    fVar31 = 100.0;
                                                    pMVar27 = MVGameControllerBase::
                                                              MVGameControllerBase_get_LocalPlayer
                                                                        ((MethodInfo *)0x0);
                                                    if ((pMVar27 != (MVLocalPlayer *)0x0) &&
                                                       (pMVar28 = MVLocalPlayer::
                                                                  MVLocalPlayer_get_Body
                                                                            (pMVar27,(MethodInfo *)
                                                                                     0x0),
                                                       pAVar8 != (AvatarPreviewer *)0x0)) {
                                                      previewPosition.y = fVar30;
                                                      previewPosition.x = fVar19;
                                                      cameraOffset.z = fVar18;
                                                      cameraOffset.x = (float)(int)uVar29;
                                                      cameraOffset.y =
                                                           (float)(int)((ulonglong)uVar29 >> 0x20);
                                                      previewPosition.z = fVar31;
                                                      AvatarPreviewer::AvatarPreviewer_Initialize
                                                                (pAVar8,iVar26,textureHeight,
                                                                 CameraClearFlags__Enum_Color,
                                                                 layersToRender,cameraOffset,pTVar6
                                                                 ,previewPosition,
                                                                                                                                  
                                                  StringLiteral_Avatar_accessory_preview,
                                                  (MVWorldObjectClient *)pMVar28,
                                                  (this->fields).bodyClone,
                                                  (Vector3)ZEXT812(0x41700000),(MethodInfo *)0x0);
                                                  pAVar8 = (this->fields).toPreviewer;
                                                  if (((pAVar8 != (AvatarPreviewer *)0x0) &&
                                                      (pCVar32 = (pAVar8->fields).previewCam,
                                                      pCVar32 != (Camera *)0x0)) &&
                                                     (pTVar6 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pCVar32,
                                                                           (MethodInfo *)0x0),
                                                     pTVar6 != (Transform *)0x0)) {
                                                    pVVar33 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffffc0
                                                                         ,pTVar6,(MethodInfo *)0x0)
                                                    ;
                                                    uVar34 = pVVar33->x;
                                                    uVar35 = pVVar33->y;
                                                    value.y = (float)uVar35 + _UNK_?;
                                                    value.x = (float)uVar34 + 0.0;
                                                    value.z = pVVar33->z + 0.0;
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_set_position
                                                              (pTVar6,value,(MethodInfo *)0x0);
                                                    pGVar4 = (this->fields).bodyClone;
                                                    if ((pGVar4 != (GameObject *)0x0) &&
                                                       (pTVar6 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar4,(MethodInfo *)
                                                                                     0x0),
                                                       pTVar6 != (Transform *)0x0)) {
                                                      value_00.y = (float)puVar13;
                                                      value_00.x = (float)puVar7;
                                                      value_00.z = (float)this_04;
                                                      value_00.w = fVar17;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_rotation
                                                                (pTVar6,value_00,(MethodInfo *)0x0)
                                                      ;
                                                      pAVar8 = (this->fields).toPreviewer;
                                                      if ((pAVar8 != (AvatarPreviewer *)0x0) &&
                                                         (pCVar32 = (pAVar8->fields).previewCam,
                                                         pCVar32 != (Camera *)0x0)) {
                                                        fVar17 = UnityEngine.CoreModule.dll::
                                                                 UnityEngine::Camera::
                                                                 Camera_get_fieldOfView
                                                                           (pCVar32,(MethodInfo *)
                                                                                    0x0);
                                                        pGVar4 = (this->fields).bodyClone;
                                                        (this->fields).startFov = fVar17;
                                                        iVar26 = LayerUtil::LayerUtil_GetLayerNumber
                                                                           (LayerFlags__Enum_Hidden,
                                                                            (MethodInfo *)0x0);
                                                        LayerUtil::LayerUtil_SetLayerRecursively_4
                                                                  (pGVar4,iVar26,(MethodInfo *)0x0)
                                                        ;
                                                        pAVar8 = (this->fields).toPreviewer;
                                                        if ((pAVar8 != (AvatarPreviewer *)0x0) &&
                                                           (pRVar9 = (this->fields).toImage,
                                                           pRVar9 != (RawImage *)0x0)) {
                                                          UnityEngine.UI.dll::UnityEngine::UI::
                                                          RawImage::RawImage_set_texture
                                                                    (pRVar9,(Texture *)
                                                                            (pAVar8->fields).
                                                                            previewTexture,
                                                                     (MethodInfo *)0x0);
                                                          pGVar4 = (GameObject *)
                                                                    UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Object::
                                                                    Object_1_Instantiate_4
                                                                              ((Object *)
                                                                               (this->fields).
                                                                               dropShadowPlane,
                                                                                                                                                              
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                                  if ((pGVar4 != (GameObject *)0x0) &&
                                                     (pTVar6 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (pGVar4,(MethodInfo *)0x0
                                                                          ),
                                                     pTVar6 != (Transform *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_SetParent
                                                              (pTVar6,(this->fields).
                                                                       avatarResetToTransform,
                                                               (MethodInfo *)0x0);
                                                    pTVar6 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar4,(MethodInfo *)0x0);
                                                    pAVar8 = (this->fields).toPreviewer;
                                                    if (((pAVar8 != (AvatarPreviewer *)0x0) &&
                                                        (pGVar4 = (pAVar8->fields).
                                                                                                                                      
                                                  _PreviewGameObject_k__BackingField,
                                                  pGVar4 != (GameObject *)0x0)) &&
                                                  (this_03 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::GameObject::GameObject_get_transform
                                                                       (pGVar4,(MethodInfo *)0x0),
                                                  this_03 != (Transform *)0x0)) {
                                                    pVVar33 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffffc0
                                                                         ,this_03,(MethodInfo *)0x0)
                                                    ;
                                                    uVar36 = pVVar33->x;
                                                    uVar37 = pVVar33->y;
                                                    if (pTVar6 != (Transform *)0x0) {
                                                      value_01.y = (float)uVar37 - _UNK_?;
                                                      value_01.x = (float)uVar36 + 0.0;
                                                      value_01.z = pVVar33->z + 0.0;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar6,value_01,(MethodInfo *)0x0)
                                                      ;
                                                      (this->fields).imagesReady = 1;
                                                      return;
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
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_Start
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarAccessoryPreviewer___Start_b__24_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_CharacterEditor) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_00 != (MVLocalPlayer *)0x0) {
      avatarBody = MVLocalPlayer::MVLocalPlayer_get_Body(this_00,(MethodInfo *)0x0);
      AvatarAccessoryPreviewer_SetupPreviewer(this,avatarBody,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__AvatarAccessoryPreviewer___Start_b__24_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
            );
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_Update
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
  if ((this->fields).imagesReady != 0) {
    this_00 = (this->fields).toPreviewer;
    if (this_00 == (AvatarPreviewer *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AvatarPreviewer::AvatarPreviewer_UpdateRotation
              (this_00,(this->fields).currentRotationSpeed,(MethodInfo *)0x0);
    (this->fields).currentRotationSpeed = 0.0;
  }
  return;
}


/* Void <Start>b__24_0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer__Start_b__24_0
               (AvatarAccessoryPreviewer *this,IGetCurrentBody *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVBody>);
    func_?(&MethodInfo__AvatarAccessoryPreviewer__SetupPreviewer_MVBody_);
    func_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<MVBody>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,MethodInfo__AvatarAccessoryPreviewer__SetupPreviewer_MVBody_,
             (MethodInfo *)0x0);
  if (x != (IGetCurrentBody *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* AvatarAccessoryPreviewer() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer__ctor
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&StringLiteral_Dead);
    func_?(&StringLiteral_Jump);
    func_?(&StringLiteral_Walk);
    func_?(&StringLiteral_Idle);
    func_?(&StringLiteral_Swim);
    cRam_? = '\x01';
  }
  (this->fields).previewDimensionsX = 0x200;
  (this->fields).previewDimensionsY = 0x400;
  (this->fields).rotationSensitivity = 15.0;
  (this->fields).zoomSpeed = 1.5;
  this_00 = (List_1_System_String_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  if (this_00 != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)StringLiteral_Idle,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)StringLiteral_Walk,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)StringLiteral_Jump,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)StringLiteral_Swim,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)StringLiteral_Dead,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    ppLVar1 = &(this->fields).animations;
    *ppLVar1 = this_00;
    func_?(ppLVar1,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

