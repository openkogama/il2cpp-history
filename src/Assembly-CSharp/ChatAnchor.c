
/* Boolean BindAttachedBubble(ChatBubble) */

bool Assembly-CSharp.dll::ChatAnchor::ChatAnchor_BindAttachedBubble
               (ChatAnchor *this,ChatBubble *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)value,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    (this->fields).AttachedBubble = value;
    func_?(&(this->fields).AttachedBubble,value);
    pCVar1 = (this->fields).AttachedBubble;
    if (pCVar1 != (ChatBubble *)0x0) {
      (pCVar1->fields).anchor = this;
      func_?(&(pCVar1->fields).anchor,this);
      (this->fields).snapTracking = 1;
      return 1;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  return 0;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Vector3 HandleOfScreenChatBubble(Camera, Vector3) */

Vector3 * Assembly-CSharp.dll::ChatAnchor::ChatAnchor_HandleOfScreenChatBubble
                    (Vector3 *__return_storage_ptr__,ChatAnchor *this,Camera *camera,
                    Vector3 adjustedPosition,MethodInfo *method)

{
  this_00 = this;
  pCVar1 = (this->fields).AttachedBubble;
  pCVar2 = this;
  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
  pRVar3 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
  if (pRVar3 == (RectTransform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
            ((Rect *)&stack0xffffffd0,pRVar3,(MethodInfo *)0x0);
  pCVar1 = (this->fields).AttachedBubble;
  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
  pTVar4 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
  if (pTVar4 == (Transform *)0x0) goto code_?;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                     ((Vector3 *)&puStack_6,pTVar4,(MethodInfo *)0x0);
  pCVar2 = (ChatAnchor *)pVVar5->x;
  pCVar1 = (this->fields).AttachedBubble;
  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
  pRVar3 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
  if (pRVar3 == (RectTransform *)0x0) goto code_?;
  puVar7 = &UNK_?;
  in_stack_8 =
       UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                 (pRVar3,(MethodInfo *)0x0);
  VVar9.x = in_stack_8.x;
  in_stack_10 = (Camera *)((float)pTVar4 * (float)pCVar2 * VVar9.x + _UNK_?);
  if (camera == (Camera *)0x0) goto code_?;
  in_stack_10 = (Camera *)0x0;
  VVar9.y = (float)&UNK_?;
  in_stack_11 = camera;
  iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelWidth
                    (camera,(MethodInfo *)0x0);
  pCVar1 = (this->fields).AttachedBubble;
  in_stack_8 = VVar9;
  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
  in_stack_10 = (Camera *)&UNK_?;
  pRVar3 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
  in_stack_8 = VVar9;
  if (pRVar3 == (RectTransform *)0x0) goto code_?;
  this = (ChatAnchor *)0x0;
  pRVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                      ((Rect *)&stack0xffffffd0,pRVar3,(MethodInfo *)0x0);
  fVar14 = pRVar13->m_Width;
  pCVar1 = (this_00->fields).AttachedBubble;
  __return_storage_ptr__ = (Vector3 *)pRVar3;
  pCVar2 = this;
  in_stack_8 = VVar9;
  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
  adjustedPosition.y = 0.0;
  pTVar4 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
  adjustedPosition.x = (float)pCVar1;
  in_stack_8 = VVar9;
  if (pTVar4 == (Transform *)0x0) goto code_?;
  adjustedPosition.x = (float)&UNK_?;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                     ((Vector3 *)&puStack_6,pTVar4,(MethodInfo *)0x0);
  pCVar2 = (ChatAnchor *)pVVar5->x;
  pCVar1 = (this_00->fields).AttachedBubble;
  adjustedPosition.y = (float)&puStack_6;
  adjustedPosition.z = (float)pTVar4;
  in_stack_8 = VVar9;
  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
  pRVar3 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
  in_stack_8 = VVar9;
  if (pRVar3 == (RectTransform *)0x0) goto code_?;
  in_stack_8 =
       UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                 (pRVar3,(MethodInfo *)0x0);
  pCVar1 = (this_00->fields).AttachedBubble;
  in_stack_11 =
       (Camera *)
       (((float)iVar12 - fVar14 * (float)pCVar2 * (_UNK_? - VVar9.x)) - _UNK_?);
  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
  pRVar3 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
  if (pRVar3 == (RectTransform *)0x0) goto code_?;
  pRVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                      ((Rect *)&stack0xffffffd0,pRVar3,(MethodInfo *)0x0);
  fVar14 = pRVar13->m_Height;
  pCVar1 = (this_00->fields).AttachedBubble;
  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
  pTVar4 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
  if (pTVar4 == (Transform *)0x0) goto code_?;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                     ((Vector3 *)&puStack_6,pTVar4,(MethodInfo *)0x0);
  pCVar2 = (ChatAnchor *)pVVar5->y;
  pCVar1 = (this_00->fields).AttachedBubble;
  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
  pRVar3 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
  if (pRVar3 == (RectTransform *)0x0) goto code_?;
  VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                     (pRVar3,(MethodInfo *)0x0);
  in_stack_8 = (Vector2)((ulonglong)(uint)VVar9.y << 0x20);
  this = (ChatAnchor *)(fVar14 * (float)pCVar2 * VVar9.y + _UNK_?);
  iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                    (camera,(MethodInfo *)0x0);
  pCVar1 = (this_00->fields).AttachedBubble;
  pCVar2 = this;
  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
  pRVar3 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
  if (pRVar3 == (RectTransform *)0x0) goto code_?;
  pRVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                      ((Rect *)&stack0xffffffd0,pRVar3,(MethodInfo *)0x0);
  fVar14 = pRVar13->m_Height;
  pCVar1 = (this_00->fields).AttachedBubble;
  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
  pTVar4 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
  if (pTVar4 == (Transform *)0x0) goto code_?;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                     ((Vector3 *)&puStack_6,pTVar4,(MethodInfo *)0x0);
  pCVar1 = (this_00->fields).AttachedBubble;
  in_stack_8 = (Vector2)((ulonglong)(uint)pVVar5->y << 0x20);
  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
  pRVar3 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
  fVar15 = in_stack_8.y;
  if (pRVar3 == (RectTransform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
            (pRVar3,(MethodInfo *)0x0);
  fVar14 = ((float)iVar12 - fVar14 * fVar15 * (_UNK_? - (float)puVar7)) - _UNK_?;
  in_stack_8 = (Vector2)((ulonglong)(uint)fVar14 << 0x20);
  if ((this_00->fields).KeepInView != 0) {
    adjustedPosition.x = (float)&UNK_?;
    pCVar16 = in_stack_10;
    if ((3.5417488e-29 < (float)in_stack_10) ||
       (pCVar16 = in_stack_11, (float)in_stack_11 < 3.5417488e-29)) {
      adjustedPosition.x = (float)pCVar16;
    }
    adjustedPosition.y = (float)this;
    if (((float)this <= (float)&puStack_6) &&
       (adjustedPosition.y = (float)&puStack_6, fVar14 < (float)&puStack_6)) {
      adjustedPosition.y = fVar14;
    }
  }
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this_00,(MethodInfo *)0x0);
  if (pTVar4 == (Transform *)0x0) goto code_?;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)&puStack_6,pTVar4,(MethodInfo *)0x0);
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToViewportPoint_1
                     ((Vector3 *)&stack0xffffffd4,camera,*pVVar5,(MethodInfo *)0x0);
  uVar17 = pVVar5->x;
  uVar18 = pVVar5->y;
  puStack_6 = (undefined *)uVar17;
  if ((((pVVar5->z <= 0.0) || ((float)uVar17 <= 0.0)) || (_UNK_? <= (float)uVar17)) ||
     (((float)uVar18 <= 0.0 || (_UNK_? <= (float)uVar18)))) {
    while (pCVar1 = (this_00->fields).AttachedBubble, pCVar2 = this, pCVar1 == (ChatBubble *)0x0) {
code_?:
      this = pCVar2;
      func_?();
    }
    switch((pCVar1->fields).ExtenderDock) {
    case 0:
      adjustedPosition.y = (float)this;
      break;
    case 1:
      adjustedPosition.x = (float)in_stack_10;
      break;
    case 2:
      adjustedPosition.x = (float)in_stack_11;
      break;
    case 3:
      adjustedPosition.y = in_stack_8.y;
    }
  }
  __return_storage_ptr__->x = adjustedPosition.x;
  __return_storage_ptr__->y = adjustedPosition.y;
  __return_storage_ptr__->z = adjustedPosition.z;
  return __return_storage_ptr__;
}


/* Void HideChatBubble() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_HideChatBubble(ChatAnchor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pCVar1 = (this->fields).AttachedBubble;
  if (pCVar1 != (ChatBubble *)0x0) {
    (pCVar1->fields).timeUntilFade = 0.0;
    (pCVar1->fields).currentFade = 0.0;
    this_00 = (pCVar1->fields).CanvasGroup;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(Boolean, Avatar) */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_Initialize
               (ChatAnchor *this,bool isLocal,Avatar *avatar,MethodInfo *method)

{
  (this->fields).isLocal = isLocal;
  (this->fields).avatar = avatar;
  func_?(&(this->fields).avatar,avatar);
  return;
}


/* Void InterpolateToNewBubblePosition(Vector3) */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_InterpolateToNewBubblePosition
               (ChatAnchor *this,Vector3 adjustedPosition,MethodInfo *method)

{
  (this->fields).previousAdjustedPosition.z = adjustedPosition.z;
  uVar1 = (this->fields).previousAdjustedPosition.x;
  uVar2 = (this->fields).previousAdjustedPosition.y;
  fVar3 = adjustedPosition.z - (this->fields).previousAdjustedPosition.z;
  if (_UNK_? <=
      (adjustedPosition.y - (float)uVar2) * (adjustedPosition.y - (float)uVar2) +
      (adjustedPosition.x - (float)uVar1) * (adjustedPosition.x - (float)uVar1) + fVar3 * fVar3) {
    (this->fields).currentInterpolationProgress = 0.0;
  }
  fVar3 = (this->fields).currentInterpolationProgress;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pCVar5 = (this->fields).AttachedBubble;
  (this->fields).currentInterpolationProgress = fVar4 * (this->fields).TrackingSpeed + fVar3;
  if (pCVar5 != (ChatBubble *)0x0) {
    pTVar6 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar5,(MethodInfo *)0x0);
    pCVar5 = (this->fields).AttachedBubble;
    if ((pCVar5 != (ChatBubble *)0x0) &&
       (pTVar7 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar5,(MethodInfo *)0x0),
       pTVar7 != (Transform *)0x0)) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,pTVar7,(MethodInfo *)0x0);
      fVar3 = _UNK_?;
      if ((this->fields).snapTracking == 0) {
        fVar3 = (this->fields).currentInterpolationProgress;
      }
      uVar9 = pVVar8->x;
      uVar10 = pVVar8->y;
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (_UNK_? < fVar3) {
        fVar3 = _UNK_?;
      }
      if (pTVar6 != (Transform *)0x0) {
        value.y = (adjustedPosition.y - (float)uVar10) * fVar3 + (float)uVar10;
        value.x = (adjustedPosition.x - (float)uVar9) * fVar3 + (float)uVar9;
        value.z = (adjustedPosition.z - pVVar8->z) * fVar3 + pVVar8->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar6,value,(MethodInfo *)0x0);
        pCVar5 = (this->fields).AttachedBubble;
        if (pCVar5 != (ChatBubble *)0x0) {
          pTVar6 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar5,(MethodInfo *)0x0);
          pCVar5 = (this->fields).AttachedBubble;
          if (((pCVar5 != (ChatBubble *)0x0) &&
              (pTVar7 = (Transform *)
                        ChatBubble::ChatBubble_get_rectTransform(pCVar5,(MethodInfo *)0x0),
              pTVar7 != (Transform *)0x0)) &&
             (pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                  ((Quaternion *)&stack0xffffffdc,pTVar7,(MethodInfo *)0x0),
             pTVar6 != (Transform *)0x0)) {
            fVar3 = pQVar11->x;
            fStack12 = pQVar11->z;
            fStack13 = pQVar11->w;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar6,*pQVar11,(MethodInfo *)0x0);
            (this->fields).previousAdjustedPosition.x = (float)&UNK_?;
            (this->fields).previousAdjustedPosition.y = (float)pTVar6;
            (this->fields).previousAdjustedPosition.z = fVar3;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_OnDestroy(ChatAnchor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = (this->fields).AttachedBubble;
    if (pCVar1 == (ChatBubble *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)pCVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_OnValidate(ChatAnchor *this,MethodInfo *method)

{
  pfVar1 = &(this->fields).AttachedRadius;
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    (this->fields).AttachedRadius = 0.0;
  }
  return;
}


/* Void SkipInterpolation() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_SkipInterpolation
               (ChatAnchor *this,MethodInfo *method)

{
  (this->fields).snapTracking = 1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_Update(ChatAnchor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pCVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((this->fields).isLocal != 0) {
      pAVar3 = (this->fields).avatar;
      if ((pAVar3 == (Avatar *)0x0) ||
         (pMVar4 = (pAVar3->fields).mvAvatar, pMVar4 == (MVAvatar *)0x0)) goto code_?;
      pPVar5 = MVAvatar::MVAvatar_get_CurrentPickup(pMVar4,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pPVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pAVar3 = (this->fields).avatar;
        if ((pAVar3 == (Avatar *)0x0) ||
           (pMVar4 = (pAVar3->fields).mvAvatar, pMVar4 == (MVAvatar *)0x0)) {
code_?:
          func_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pPVar5 = MVAvatar::MVAvatar_get_CurrentPickup(pMVar4,(MethodInfo *)0x0);
        if (pPVar5 == (PickupItem *)0x0) goto code_?;
        bVar2 = PickupItem::PickupItem_get_IsInFirstPersonMode(pPVar5,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pCVar1 = (this->fields).AttachedBubble;
          if (pCVar1 != (ChatBubble *)0x0) {
            (pCVar1->fields).currentFade = 0.0;
            (pCVar1->fields).timeUntilFade = 0.0;
            this_00 = (pCVar1->fields).CanvasGroup;
            if (this_00 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (this_00,0.0,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
      }
    }
    if ((this->fields).snapTracking != 0) {
      (this->fields).snapTracking = 0;
    }
  }
  return;
}


/* Void UpdateAttachedBubblePosition() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_UpdateAttachedBubblePosition
               (ChatAnchor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pCVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar2 == 0) {
    (this->fields).snapTracking = 1;
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar3 != (MainCameraManager *)0x0) {
    this_00 = (pMVar3->fields).mainCamera;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((pTVar4 != (Transform *)0x0) &&
       (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe8,pTVar4,(MethodInfo *)0x0),
       this_00 != (Camera *)0x0)) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                         ((Vector3 *)&stack0xffffffe8,this_00,*pVVar5,(MethodInfo *)0x0);
      uVar6._0_4_ = pVVar5->x;
      uStack_7 = pVVar5->y;
      pCVar1 = (this->fields).AttachedBubble;
      if ((pCVar1 != (ChatBubble *)0x0) &&
         (pTVar4 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0),
         pTVar4 != (Transform *)0x0)) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffdc,pTVar4,(MethodInfo *)0x0);
        adjustedPosition.z = pVVar5->z;
        uStack_7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        adjustedPosition.x = (float)(undefined4)uVar6;
        adjustedPosition.y = (float)uStack_7;
        pVVar5 = ChatAnchor_HandleOfScreenChatBubble
                           ((Vector3 *)&stack0xffffffdc,this,this_00,adjustedPosition,
                            (MethodInfo *)0x0);
        ChatAnchor_InterpolateToNewBubblePosition(this,*pVVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* ChatAnchor() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor__ctor(ChatAnchor *this,MethodInfo *method)

{
  (this->fields).AttachedRadius = 1.0;
  (this->fields).AttachedAngle = 90.0;
  (this->fields).TrackingSpeed = 15.0;
  (this->fields).KeepInView = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

