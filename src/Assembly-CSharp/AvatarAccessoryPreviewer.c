
/* IEnumerator AnimationEndTrack(Single) */

IEnumerator *
Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_AnimationEndTrack
          (AvatarAccessoryPreviewer *this,float resetDelay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].monitor = (MonitorData *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(&value[2].monitor,this);
  value[2].klass = (Object__Class *)resetDelay;
  return (IEnumerator *)value;
}


/* Void ChangeAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ChangeAnimation
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).animations;
  iVar2 = (this->fields).currentAnimation + 1;
  (this->fields).currentAnimation = iVar2;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    if ((pLVar1->fields)._size <= iVar2) {
      (this->fields).currentAnimation = 1;
    }
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  if ((this->fields).avatarBody != (MVBody *)0x0) {
    MVBody::MVBody_DestroyClone((this->fields).avatarBody,(MethodInfo *)0x0);
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
  pTVar4 = (this->fields).avatarResetToTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar4 = (this->fields).avatarResetToTransform;
    if (pTVar4 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    (this->fields).avatarResetToTransform = (Transform *)0x0;
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
  if ((pAVar2 != (AvatarPreviewer *)0x0) &&
     (pCVar3 = (pAVar2->fields).previewCam, pCVar3 != (Camera *)0x0)) {
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                      (pCVar3,(MethodInfo *)0x0);
    fVar5 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
            InputUnsafeUtility_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    fVar1 = (this->fields).zoomSpeed;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar3,fVar1 * fVar5 * fVar6 + fVar4,(MethodInfo *)0x0);
    pAVar2 = (this->fields).toPreviewer;
    if (pAVar2 != (AvatarPreviewer *)0x0) {
      pCVar3 = (pAVar2->fields).previewCam;
      this_00 = (((this->fields).toPreviewer)->fields).previewCam;
      if (this_00 != (Camera *)0x0) {
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                          (this_00,(MethodInfo *)0x0);
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
          method_00 = (MethodInfo *)0x0;
          pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                              ((Rect *)&stack0xffffffb0,pRVar8,(MethodInfo *)0x0);
          fVar6 = pRVar10->m_Height;
          pRVar7 = (this->fields).toImage;
          if ((pRVar7 != (RawImage *)0x0) &&
             (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  ((Graphic *)pRVar7,(MethodInfo *)0x0),
             pRVar8 != (RectTransform *)0x0)) {
            VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                               (pRVar8,(MethodInfo *)0x0);
            pAVar11 = (this->fields).toPreviewer;
            if ((pAVar11 != (AvatarPreviewer *)0x0) &&
               (this_00 = (pAVar11->fields).previewCam, this_00 != (Camera *)0x0)) {
              pos.y = fVar3 + fVar6 / (_UNK_? / VVar9.y);
              pos.x = fVar2 + (float)method_00 / (_UNK_? / fVar5);
              pos.z = 0.0;
              pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                                  ((Ray *)&stack0xffffffa8,this_00,pos,(MethodInfo *)0x0);
              if (((this->fields).pickedAccessory == 0) ||
                 (uVar13 = (pRVar12->m_Direction).z, uVar14 = (pRVar12->m_Origin).x,
                 uVar15 = (pRVar12->m_Origin).y, uVar16 = (pRVar12->m_Origin).z,
                 ray.m_Origin.z = (float)uVar16, ray.m_Origin.y = (float)uVar15,
                 ray.m_Origin.x = (float)uVar14, uVar17 = (pRVar12->m_Direction).x,
                 uVar18 = (pRVar12->m_Direction).y, ray.m_Direction.y = (float)uVar18,
                 ray.m_Direction.x = (float)uVar17, ray.m_Direction.z = (float)uVar13,
                 bVar19 = AvatarAccessoryPreviewer_PickAccessory
                                    (this,ray,&pGStack_1,(RaycastHit *)&stack0xffffff7c,
                                     (MethodInfo *)0x0), bVar19 == 0)) {
                return;
              }
              value = (Object *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        (value,ExceptionArgument__Enum_obj,method_00);
              if (((pGStack_1 != (GameObject *)0x0) &&
                  (pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_GetComponentInChildren_3
                                       (pGStack_1,1,
                                        SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionHelperAvatarAccessory>_bool_
                                       ), pOVar20 != (Object *)0x0)) &&
                 (pOVar21 = (Object__Class *)
                            AccessoryDataManager::
                            AccessoryDataManager_GetAccessoryDataByStreamingAssetId
                                      ((int32_t)pOVar20[3].monitor,(MethodInfo *)0x0),
                 value != (Object *)0x0)) {
                value[1].klass = pOVar21;
                func_?();
                root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this,(MethodInfo *)0x0);
                callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?()
                ;
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
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
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
    (this->fields).OnAnimationActivators = pAVar4;
    func_?(&(this->fields).OnAnimationActivators,pAVar4);
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
  layerMask = (undefined4 *)(1 << ((byte)iVar1 & 0x1f));
  auVar2 = ray._0_20_;
  ray_00.m_Direction.z = INFINITY;
  auVar3 = auVar2._0_12_;
  ray_00.m_Origin.x = (float)auVar3._0_4_;
  ray_00.m_Origin.y = (float)auVar3._4_4_;
  ray_00.m_Origin.z = (float)auVar3._8_4_;
  ray_00.m_Direction.x = (float)auVar2._12_4_;
  ray_00.m_Direction.y = (float)auVar2._16_4_;
  pRVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastAll_5
                     (ray_00,INFINITY,(int32_t)layerMask,(MethodInfo *)0x0);
  uVar5 = 0;
  if (pRVar4 == (RaycastHit__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    this_01 = pRVar4->vector;
    while( true ) {
      if ((int)pRVar4->max_length <= (int)uVar5) {
        *layerMask = 0;
        func_?();
        uStack6 = 0;
        uStack7 = 0;
        func_?();
        return 0;
      }
      if (pRVar4->max_length <= uVar5) break;
      this_00 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                          (this_01,(MethodInfo *)0x0);
      if (this_00 == (Collider *)0x0) goto code_?;
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      *layerMask = pGVar8;
      func_?();
      if (pRVar4->max_length <= uVar5) break;
      fRam00000000 = (this_01->m_Point).x;
      fRam00000004 = (this_01->m_Point).y;
      fRam00000008 = (this_01->m_Point).z;
      fRam0000000c = (this_01->m_Normal).x;
      iRam_? = this_01->m_Collider;
      fRam00000010 = (this_01->m_Normal).y;
      fRam00000014 = (this_01->m_Normal).z;
      uRam_? = this_01->m_FaceID;
      fRam0000001c = this_01->m_Distance;
      VRam00000020 = this_01->m_UV;
      if ((GameObject *)*layerMask == (GameObject *)0x0) goto code_?;
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                    ((GameObject *)*layerMask,
                     SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<SelectionHelperAvatarAccessory>__
                    );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      this_01 = this_01 + 1;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
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
            method_00 = TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35;
            value = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
            value[1].klass = (Object__Class *)0x0;
            value[2].monitor = (MonitorData *)this;
            func_?();
            value[2].klass = (Object__Class *)(((float)this_00 / fVar5) * fVar7);
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
            return;
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
      value.y = (fVar3 * fVar10 + fVar8 * fVar5 + fVar4 * pQVar7->x) - fVar9 * fVar2;
      value.x = (fVar10 * fVar2 + pQVar7->x * fVar5 + fVar9 * fVar3) - fVar8 * fVar4;
      value.z = (fVar4 * fVar10 + fVar9 * fVar5 + fVar8 * fVar2) - fVar3 * pQVar7->x;
      value.w = ((fVar10 * fVar5 - fVar2 * pQVar7->x) - fVar8 * fVar3) - fVar4 * fVar9;
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
  (this->fields).avatarBody = avatarBody;
  func_?(&(this->fields).avatarBody,avatarBody);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  auVar1._4_8_ = 0;
  auVar1._0_4_ = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
            ((Quaternion *)&stack0xffffffd0,(Vector3)(auVar1 << 0x20),(MethodInfo *)0x0);
  pGVar2 = (this->fields).bodyClone;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pGVar2 = (this->fields).bodyClone;
    if ((pGVar2 == (GameObject *)0x0) ||
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar2,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
              ((Quaternion *)&stack0xffffffa0,pTVar4,(MethodInfo *)0x0);
  }
  if (avatarBody != (MVBody *)0x0) {
    pGVar2 = MVBody::MVBody_CreateClone(avatarBody,1,1,(MethodInfo *)0x0);
    (this->fields).bodyClone = pGVar2;
    func_?();
    MVBody::MVBody_set_AccessoryMoveOverride(avatarBody,0,(MethodInfo *)0x0);
    pTVar4 = (this->fields).avatarResetToTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    puVar5 = (undefined *)0x0;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pTVar4 = (this->fields).avatarResetToTransform;
      if (pTVar4 == (Transform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar4,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    }
    pAVar6 = (this->fields).toPreviewer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pAVar6 = (this->fields).toPreviewer;
      if (pAVar6 == (AvatarPreviewer *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pAVar6,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    }
    pGVar2 = (GameObject *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              (pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar2,(MethodInfo *)0x0);
      (this->fields).avatarResetToTransform = pTVar4;
      func_?();
      pRVar7 = (this->fields).toImage;
      if (pRVar7 != (RawImage *)0x0) {
        (*(code *)(pRVar7->klass->vtable).set_color.method)();
        pGVar2 = (this->fields).bodyClone;
        if (pGVar2 != (GameObject *)0x0) {
          pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentsInChildren
                              (pGVar2,
                               UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                              );
          uVar9 = 0;
          if (pOVar8 != (Object__Array *)0x0) {
            pOVar10 = (Object *)pOVar8->vector;
            for (; (int)uVar9 < (int)pOVar8->max_length; uVar9 = uVar9 + 1) {
              if (pOVar8->max_length <= uVar9) goto code_?;
              if (pOVar10->klass == (Object__Class *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pOVar10->klass,0,(MethodInfo *)0x0);
              pOVar10 = (Object *)&pOVar10->monitor;
            }
            pGVar2 = (this->fields).bodyClone;
            if (pGVar2 != (GameObject *)0x0) {
              pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren
                                  (pGVar2,
                                   PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                  );
              uVar9 = 0;
              if (pOVar8 != (Object__Array *)0x0) {
                pOVar10 = (Object *)pOVar8->vector;
                for (; (int)uVar9 < (int)pOVar8->max_length; uVar9 = uVar9 + 1) {
                  if (pOVar8->max_length <= uVar9) goto code_?;
                  if ((pOVar10->klass == (Object__Class *)0x0) ||
                     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject
                                          ((Component *)pOVar10->klass,(MethodInfo *)0x0),
                     pGVar2 == (GameObject *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,0,(MethodInfo *)0x0);
                  pOVar10 = (Object *)&pOVar10->monitor;
                }
                pGVar2 = (this->fields).bodyClone;
                if (pGVar2 != (GameObject *)0x0) {
                  pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponentsInChildren
                                      (pGVar2,
                                       AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                                      );
                  uVar9 = 0;
                  if (pOVar8 != (Object__Array *)0x0) {
                    pOVar10 = (Object *)pOVar8->vector;
                    for (; (int)uVar9 < (int)pOVar8->max_length; uVar9 = uVar9 + 1) {
                      if (pOVar8->max_length <= uVar9) goto code_?;
                      if ((pOVar10->klass == (Object__Class *)0x0) ||
                         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject
                                              ((Component *)pOVar10->klass,(MethodInfo *)0x0),
                         pGVar2 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar2,0,(MethodInfo *)0x0);
                      pOVar10 = (Object *)&pOVar10->monitor;
                    }
                    pGVar2 = (this->fields).bodyClone;
                    if (pGVar2 != (GameObject *)0x0) {
                      p_Var13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponentsInChildren_4
                                          (pGVar2,1,
                                           SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                                          );
                      uVar9 = 0;
                      if (p_Var13 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                        pOVar10 = (Object *)p_Var13->vector;
                        for (; (int)uVar9 < (int)p_Var13->max_length; uVar9 = uVar9 + 1) {
                          if (p_Var13->max_length <= uVar9) goto code_?;
                          if ((pOVar10->klass == (Object__Class *)0x0) ||
                             (this_02 = (Collider *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_GetComponent_1
                                                  ((Component *)pOVar10->klass,
                                                                                                      
                                                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                                                  ), this_02 == (Collider *)0x0))
                          goto code_?;
                          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                                    (this_02,1,(MethodInfo *)0x0);
                          pOVar10 = (Object *)&pOVar10->monitor;
                        }
                        pGVar2 = (this->fields).bodyClone;
                        if (pGVar2 != (GameObject *)0x0) {
                          p_Var13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentsInChildren_4
                                              (pGVar2,1,
                                               AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                              );
                          uVar9 = 0;
                          if (p_Var13 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                            pOVar10 = (Object *)p_Var13->vector;
                            for (; (int)uVar9 < (int)p_Var13->max_length; uVar9 = uVar9 + 1) {
                              if (p_Var13->max_length <= uVar9) goto code_?;
                              if (pOVar10->klass == (Object__Class *)0x0) goto code_?;
                              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                              Behaviour_set_enabled((Behaviour *)pOVar10->klass,1,(MethodInfo *)0x0)
                              ;
                              pOVar10 = (Object *)&pOVar10->monitor;
                            }
                            pGVar2 = (this->fields).bodyClone;
                            if (pGVar2 != (GameObject *)0x0) {
                              p_Var13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponentsInChildren_4
                                                  (pGVar2,1,
                                                                                                      
                                                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                                  );
                              uVar9 = 0;
                              if (p_Var13 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                pOVar10 = (Object *)p_Var13->vector;
                                for (; (int)uVar9 < (int)p_Var13->max_length; uVar9 = uVar9 + 1)
                                {
                                  if (p_Var13->max_length <= uVar9) goto code_?;
                                  if (pOVar10->klass == (Object__Class *)0x0) goto code_?;
                                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                  Behaviour_set_enabled
                                            ((Behaviour *)pOVar10->klass,1,(MethodInfo *)0x0);
                                  pOVar10 = (Object *)&pOVar10->monitor;
                                }
                                pGVar2 = (this->fields).bodyClone;
                                if (pGVar2 != (GameObject *)0x0) {
                                  pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_GetComponentsInChildren
                                                      (pGVar2,
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                  uVar9 = 0;
                                  if (pOVar8 != (Object__Array *)0x0) {
                                    pOVar10 = (Object *)pOVar8->vector;
                                    for (; (int)uVar9 < (int)pOVar8->max_length;
                                        uVar9 = uVar9 + 1) {
                                      if (pOVar8->max_length <= uVar9) goto code_?;
                                      if (pOVar10->klass == (Object__Class *)0x0)
                                      goto code_?;
                                      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_gameObject
                                                          ((Component *)pOVar10->klass,
                                                           (MethodInfo *)0x0);
                                      if ((TypeInfo__UnityEngine__Object->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_Destroy_1((Object_1 *)pGVar2,(MethodInfo *)0x0);
                                      pOVar10 = (Object *)&pOVar10->monitor;
                                    }
                                    pGVar2 = (this->fields).bodyClone;
                                    if (pGVar2 != (GameObject *)0x0) {
                                      this_03 = (Component *)
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_GetComponentInChildren_1
                                                          (pGVar2,
                                                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                                  );
                                      if ((TypeInfo__UnityEngine__Object->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                              Object_1_op_Inequality
                                                        ((Object_1 *)this_03,(Object_1 *)0x0,
                                                         (MethodInfo *)0x0);
                                      if (bVar3 != 0) {
                                        if ((this_03 == (Component *)0x0) ||
                                           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_get_gameObject
                                                                (this_03,(MethodInfo *)0x0),
                                           pGVar2 == (GameObject *)0x0)) goto code_?;
                                        puVar5 = &UNK_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar2,0,(MethodInfo *)0x0);
                                      }
                                      AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers
                                                (this,(MethodInfo *)0x0);
                                      pGVar2 = (this->fields).bodyClone;
                                      if (pGVar2 != (GameObject *)0x0) {
                                        pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_GetComponentsInChildren
                                                            (pGVar2,
                                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                                  );
                                        pMVar11 = (Material *)0x0;
                                        if (pOVar8 != (Object__Array *)0x0) {
                                          pOVar10 = (Object *)pOVar8->vector;
                                          for (; (int)pMVar11 < (int)pOVar8->max_length;
                                              pMVar11 = (Material *)((int)&pMVar11->klass + 1)) {
                                            uVar9 = 0;
                                            iVar12 = 0x10;
                                            while( true ) {
                                              if ((Material *)pOVar8->max_length <= pMVar11)
                                              goto code_?;
                                              if ((pOVar10->klass == (Object__Class *)0x0) ||
                                                 (pMVar13 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)pOVar10->klass,
                                                                       (MethodInfo *)0x0),
                                                 pMVar13 == (Material__Array *)0x0))
                                              goto code_?;
                                              if ((int)pMVar13->max_length <= (int)uVar9) break;
                                              if ((Material *)pOVar8->max_length <= pMVar11)
                                              goto code_?;
                                              if ((pOVar10->klass == (Object__Class *)0x0) ||
                                                 (pMVar13 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      ((Renderer *)pOVar10->klass,
                                                                       (MethodInfo *)0x0),
                                                 pMVar13 == (Material__Array *)0x0))
                                              goto code_?;
                                              if (pMVar13->max_length <= uVar9)
                                              goto code_?;
                                              this_00 = *(Material **)
                                                         ((int)pMVar13->vector + iVar12 + -0x10);
                                              if (this_00 == (Material *)0x0) goto code_?;
                                              bVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Material::Material_HasProperty_1
                                                                (this_00,StringLiteral__Color,
                                                                 (MethodInfo *)0x0);
                                              if (bVar3 != 0) {
                                                if ((Material *)pOVar8->max_length <= pMVar11)
                                                goto code_?;
                                                if ((pOVar10->klass == (Object__Class *)0x0) ||
                                                   (pMVar13 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Renderer::
                                                              Renderer_get_materials
                                                                        ((Renderer *)pOVar10->klass,
                                                                         (MethodInfo *)0x0),
                                                   pMVar13 == (Material__Array *)0x0))
                                                goto code_?;
                                                if (pMVar13->max_length <= uVar9)
                                                goto code_?;
                                                pMVar11 = *(Material **)
                                                           ((int)pMVar13->vector + iVar12 + -0x10);
                                                if (pMVar11 == (Material *)0x0)
                                                goto code_?;
                                                pOVar10 = (Object *)0x0;
                                                pOVar8 = (Object__Array *)&stack0xffffffc0;
                                                pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Material::Material_get_color
                                                                    ((Color *)pOVar8,pMVar11,
                                                                     (MethodInfo *)0x0);
                                                fVar15 = pCVar14->r;
                                                fVar16 = pCVar14->g;
                                                fVar17 = pCVar14->b;
                                                fVar18 = 1.0;
                                                if ((Object *)pOVar8->max_length <= pOVar10)
                                                goto code_?;
                                                if ((pMVar11->klass == (Material__Class *)0x0) ||
                                                   (pMVar13 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Renderer::
                                                              Renderer_get_materials
                                                                        ((Renderer *)pMVar11->klass,
                                                                         (MethodInfo *)0x0),
                                                   pMVar13 == (Material__Array *)0x0))
                                                goto code_?;
                                                if (pMVar13->max_length <= uVar9)
                                                goto code_?;
                                                pMVar11 = *(Material **)
                                                           ((int)pMVar13->vector + iVar12 + -0x10);
                                                if (pMVar11 == (Material *)0x0)
                                                goto code_?;
                                                pOVar10 = (Object *)&UNK_?;
                                                value_02.g = fVar16;
                                                value_02.r = fVar15;
                                                value_02.b = fVar17;
                                                value_02.a = fVar18;
                                                UnityEngine.CoreModule.dll::UnityEngine::Material::
                                                Material_set_color(pMVar11,value_02,
                                                                   (MethodInfo *)0x0);
                                              }
                                              uVar9 = uVar9 + 1;
                                              iVar12 = iVar12 + 4;
                                            }
                                            pOVar10 = (Object *)&pOVar10->monitor;
                                          }
                                          pGVar2 = (this->fields).bodyClone;
                                          if (pGVar2 != (GameObject *)0x0) {
                                            pAVar19 = (Animation *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::
                                                      GameObject_GetComponentInChildren_1
                                                                (pGVar2,
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                            (this->fields).goAnimation = pAVar19;
                                            func_?();
                                            this_05 = (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)(this->fields).animations;
                                            pAVar19 = (this->fields).goAnimation;
                                            if (this_05 !=
                                                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                 *)0x0) {
                                              fVar15 = (float)(this->fields).currentAnimation;
                                              puVar20 = &UNK_?;
                                              animation = mscorlib.dll::System::Collections::Generic
                                                          ::List`1[System::Text::RegularExpressions
                                                          ::RegexCharClass+SingleRange]::
                                                                                                                    
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                            (this_05,(int32_t)fVar15,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                                                  );
                                              if (pAVar19 != (Animation *)0x0) {
                                                UnityEngine.AnimationModule.dll::UnityEngine::
                                                Animation::Animation_Play_2
                                                          (pAVar19,(String *)animation,
                                                           (MethodInfo *)0x0);
                                                pAVar19 = (this->fields).goAnimation;
                                                if (pAVar19 != (Animation *)0x0) {
                                                  pAVar21 = (ActivateOnAnimationBase__Array *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Component::
                                                            Component_GetComponentsInChildren
                                                                      ((Component *)pAVar19,
                                                                                                                                              
                                                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                                                  );
                                                  (this->fields).OnAnimationActivators = pAVar21;
                                                  func_?();
                                                  pAVar21 = (this->fields).OnAnimationActivators;
                                                  uVar9 = 0;
                                                  if (pAVar21 !=
                                                      (ActivateOnAnimationBase__Array *)0x0) {
                                                    pOVar10 = (Object *)0x10;
                                                    while ((int)uVar9 < (int)pAVar21->max_length) {
                                                      pAVar21 = (this->fields).OnAnimationActivators
                                                      ;
                                                      if (pAVar21 ==
                                                          (ActivateOnAnimationBase__Array *)0x0)
                                                      goto code_?;
                                                      if (pAVar21->max_length <= uVar9)
                                                      goto code_?;
                                                      pOVar22 = *(Object **)
                                                                 ((int)pAVar21->vector +
                                                                 (int)(pOVar10 + -2));
                                                      this_01 = (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)(this->fields).animations;
                                                  if ((this_01 ==
                                                       (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)0x0) || (mscorlib.dll::System::Collections::
                                                             Generic::List`1[System::Text::
                                                             RegularExpressions::
                                                             RegexCharClass+SingleRange]::
                                                                                                                          
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                            (this_01,(this->fields).currentAnimation
                                                             ,
                                                  MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                                                  ), pOVar22 == (Object *)0x0))
                                                  goto code_?;
                                                  (*(code *)pOVar22->klass[1]._0.namespaze)();
                                                  uVar9 = uVar9 + 1;
                                                  pAVar21 = (this->fields).OnAnimationActivators;
                                                  pOVar10 = (Object *)&pOVar10->monitor;
                                                  if (pAVar21 ==
                                                      (ActivateOnAnimationBase__Array *)0x0)
                                                  goto code_?;
                                                  }
                                                  pAVar6 = (this->fields).previewer;
                                                  if ((TypeInfo__UnityEngine__Object->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  pAVar6 = (AvatarPreviewer *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Object::Object_1_Instantiate_4
                                                                      ((Object *)pAVar6,
                                                                                                                                              
                                                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                                  );
                                                  (this->fields).toPreviewer = pAVar6;
                                                  func_?();
                                                  pOVar10 = (Object *)
                                                            (this->fields).previewDimensionsX;
                                                  pAVar6 = (this->fields).toPreviewer;
                                                  pOVar22 = (Object *)
                                                            (this->fields).previewDimensionsY;
                                                  pMVar23 = MVGameControllerBase::
                                                            MVGameControllerBase_get_LocalPlayer
                                                                      ((MethodInfo *)0x0);
                                                  if ((pMVar23 != (MVLocalPlayer *)0x0) &&
                                                     (pMVar24 = MVLocalPlayer::
                                                                MVLocalPlayer_get_Body
                                                                          (pMVar23,(MethodInfo *)0x0
                                                                          ),
                                                     pMVar24 != (MVBody *)0x0)) {
                                                    layersToRender =
                                                         (Object *)
                                                         (pMVar24->fields)._._._.previewLayerMask;
                                                    pTVar4 = (this->fields).avatarResetToTransform;
                                                    uVar25 = 0;
                                                    uVar26 = 0xbf000000;
                                                    fVar16 = -1.0;
                                                    pMVar27 = (MonitorData *)0x42c80000;
                                                    pIVar28 = (Il2CppArrayBounds *)0x42c80000;
                                                    fVar17 = 100.0;
                                                    pMVar23 = MVGameControllerBase::
                                                              MVGameControllerBase_get_LocalPlayer
                                                                        ((MethodInfo *)0x0);
                                                    if ((pMVar23 != (MVLocalPlayer *)0x0) &&
                                                       (pMVar24 = MVLocalPlayer::
                                                                  MVLocalPlayer_get_Body
                                                                            (pMVar23,(MethodInfo *)
                                                                                     0x0),
                                                       pAVar6 != (AvatarPreviewer *)0x0)) {
                                                      previewPosition.y = (float)pIVar28;
                                                      previewPosition.x = (float)pMVar27;
                                                      cameraOffset.y = (float)uVar26;
                                                      cameraOffset.x = (float)uVar25;
                                                      cameraOffset.z = fVar16;
                                                      previewPosition.z = fVar17;
                                                      AvatarPreviewer::AvatarPreviewer_Initialize
                                                                (pAVar6,(int32_t)pOVar10,
                                                                 (int32_t)pOVar22,
                                                                 CameraClearFlags__Enum_Color,
                                                                 (LayerFlags__Enum)layersToRender,
                                                                 cameraOffset,pTVar4,
                                                                 previewPosition,
                                                                                                                                  
                                                  StringLiteral_Avatar_accessory_preview,
                                                  (MVWorldObjectClient *)pMVar24,
                                                  (this->fields).bodyClone,
                                                  (Vector3)ZEXT812(0x41700000),(MethodInfo *)0x0);
                                                  pAVar6 = (this->fields).toPreviewer;
                                                  if (((pAVar6 != (AvatarPreviewer *)0x0) &&
                                                      (pCVar29 = (pAVar6->fields).previewCam,
                                                      pCVar29 != (Camera *)0x0)) &&
                                                     (pTVar4 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pCVar29,
                                                                           (MethodInfo *)0x0),
                                                     pTVar4 != (Transform *)0x0)) {
                                                    pVVar30 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffffc0
                                                                         ,pTVar4,(MethodInfo *)0x0)
                                                    ;
                                                    uVar31 = pVVar30->x;
                                                    uVar32 = pVVar30->y;
                                                    value.y = (float)uVar32 + _UNK_?;
                                                    value.x = (float)uVar31 + 0.0;
                                                    value.z = pVVar30->z + 0.0;
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_set_position
                                                              (pTVar4,value,(MethodInfo *)0x0);
                                                    pGVar2 = (this->fields).bodyClone;
                                                    if ((pGVar2 != (GameObject *)0x0) &&
                                                       (pTVar4 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar2,(MethodInfo *)
                                                                                     0x0),
                                                       pTVar4 != (Transform *)0x0)) {
                                                      value_00.y = (float)puVar20;
                                                      value_00.x = (float)puVar5;
                                                      value_00.z = (float)this_05;
                                                      value_00.w = fVar15;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_rotation
                                                                (pTVar4,value_00,(MethodInfo *)0x0)
                                                      ;
                                                      pAVar6 = (this->fields).toPreviewer;
                                                      if ((pAVar6 != (AvatarPreviewer *)0x0) &&
                                                         (pCVar29 = (pAVar6->fields).previewCam,
                                                         pCVar29 != (Camera *)0x0)) {
                                                        fVar15 = UnityEngine.CoreModule.dll::
                                                                 UnityEngine::Camera::
                                                                 Camera_get_fieldOfView
                                                                           (pCVar29,(MethodInfo *)0x0
                                                                           );
                                                        pGVar2 = (this->fields).bodyClone;
                                                        (this->fields).startFov = fVar15;
                                                        layer = LayerUtil::LayerUtil_GetLayerNumber
                                                                          (LayerFlags__Enum_Hidden,
                                                                           (MethodInfo *)0x0);
                                                        LayerUtil::LayerUtil_SetLayerRecursively_4
                                                                  (pGVar2,layer,(MethodInfo *)0x0);
                                                        pAVar6 = (this->fields).toPreviewer;
                                                        if ((pAVar6 != (AvatarPreviewer *)0x0) &&
                                                           (pRVar7 = (this->fields).toImage,
                                                           pRVar7 != (RawImage *)0x0)) {
                                                          UnityEngine.UI.dll::UnityEngine::UI::
                                                          RawImage::RawImage_set_texture
                                                                    (pRVar7,(Texture *)
                                                                            (pAVar6->fields).
                                                                            previewTexture,
                                                                     (MethodInfo *)0x0);
                                                          pGVar2 = (GameObject *)
                                                                    UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Object::
                                                                    Object_1_Instantiate_4
                                                                              ((Object *)
                                                                               (this->fields).
                                                                               dropShadowPlane,
                                                                                                                                                              
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                                  if ((pGVar2 != (GameObject *)0x0) &&
                                                     (pTVar4 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (pGVar2,(MethodInfo *)0x0
                                                                          ),
                                                     pTVar4 != (Transform *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_SetParent
                                                              (pTVar4,(this->fields).
                                                                       avatarResetToTransform,
                                                               (MethodInfo *)0x0);
                                                    pTVar4 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar2,(MethodInfo *)0x0);
                                                    pAVar6 = (this->fields).toPreviewer;
                                                    if (((pAVar6 != (AvatarPreviewer *)0x0) &&
                                                        (pGVar2 = (pAVar6->fields).
                                                                                                                                      
                                                  _PreviewGameObject_k__BackingField,
                                                  pGVar2 != (GameObject *)0x0)) &&
                                                  (this_04 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::GameObject::GameObject_get_transform
                                                                       (pGVar2,(MethodInfo *)0x0),
                                                  this_04 != (Transform *)0x0)) {
                                                    pVVar30 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffffc0
                                                                         ,this_04,(MethodInfo *)0x0)
                                                    ;
                                                    uVar33 = pVVar30->x;
                                                    uVar34 = pVVar30->y;
                                                    if (pTVar4 != (Transform *)0x0) {
                                                      value_01.y = (float)uVar34 - _UNK_?;
                                                      value_01.x = (float)uVar33 + 0.0;
                                                      value_01.z = pVVar30->z + 0.0;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar4,value_01,(MethodInfo *)0x0)
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
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
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
    (this->fields).animations = this_00;
    func_?(&(this->fields).animations,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

