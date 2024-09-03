
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


/* Vector3 HandleOfScreenChatBubble(Camera, Vector3) */

Vector3 * Assembly-CSharp.dll::ChatAnchor::ChatAnchor_HandleOfScreenChatBubble
                    (Vector3 *__return_storage_ptr__,ChatAnchor *this,Camera *camera,
                    Vector3 adjustedPosition,MethodInfo *method)

{
  pCVar1 = (this->fields).AttachedBubble;
  if ((pCVar1 != (ChatBubble *)0x0) &&
     (pRVar2 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0),
     pRVar2 != (RectTransform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
              ((Rect *)&stack0xffffffd0,pRVar2,(MethodInfo *)0x0);
    pCVar1 = (this->fields).AttachedBubble;
    if ((pCVar1 != (ChatBubble *)0x0) &&
       (pTVar3 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0),
       pTVar3 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                ((Vector3 *)&puStack_4,pTVar3,(MethodInfo *)0x0);
      pCVar1 = (this->fields).AttachedBubble;
      if (pCVar1 != (ChatBubble *)0x0) {
        pRVar2 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
        if (pRVar2 != (RectTransform *)0x0) {
          puVar5 = &UNK_?;
          VVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                             (pRVar2,(MethodInfo *)0x0);
          fVar7 = VVar6.x;
          if (camera != (Camera *)0x0) {
            unaff_EBX = (undefined4 *)
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelWidth
                                  (camera,(MethodInfo *)0x0);
            pCVar1 = (this->fields).AttachedBubble;
            if (pCVar1 != (ChatBubble *)0x0) {
              puVar8 = &UNK_?;
              pRVar2 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
              if (pRVar2 != (RectTransform *)0x0) {
                pRVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_get_rect((Rect *)&stack0xffffffd0,pRVar2,(MethodInfo *)0x0);
                fVar10 = pRVar9->m_Width;
                pCVar1 = (this->fields).AttachedBubble;
                if ((pCVar1 != (ChatBubble *)0x0) &&
                   (pTVar3 = (Transform *)
                             ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0),
                   pTVar3 != (Transform *)0x0)) {
                  adjustedPosition.x = (float)&UNK_?;
                  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_lossyScale
                                      ((Vector3 *)&puStack_4,pTVar3,(MethodInfo *)0x0);
                  fVar12 = pVVar11->x;
                  pCVar1 = (this->fields).AttachedBubble;
                  if ((pCVar1 != (ChatBubble *)0x0) &&
                     (pRVar13 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0),
                     pRVar13 != (RectTransform *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                              (pRVar13,(MethodInfo *)0x0);
                    pCVar1 = (this->fields).AttachedBubble;
                    puVar14 = (undefined *)
                              (((float)(int)unaff_EBX - fVar10 * fVar12 * (_UNK_? - fVar7))
                              - _UNK_?);
                    if ((pCVar1 != (ChatBubble *)0x0) &&
                       (pRVar13 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0)
                       , pRVar13 != (RectTransform *)0x0)) {
                      pRVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                RectTransform_get_rect
                                          ((Rect *)&stack0xffffffd0,pRVar13,(MethodInfo *)0x0);
                      fVar7 = pRVar9->m_Height;
                      pCVar1 = (this->fields).AttachedBubble;
                      if ((pCVar1 != (ChatBubble *)0x0) &&
                         (pTVar15 = (Transform *)
                                    ChatBubble::ChatBubble_get_rectTransform
                                              (pCVar1,(MethodInfo *)0x0),
                         pTVar15 != (Transform *)0x0)) {
                        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_lossyScale
                                            ((Vector3 *)&puStack_4,pTVar15,(MethodInfo *)0x0);
                        fVar10 = pVVar11->y;
                        pCVar1 = (this->fields).AttachedBubble;
                        if ((pCVar1 != (ChatBubble *)0x0) &&
                           (pRVar13 = ChatBubble::ChatBubble_get_rectTransform
                                                (pCVar1,(MethodInfo *)0x0),
                           pRVar13 != (RectTransform *)0x0)) {
                          VVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                   RectTransform_get_pivot(pRVar13,(MethodInfo *)0x0);
                          fVar7 = fVar7 * fVar10 * VVar6.y + _UNK_?;
                          unaff_EBX = (undefined4 *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                      Camera_get_pixelHeight(camera,(MethodInfo *)0x0);
                          pCVar1 = (this->fields).AttachedBubble;
                          if ((pCVar1 != (ChatBubble *)0x0) &&
                             (pRVar13 = ChatBubble::ChatBubble_get_rectTransform
                                                  (pCVar1,(MethodInfo *)0x0),
                             pRVar13 != (RectTransform *)0x0)) {
                            pRVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                      RectTransform_get_rect
                                                ((Rect *)&stack0xffffffd0,pRVar13,(MethodInfo *)0x0)
                            ;
                            fVar10 = pRVar9->m_Height;
                            pCVar1 = (this->fields).AttachedBubble;
                            if ((pCVar1 != (ChatBubble *)0x0) &&
                               (pTVar15 = (Transform *)
                                          ChatBubble::ChatBubble_get_rectTransform
                                                    (pCVar1,(MethodInfo *)0x0),
                               pTVar15 != (Transform *)0x0)) {
                              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_lossyScale
                                                  ((Vector3 *)&puStack_4,pTVar15,(MethodInfo *)0x0)
                              ;
                              fVar12 = pVVar11->y;
                              pCVar1 = (this->fields).AttachedBubble;
                              if ((pCVar1 != (ChatBubble *)0x0) &&
                                 (pRVar13 = ChatBubble::ChatBubble_get_rectTransform
                                                      (pCVar1,(MethodInfo *)0x0),
                                 pRVar13 != (RectTransform *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                RectTransform_get_pivot(pRVar13,(MethodInfo *)0x0);
                                fVar10 = ((float)(int)unaff_EBX -
                                         fVar10 * fVar12 * (_UNK_? - (float)puVar5)) -
                                         _UNK_?;
                                adjustedPosition.y = (float)&puStack_4;
                                if ((this->fields).KeepInView != 0) {
                                  adjustedPosition.x = (float)&UNK_?;
                                  puVar5 = puVar8;
                                  if ((3.556073e-29 < (float)puVar8) ||
                                     (puVar5 = puVar14, (float)puVar14 < 3.556073e-29)) {
                                    adjustedPosition.x = (float)puVar5;
                                  }
                                  adjustedPosition.y = fVar7;
                                  if ((fVar7 <= (float)&puStack_4) &&
                                     (adjustedPosition.y = (float)&puStack_4,
                                     fVar10 < (float)&puStack_4)) {
                                    adjustedPosition.y = fVar10;
                                  }
                                }
                                pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_transform
                                                    ((Component *)this,(MethodInfo *)0x0);
                                if (pTVar15 != (Transform *)0x0) {
                                  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_position
                                                      ((Vector3 *)&puStack_4,pTVar15,
                                                       (MethodInfo *)0x0);
                                  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                            Camera_WorldToViewportPoint_1
                                                      ((Vector3 *)&stack0xffffffd4,camera,*pVVar11,
                                                       (MethodInfo *)0x0);
                                  uVar16 = pVVar11->x;
                                  uVar17 = pVVar11->y;
                                  if ((((pVVar11->z <= 0.0) || ((float)uVar16 <= 0.0)) ||
                                      (_UNK_? <= (float)uVar16)) ||
                                     (((float)uVar17 <= 0.0 || (_UNK_? <= (float)uVar17)))) {
                                    pCVar1 = (this->fields).AttachedBubble;
                                    puStack_4 = (undefined *)uVar16;
                                    if (pCVar1 == (ChatBubble *)0x0) goto code_?;
                                    switch((pCVar1->fields).ExtenderDock) {
                                    case 0:
                                      adjustedPosition.y = fVar7;
                                      break;
                                    case 1:
                                      adjustedPosition.x = (float)puVar8;
                                      break;
                                    case 2:
                                      adjustedPosition.x = (float)puVar14;
                                      break;
                                    case 3:
                                      adjustedPosition.y = fVar10;
                                    }
                                  }
                                  pRVar2->klass = (RectTransform__Class *)adjustedPosition.x;
                                  pRVar2->monitor = (MonitorData *)adjustedPosition.y;
                                  (pRVar2->fields)._._._.m_CachedPtr = pTVar3;
                                  return (Vector3 *)pRVar2;
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
  uVar18 = in(in_stack_19);
  *unaff_EBX = uVar18;
  puStack20 = unaff_EBX;
  if ((char)in_stack_21 < '\0') {
    pcVar22 = (code *)swi(3);
    pVVar11 = (Vector3 *)(*pcVar22)();
    return pVVar11;
  }
  piVar23 = (int *)(in_stack_24 + -0x3f7bf33c);
  *piVar23 = (int)&in_stack_21->x + *piVar23;
  if (*piVar23 != 0) {
    iVar25 = *(int *)(in_stack_26 + 0x10);
    if (iVar25 != 0) {
      *(undefined4 *)(iVar25 + 0x4c) = 0;
      *(undefined4 *)(iVar25 + 0x48) = 0;
      if (*(CanvasGroup **)(iVar25 + 0x34) != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (*(CanvasGroup **)(iVar25 + 0x34),0.0,(MethodInfo *)0x0);
        return extraout_EAX;
      }
    }
    func_?();
    pcVar22 = (code *)swi(3);
    pVVar11 = (Vector3 *)(*pcVar22)();
    return pVVar11;
  }
  return in_stack_21;
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

