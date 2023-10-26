
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


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Vector3 HandleOfScreenChatBubble(Camera, Vector3) */

Vector3 * Assembly-CSharp.dll::ChatAnchor::ChatAnchor_HandleOfScreenChatBubble
                    (Vector3 *__return_storage_ptr__,ChatAnchor *this,Camera *camera,
                    Vector3 adjustedPosition,MethodInfo *method)

{
  pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  pMStack_2 = (MonitorData *)0x0;
  pCVar3 = (this->fields).AttachedBubble;
  if ((pCVar3 != (ChatBubble *)0x0) &&
     (pRVar4 = ChatBubble::ChatBubble_get_rectTransform(pCVar3,(MethodInfo *)0x0),
     pRVar4 != (RectTransform *)0x0)) {
    pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                        ((Rect *)&stack0xffffffcc,pRVar4,(MethodInfo *)0x0);
    pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)pRVar5->m_XMin;
    pMStack_2 = (MonitorData *)pRVar5->m_YMin;
    SubscribableVariableBase`1[System::Single]::SubscribableVariableBase_1_System_Single__get_Value
              ((SubscribableVariableBase_1_System_Single_ *)&pSStack_1,(MethodInfo *)0x0);
    pCVar3 = (this->fields).AttachedBubble;
    if (pCVar3 != (ChatBubble *)0x0) {
      pTVar6 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar3,(MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                  ((Vector3 *)&stack0xffffffdc,pTVar6,(MethodInfo *)0x0);
        pCVar3 = (this->fields).AttachedBubble;
        if (((pCVar3 != (ChatBubble *)0x0) &&
            (pRVar4 = ChatBubble::ChatBubble_get_rectTransform(pCVar3,(MethodInfo *)0x0),
            pRVar4 != (RectTransform *)0x0)) &&
           (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar4,(MethodInfo *)0x0), unaff_EDI = camera, camera != (Camera *)0x0)) {
          puVar7 = &UNK_?;
          pAVar8 = (Action_1_Single_ *)camera;
          iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelWidth
                             (camera,(MethodInfo *)0x0);
          pCVar3 = (this->fields).AttachedBubble;
          if ((pCVar3 != (ChatBubble *)0x0) &&
             (pRVar4 = ChatBubble::ChatBubble_get_rectTransform(pCVar3,(MethodInfo *)0x0),
             pRVar4 != (RectTransform *)0x0)) {
            pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                                ((Rect *)&stack0xffffffcc,pRVar4,(MethodInfo *)0x0);
            pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)pRVar5->m_XMin;
            pMStack_2 = (MonitorData *)pRVar5->m_YMin;
            this_00 = (SubscribableVariableBase_1_System_Single_ *)&pSStack_1;
            fVar10 = SubscribableVariableBase`1[System::Single]::
                     SubscribableVariableBase_1_System_Single__get_Value(this_00,(MethodInfo *)0x0);
            pCVar3 = (this->fields).AttachedBubble;
            if ((pCVar3 != (ChatBubble *)0x0) &&
               (pTVar6 = (Transform *)
                          ChatBubble::ChatBubble_get_rectTransform(pCVar3,(MethodInfo *)0x0),
               pTVar6 != (Transform *)0x0)) {
              adjustedPosition.x = (float)&stack0xffffffdc;
              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                  ((Vector3 *)adjustedPosition.x,pTVar6,(MethodInfo *)0x0);
              fVar12 = pVVar11->x;
              pCVar3 = (this->fields).AttachedBubble;
              if ((pCVar3 != (ChatBubble *)0x0) &&
                 (pRVar4 = ChatBubble::ChatBubble_get_rectTransform(pCVar3,(MethodInfo *)0x0),
                 pRVar4 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                          (pRVar4,(MethodInfo *)0x0);
                pCVar3 = (this->fields).AttachedBubble;
                pSVar13 = (SubscribableVariableBase_1_System_Single_ *)
                          (((float)iVar9 - fVar12 * fVar10 * (_UNK_? - (float)pAVar8)) -
                          _UNK_?);
                if ((pCVar3 != (ChatBubble *)0x0) &&
                   (pRVar4 = ChatBubble::ChatBubble_get_rectTransform(pCVar3,(MethodInfo *)0x0),
                   pRVar4 != (RectTransform *)0x0)) {
                  pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                            RectTransform_get_rect
                                      ((Rect *)&stack0xffffffcc,pRVar4,(MethodInfo *)0x0);
                  pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)pRVar5->m_XMin;
                  pMStack_2 = (MonitorData *)pRVar5->m_YMin;
                  fVar10 = mscorlib.dll::System::Collections::Generic::
                           Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                           ::Int32Enum,System::Single]::
                           Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                                     ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                                       *)&pSStack_1,(MethodInfo *)0x0);
                  pCVar3 = (this->fields).AttachedBubble;
                  if ((pCVar3 != (ChatBubble *)0x0) &&
                     (pTVar14 = (Transform *)
                                ChatBubble::ChatBubble_get_rectTransform(pCVar3,(MethodInfo *)0x0),
                     pTVar14 != (Transform *)0x0)) {
                    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_lossyScale
                                        ((Vector3 *)&stack0xffffffdc,pTVar14,(MethodInfo *)0x0);
                    fVar12 = pVVar11->y;
                    pCVar3 = (this->fields).AttachedBubble;
                    if ((pCVar3 != (ChatBubble *)0x0) &&
                       (pRVar4 = ChatBubble::ChatBubble_get_rectTransform(pCVar3,(MethodInfo *)0x0),
                       pRVar4 != (RectTransform *)0x0)) {
                      VVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                               RectTransform_get_pivot(pRVar4,(MethodInfo *)0x0);
                      fVar10 = fVar12 * fVar10 * VVar15.y + _UNK_?;
                      iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                               Camera_get_pixelHeight(camera,(MethodInfo *)0x0);
                      pCVar3 = (this->fields).AttachedBubble;
                      if ((pCVar3 != (ChatBubble *)0x0) &&
                         (pRVar4 = ChatBubble::ChatBubble_get_rectTransform
                                             (pCVar3,(MethodInfo *)0x0),
                         pRVar4 != (RectTransform *)0x0)) {
                        pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                  RectTransform_get_rect
                                            ((Rect *)&stack0xffffffcc,pRVar4,(MethodInfo *)0x0);
                        pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)
                                     pRVar5->m_XMin;
                        pMStack_2 = (MonitorData *)pRVar5->m_YMin;
                        fVar12 = mscorlib.dll::System::Collections::Generic::
                                 Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                                 ::Int32Enum,System::Single]::
                                 Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                                             *)&pSStack_1,(MethodInfo *)0x0);
                        pCVar3 = (this->fields).AttachedBubble;
                        if ((pCVar3 != (ChatBubble *)0x0) &&
                           (pTVar14 = (Transform *)
                                      ChatBubble::ChatBubble_get_rectTransform
                                                (pCVar3,(MethodInfo *)0x0),
                           pTVar14 != (Transform *)0x0)) {
                          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_lossyScale
                                              ((Vector3 *)&stack0xffffffdc,pTVar14,(MethodInfo *)0x0
                                              );
                          fVar16 = pVVar11->y;
                          pCVar3 = (this->fields).AttachedBubble;
                          if ((pCVar3 != (ChatBubble *)0x0) &&
                             (pRVar4 = ChatBubble::ChatBubble_get_rectTransform
                                                 (pCVar3,(MethodInfo *)0x0),
                             pRVar4 != (RectTransform *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                            RectTransform_get_pivot(pRVar4,(MethodInfo *)0x0);
                            fVar12 = ((float)iVar9 -
                                     fVar16 * fVar12 * (_UNK_? - (float)puVar7)) -
                                     _UNK_?;
                            adjustedPosition.y = (float)pTVar6;
                            if ((this->fields).KeepInView != 0) {
                              pSVar17 = this_00;
                              if ((adjustedPosition.x < (float)this_00) ||
                                 (pSVar17 = pSVar13, (float)pSVar13 < adjustedPosition.x)) {
                                adjustedPosition.x = (float)pSVar17;
                              }
                              adjustedPosition.y = fVar10;
                              if ((fVar10 <= (float)pTVar6) &&
                                 (adjustedPosition.y = (float)pTVar6, fVar12 < (float)pTVar6)) {
                                adjustedPosition.y = fVar12;
                              }
                            }
                            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform((Component *)this,(MethodInfo *)0x0);
                            if (pTVar6 != (Transform *)0x0) {
                              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_position
                                                  ((Vector3 *)&stack0xffffffdc,pTVar6,
                                                   (MethodInfo *)0x0);
                              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                        Camera_WorldToViewportPoint_1
                                                  ((Vector3 *)&stack0xffffffd0,camera,*pVVar11,
                                                   (MethodInfo *)0x0);
                              uVar18 = pVVar11->x;
                              uVar19 = pVVar11->y;
                              if ((((pVVar11->z <= 0.0) || ((float)uVar18 <= 0.0)) ||
                                  (_UNK_? <= (float)uVar18)) ||
                                 (((float)uVar19 <= 0.0 || (_UNK_? <= (float)uVar19)))) {
                                pCVar3 = (this->fields).AttachedBubble;
                                if (pCVar3 == (ChatBubble *)0x0) goto code_?;
                                switch((pCVar3->fields).ExtenderDock) {
                                case 0:
                                  adjustedPosition.y = fVar10;
                                  break;
                                case 1:
                                  adjustedPosition.x = (float)this_00;
                                  break;
                                case 2:
                                  adjustedPosition.x = (float)pSVar13;
                                  break;
                                case 3:
                                  adjustedPosition.y = fVar12;
                                }
                              }
                              __return_storage_ptr__->x = adjustedPosition.x;
                              __return_storage_ptr__->y = adjustedPosition.y;
                              __return_storage_ptr__->z = 0.0;
                              return __return_storage_ptr__;
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
  iVar20 = func_?();
  iVar20 = CONCAT31((int3)((uint)(iVar20 + 1) >> 8),(char)(iVar20 + 1) + -0x10);
  puVar21 = (undefined1 *)(iVar20 + -4);
  *(undefined4 *)(iVar20 + -4) = 0x55102c40;
  if (cRam_? == '\0') {
    *(Object_1__Class ***)(iVar20 + -8) = &TypeInfo__UnityEngine__Object;
    puVar22 = (undefined1 *)(iVar20 + -0xc);
    *(undefined **)(iVar20 + -0xc) = &UNK_?;
    func_?();
    puVar21 = puVar22 + 4;
    cRam_? = '\x01';
  }
  pOVar23 = TypeInfo__UnityEngine__Object;
  *(ChatAnchor **)(puVar21 + -4) = this;
  iVar20 = *(int *)(iVar20 + 4);
  piVar24 = (int *)(puVar21 + -8);
  *(Camera **)(puVar21 + -8) = unaff_EDI;
  uVar25 = *(undefined4 *)(iVar20 + 0xc);
  if ((pOVar23->_1).cctor_finished_or_no_cctor == 0) {
    *(Object_1__Class **)(puVar21 + -0xc) = pOVar23;
    puVar26 = puVar21 + -0x10;
    *(undefined **)(puVar21 + -0x10) = &UNK_?;
    func_?();
    piVar24 = (int *)(puVar26 + 4);
  }
  piVar24[-1] = 0;
  piVar24[-2] = 0;
  piVar24[-3] = uVar25;
  piVar24[-4] = (int)&UNK_?;
  bVar27 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)piVar24[-3],(Object_1 *)piVar24[-2],(MethodInfo *)piVar24[-1]);
  if (bVar27 != 0) {
    iVar20 = *(int *)(iVar20 + 0xc);
    if (iVar20 != 0) {
      *(undefined4 *)(iVar20 + 0x48) = 0;
      *(undefined4 *)(iVar20 + 0x44) = 0;
      iVar20 = *(int *)(iVar20 + 0x30);
      if (iVar20 != 0) {
        piVar24[2] = 0;
        piVar24[1] = extraout_ECX;
        piVar24[1] = 0;
        *piVar24 = iVar20;
        piVar24[-1] = (int)&UNK_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  ((CanvasGroup *)*piVar24,(float)piVar24[1],(MethodInfo *)piVar24[2]);
        return extraout_EAX;
      }
    }
    piVar24[2] = (int)&UNK_?;
    func_?();
    pcVar28 = (code *)swi(3);
    pVVar11 = (Vector3 *)(*pcVar28)();
    return pVVar11;
  }
  return (Vector3 *)CONCAT31(extraout_var,bVar27);
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

