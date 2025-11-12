
/* Void Awake() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_Awake(ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ExtenderBorderInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExtenderBorderInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).ExtenderBorderInfo != (ExtenderBorderInfo__Array *)0x0) {
    return;
  }
  pEVar1 = (ExtenderBorderInfo__Array *)FUN_?(TypeInfo__ExtenderBorderInfo,4);
  bVar2 = iRam_? != 0;
  (this->fields).ExtenderBorderInfo = pEVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).ExtenderBorderInfo >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pEVar1 = (this->fields).ExtenderBorderInfo;
  lVar7 = FUN_?(TypeInfo__ExtenderBorderInfo);
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0;
  if (pEVar1 != (ExtenderBorderInfo__Array *)0x0) {
    lVar8 = FUN_?(lVar7,(pEVar1->klass->_0).element_class);
    if (lVar8 == 0) {
      uVar9 = FUN_?();
      FUN_?(uVar9,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FUN_?(pEVar1,0,lVar7);
    pEVar1 = (this->fields).ExtenderBorderInfo;
    lVar7 = FUN_?(TypeInfo__ExtenderBorderInfo);
    *(undefined1 *)(lVar7 + 0x14) = 1;
    *(undefined4 *)(lVar7 + 0x10) = 1;
    if (pEVar1 != (ExtenderBorderInfo__Array *)0x0) {
      lVar8 = FUN_?(lVar7,(pEVar1->klass->_0).element_class);
      if (lVar8 == 0) {
        uVar9 = FUN_?();
        FUN_?(uVar9,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FUN_?(pEVar1,1,lVar7);
      pEVar1 = (this->fields).ExtenderBorderInfo;
      lVar7 = FUN_?(TypeInfo__ExtenderBorderInfo);
      *(undefined1 *)(lVar7 + 0x14) = 1;
      *(undefined4 *)(lVar7 + 0x10) = 2;
      if (pEVar1 != (ExtenderBorderInfo__Array *)0x0) {
        lVar8 = FUN_?(lVar7,(pEVar1->klass->_0).element_class);
        if (lVar8 == 0) {
          uVar9 = FUN_?();
          FUN_?(uVar9,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FUN_?(pEVar1,2,lVar7);
        pEVar1 = (this->fields).ExtenderBorderInfo;
        lVar7 = FUN_?(TypeInfo__ExtenderBorderInfo);
        *(undefined1 *)(lVar7 + 0x14) = 1;
        *(undefined4 *)(lVar7 + 0x10) = 3;
        if (pEVar1 != (ExtenderBorderInfo__Array *)0x0) {
          lVar8 = FUN_?(lVar7,(pEVar1->klass->_0).element_class);
          if (lVar8 != 0) {
            FUN_?(pEVar1,3,lVar7);
            return;
          }
          uVar9 = FUN_?();
          FUN_?(uVar9,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean BindExtenderDock(ExtenderBorderEnum) */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_BindExtenderDock
               (ChatBubble *this,ExtenderBorderEnum__Enum value,MethodInfo *method)

{
  if ((this->fields).ExtenderDock != value) {
    (this->fields).ExtenderDock = value;
    ChatBubble_PerformExtenderSnap(this,(MethodInfo *)0x0);
    ChatBubble_PerformExtenderPosition(this,(MethodInfo *)0x0);
    return 1;
  }
  return 0;
}


/* Void BindExtenderToClosestBorder(Camera) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_BindExtenderToClosestBorder
               (ChatBubble *this,Camera *camera,MethodInfo *method)

{
  if ((camera != (Camera *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)camera,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2);
    pCVar5 = (this->fields).anchor;
    if ((pCVar5 != (ChatAnchor *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pCVar5,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar2);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)camera,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                           (&VStack_7,pTVar1,(MethodInfo *)0x0);
        aVStack_8[0].x = pVVar6->x;
        aVStack_8[0].y = pVVar6->y;
        fVar9 = 0.0 - (aVStack_8[0].x + 0.0);
        fVar10 = 0.0 - (aVStack_8[0].y + 0.0);
        fVar11 = 0.0 - (pVVar6->z + 0.0);
        pCVar5 = (this->fields).anchor;
        fVar11 = fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11;
        if ((pCVar5 != (ChatAnchor *)0x0) &&
           (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pCVar5,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0))
        {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
          if (pvVar2 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar2);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)camera,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                               (aVStack_8,pTVar1,(MethodInfo *)0x0);
            VStack_7.x = pVVar6->x;
            VStack_7.y = pVVar6->y;
            fVar10 = 0.0 - (0.0 - VStack_7.x);
            fVar12 = 0.0 - (0.0 - VStack_7.y);
            fVar9 = 0.0 - (0.0 - pVVar6->z);
            fVar10 = fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9;
            fVar9 = fVar11;
            if (fVar10 <= fVar11) {
              fVar9 = fVar10;
            }
            pCVar5 = (this->fields).anchor;
            iVar13 = 0;
            if (fVar11 < fVar10) {
              iVar13 = 3;
            }
            if ((pCVar5 != (ChatAnchor *)0x0) &&
               (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pCVar5,(MethodInfo *)0x0),
               pTVar1 != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
              if (pvVar2 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar4 = func_?(&UNK_?);
                FUN_?(uVar4,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
              (*pcRam_?)(pvVar2);
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)camera,(MethodInfo *)0x0);
              if (pTVar1 != (Transform *)0x0) {
                pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                   (aVStack_8,pTVar1,(MethodInfo *)0x0);
                VStack_7.x = pVVar6->x;
                VStack_7.y = pVVar6->y;
                fVar10 = 0.0 - (VStack_7.x + 0.0);
                fVar12 = 0.0 - (VStack_7.y + 0.0);
                fVar11 = 0.0 - (pVVar6->z + 0.0);
                pCVar5 = (this->fields).anchor;
                fVar11 = fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11;
                if ((pCVar5 != (ChatAnchor *)0x0) &&
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pCVar5,(MethodInfo *)0x0),
                   pTVar1 != (Transform *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
                  if (pvVar2 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pcVar3 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                    uVar4 = func_?(&UNK_?);
                    FUN_?(uVar4,0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pcRam_? = pcVar3;
                  (*pcRam_?)(pvVar2);
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)camera,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                       (aVStack_8,pTVar1,(MethodInfo *)0x0);
                    uVar14 = pVVar6->x;
                    uVar15 = pVVar6->y;
                    fVar12 = 0.0 - (0.0 - (float)uVar14);
                    fVar10 = 0.0 - (0.0 - pVVar6->z);
                    fVar16 = 0.0 - (0.0 - (float)uVar15);
                    fVar12 = fVar16 * fVar16 + fVar12 * fVar12 + fVar10 * fVar10;
                    fVar10 = fVar11;
                    if (fVar12 <= fVar11) {
                      fVar10 = fVar12;
                    }
                    iVar17 = (this->fields).ExtenderDock;
                    iVar18 = (fVar11 < fVar12) + 1;
                    if (fVar10 < fVar9) {
                      if (iVar17 == iVar18) {
                        return;
                      }
                      (this->fields).ExtenderDock = iVar18;
                    }
                    else {
                      if (iVar17 == iVar13) {
                        return;
                      }
                      (this->fields).ExtenderDock = iVar13;
                    }
                    ChatBubble_PerformExtenderSnap(this,(MethodInfo *)0x0);
                    ChatBubble_PerformExtenderPosition(this,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean BindMessageValue(String) */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_BindMessageValue
               (ChatBubble *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isActive == 0) {
    return 0;
  }
  if (value == (String *)0x0) goto DAT_?;
  iVar1 = (value->fields)._stringLength;
  if (0x82 < iVar1) {
    if (iVar1 + -0x82 < 0) {
      uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
      this_02 = (ArgumentOutOfRangeException *)func_?(uVar2);
      pSVar3 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
      paramName = (String *)func_?(&StringLiteral_length);
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                (this_02,paramName,pSVar3,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__System__String__Substring_int__int_);
      FUN_?(this_02,uVar2);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pSVar3 = mscorlib.dll::System::String::String_InternalSubString(value,0,0x82,(MethodInfo *)0x0);
    value = mscorlib.dll::System::String::String_Concat_4
                      (pSVar3,::StringLiteral____,(MethodInfo *)0x0);
  }
  bVar6 = iRam_? != 0;
  (this->fields).MessageValue = value;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).MessageValue >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pTVar11 = (this->fields).MessageComponent;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar11 != (Text *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pTVar11->fields)._._._._._._._ != (void *)0x0) {
      pTVar11 = (this->fields).MessageComponent;
      if (pTVar11 != (Text *)0x0) {
        pSVar3 = (String *)(*(pTVar11->klass->vtable).get_text.methodPtr)();
        if (((pSVar3 != value) &&
            ((((pSVar3 == (String *)0x0 || (value == (String *)0x0)) ||
              ((pSVar3->fields)._stringLength != (value->fields)._stringLength)) ||
             (bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(pSVar3->fields)._firstChar,
                                 (uint8_t *)&(value->fields)._firstChar,
                                 (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar5 == 0)))) ||
           (fVar12 = (this->fields).timeUntilFade,
           fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0), fVar12 < fVar13)) {
          this_00 = (UIBehaviour *)(this->fields).PopUpSound;
          if (this_00 == (UIBehaviour *)0x0) goto DAT_?;
          bVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::UIBehaviour::UIBehaviour_IsActive
                            (this_00,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            this_01 = (this->fields).PopUpSound;
            if (this_01 == (AudioSource *)0x0) goto DAT_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                      (this_01,(MethodInfo *)0x0);
          }
        }
        pTVar11 = (this->fields).MessageComponent;
        if (pTVar11 != (Text *)0x0) {
          (*(pTVar11->klass->vtable).set_text.methodPtr)();
          if ((this->fields).AutoSize != 0) {
            ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
          }
          ChatBubble_SetChatBubbleVisibility(this,1,(MethodInfo *)0x0);
          pCVar14 = (this->fields).anchor;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pCVar14 != (ChatAnchor *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pCVar14->fields)._._._._.m_CachedPtr != (void *)0x0) {
              pCVar14 = (this->fields).anchor;
              if (pCVar14 != (ChatAnchor *)0x0) {
                (pCVar14->fields).snapTracking = 1;
                pCVar14 = (this->fields).anchor;
                if (pCVar14 != (ChatAnchor *)0x0) {
                  ChatAnchor::ChatAnchor_UpdateAttachedBubblePosition(pCVar14,(MethodInfo *)0x0);
                  return 1;
                }
              }
              goto DAT_?;
            }
          }
          return 1;
        }
      }
DAT_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
  }
  return 0;
}


/* Void CalculateExtenderBorderVertices(ExtenderBorderInfo, Vector3 ByRef, Vector3 ByRef) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_CalculateExtenderBorderVertices
               (ChatBubble *this,ExtenderBorderInfo *info,Vector3 *v1,Vector3 *v2,MethodInfo *method
               )

{
  pRVar1 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
  if (pRVar1 != (RectTransform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pRVar1->fields)._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2);
    v2->z = 0.0;
    v1->z = 0.0;
    pRVar1 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
    if (pRVar1 != (RectTransform *)0x0) {
      VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        (pRVar1,(MethodInfo *)0x0);
      fStackX_18 = VVar5.x;
      fStackX_1c = VVar5.y;
      fStackX_18 = fStackX_18 * _UNK_?;
      fStackX_1c = fStackX_1c * _UNK_?;
      if (info != (ExtenderBorderInfo *)0x0) {
        iVar6 = (info->fields).Border;
        if (iVar6 == 0) {
          fStackX_1c = (float)((uint)fStackX_1c ^ _UNK_?);
          v1->x = (float)((uint)fStackX_18 ^ _UNK_?) + (info->fields).CutoffNear;
          v2->x = fStackX_18 - (info->fields).CutoffFar;
          fStackX_1c = fStackX_1c + (info->fields).Margin;
        }
        else {
          if (iVar6 == 1) {
            fStackX_18 = (float)((uint)fStackX_18 ^ _UNK_?);
            v1->y = (float)((uint)fStackX_1c ^ _UNK_?) + (info->fields).CutoffNear;
            v2->y = fStackX_1c - (info->fields).CutoffFar;
            fStackX_18 = fStackX_18 + (info->fields).Margin;
            v2->x = fStackX_18;
            v1->x = fStackX_18;
            return;
          }
          if (iVar6 == 2) {
            v1->y = (float)((uint)fStackX_1c ^ _UNK_?) + (info->fields).CutoffNear;
            v2->y = fStackX_1c - (info->fields).CutoffFar;
            fStackX_18 = fStackX_18 - (info->fields).Margin;
            v2->x = fStackX_18;
            v1->x = fStackX_18;
            return;
          }
          if (iVar6 != 3) {
            return;
          }
          v1->x = (float)((uint)fStackX_18 ^ _UNK_?) + (info->fields).CutoffNear;
          v2->x = fStackX_18 - (info->fields).CutoffFar;
          fStackX_1c = fStackX_1c - (info->fields).Margin;
        }
        v2->y = fStackX_1c;
        v1->y = fStackX_1c;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HideBubble() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_HideBubble(ChatBubble *this,MethodInfo *method)

{
  (this->fields).currentFade = 0.0;
  (this->fields).timeUntilFade = 0.0;
  obj = (this->fields).CanvasGroup;
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_OnDisable(ChatBubble *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  (this->fields).currentFade = 0.0;
  (this->fields).timeUntilFade = 0.0;
  obj = (this->fields).CanvasGroup;
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Boolean PerformAutoHeight() */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformAutoHeight
               (ChatBubble *this,MethodInfo *method)

{
  pTVar1 = (this->fields).MessageComponent;
  if ((pTVar1 != (Text *)0x0) &&
     (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pTVar1,(MethodInfo *)0x0), pRVar2 != (RectTransform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pRVar2->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    pTVar1 = (this->fields).MessageComponent;
    fVar7 = (this->fields).MessageMinimumSize.y;
    if (pTVar1 != (Text *)0x0) {
      pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pTVar1,(MethodInfo *)0x0);
      fVar8 = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::LayoutUtility_GetPreferredHeight
                         (pRVar2,(MethodInfo *)0x0);
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      if (fVar7 == 0.0) {
        return 0;
      }
      pRVar2 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
      obj = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
      if (obj != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3);
        if (pRVar2 != (RectTransform *)0x0) {
          VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_get_sizeDelta(pRVar2,(MethodInfo *)0x0);
          VVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_GetParentSize(pRVar2,(MethodInfo *)0x0);
          VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_get_anchorMax(pRVar2,(MethodInfo *)0x0);
          VVar12 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_get_anchorMin(pRVar2,(MethodInfo *)0x0);
          fStackX_c = VVar11.y;
          fStackX_1c = VVar12.y;
          fStackX_24 = VVar10.y;
          fStack_13 = VVar9.x;
          VVar9.y = ((fVar7 - 0.0) + 0.0) - (fStackX_c - fStackX_1c) * fStackX_24;
          VVar9.x = fStack_13;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar2,VVar9,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void PerformAutoSize() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformAutoSize
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).MessageComponent;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Text *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pTVar1->fields)._._._._._._._ != (void *)0x0) {
      ChatBubble_PerformAutoHeight(this,(MethodInfo *)0x0);
      bVar2 = ChatBubble_PerformAutoWidth(this,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        ChatBubble_PerformAutoHeight(this,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Boolean PerformAutoWidth() */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformAutoWidth
               (ChatBubble *this,MethodInfo *method)

{
  pTVar1 = (this->fields).MessageComponent;
  if ((pTVar1 != (Text *)0x0) &&
     (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pTVar1,(MethodInfo *)0x0), pRVar2 != (RectTransform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pRVar2->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    pTVar1 = (this->fields).MessageComponent;
    fVar7 = (this->fields).MessageMinimumSize.x;
    fVar8 = (this->fields).MessageWrapWidth;
    if (pTVar1 != (Text *)0x0) {
      pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pTVar1,(MethodInfo *)0x0);
      fVar9 = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::LayoutUtility_GetPreferredWidth
                        (pRVar2,(MethodInfo *)0x0);
      if (fVar9 <= fVar8) {
        fVar8 = fVar9;
      }
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      if (fVar7 == 0.0) {
        return 0;
      }
      pRVar2 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
      obj = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
      if (obj != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3);
        if (pRVar2 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    (pRVar2,RectTransform_Axis__Enum_Horizontal,(fVar7 - 0.0) + 0.0,
                     (MethodInfo *)0x0);
          return 1;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void PerformExtenderPosition() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformExtenderPosition
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).ExtenderComponent;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar1 != (Image *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pIVar1->fields)._._._._._._._ == (void *)0x0) {
      return;
    }
    camera = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (camera != (Camera *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((camera->fields)._._._.m_CachedPtr != (void *)0x0) {
        pCVar2 = (this->fields).anchor;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pCVar2 != (ChatAnchor *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pCVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pCVar2 = (this->fields).anchor;
            if ((pCVar2 == (ChatAnchor *)0x0) ||
               (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar2,(MethodInfo *)0x0), obj == (Transform *)0x0))
            goto DAT_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_3.x = 0.0;
            VStack_3.y = 0.0;
            VStack_3.z = 0.0;
            pvVar4 = (obj->fields)._._.m_CachedPtr;
            if (pvVar4 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar4);
            VStack_7.x = VStack_3.x;
            VStack_7.y = VStack_3.y;
            VStack_7.z = VStack_3.z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_8 = 0;
            fStack_9 = 0.0;
            pvVar4 = (camera->fields)._._._.m_CachedPtr;
            if (pvVar4 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar4,&VStack_7,2,&uStack_8);
            if ((((fStack_9 <= 0.0) || ((float)uStack_8 <= 0.0)) ||
                (_UNK_? <= (float)uStack_8)) ||
               ((uStack_8._4_4_ <= 0.0 || (_UNK_? <= uStack_8._4_4_)))) {
              ChatBubble_BindExtenderToClosestBorder(this,camera,(MethodInfo *)0x0);
            }
            else if ((this->fields).ExtenderDock != 0) {
              (this->fields).ExtenderDock = 0;
              ChatBubble_PerformExtenderSnap(this,(MethodInfo *)0x0);
              ChatBubble_PerformExtenderPosition(this,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_3.x = (pVVar10->zeroVector).x;
    VStack_3.y = (pVVar10->zeroVector).y;
    VStack_3.z = (pVVar10->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    pEVar11 = (this->fields).ExtenderBorderInfo;
    VStack_7.x = (pVVar10->zeroVector).x;
    VStack_7.y = (pVVar10->zeroVector).y;
    VStack_7.z = (pVVar10->zeroVector).z;
    if (pEVar11 == (ExtenderBorderInfo__Array *)0x0) {
DAT_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar12 = (this->fields).ExtenderDock;
    if ((uint)pEVar11->max_length <= uVar12) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    info = pEVar11->vector[(int)uVar12];
    ChatBubble_CalculateExtenderBorderVertices(this,info,&VStack_3,&VStack_7,(MethodInfo *)0x0);
    ChatBubble_SetExtenderAnchorPosToBorder(this,info,(MethodInfo *)0x0);
  }
  return;
}


/* Void PerformExtenderSnap() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformExtenderSnap
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).ExtenderComponent;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar1 == (Image *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((void *)(pIVar1->fields)._._._._._._._ == (void *)0x0) {
    return;
  }
  pIVar1 = (this->fields).ExtenderComponent;
  if ((pIVar1 == (Image *)0x0) ||
     (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pIVar1,(MethodInfo *)0x0), fVar3 = _UNK_?,
     fVar4 = _UNK_?, pRVar2 == (RectTransform *)0x0)) goto code_?;
  value.y = _UNK_?;
  value.x = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
            (pRVar2,value,(MethodInfo *)0x0);
  iVar5 = (this->fields).ExtenderDock;
  if (iVar5 == 0) {
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 == (Image *)0x0) goto code_?;
    pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pIVar1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).ExtenderComponent;
    if (((pIVar1 == (Image *)0x0) ||
        (pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar6 == (RectTransform *)0x0
        )) || (value_04.y = 0.0, value_04.x = fVar4,
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar6,value_04,(MethodInfo *)0x0), pRVar2 == (RectTransform *)0x0))
    goto code_?;
    value_05.y = 0.0;
    value_05.x = fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar2,value_05,(MethodInfo *)0x0);
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 == (Image *)0x0) goto code_?;
    pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pIVar1,(MethodInfo *)0x0);
    uStack_7 = 0;
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(&uStack_7);
    if (pRVar2 == (RectTransform *)0x0) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uStack_13 = (undefined4)uStack_9;
    uStack_14 = uStack_9._4_4_;
    uStack_15 = (undefined4)uStack_10;
    uStack_16 = uStack_10._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar17 = (pRVar2->fields)._._._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pcVar11 = pcRam_?;
    pcVar18 = pcRam_?;
    pcVar19 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar18 = pcVar11,
       pcVar19 = pcRam_?, pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
code_?:
    pcRam_? = pcVar19;
    pcRam_? = pcVar18;
    (*pcVar11)(pvVar17);
  }
  else {
    if (iVar5 == 1) {
      pIVar1 = (this->fields).ExtenderComponent;
      if (pIVar1 == (Image *)0x0) goto code_?;
      pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pIVar1,(MethodInfo *)0x0);
      pIVar1 = (this->fields).ExtenderComponent;
      if (((pIVar1 == (Image *)0x0) ||
          (pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar1,(MethodInfo *)0x0),
          pRVar6 == (RectTransform *)0x0)) ||
         (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                    (pRVar6,(Vector2)((ulonglong)(uint)fVar4 << 0x20),(MethodInfo *)0x0),
         pRVar2 == (RectTransform *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                (pRVar2,(Vector2)((ulonglong)(uint)fVar4 << 0x20),(MethodInfo *)0x0);
      pIVar1 = (this->fields).ExtenderComponent;
      if (pIVar1 == (Image *)0x0) goto code_?;
      pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pIVar1,(MethodInfo *)0x0);
      uStack_7 = 0;
      uStack_8 = _UNK_?;
      uStack_9 = 0;
      uStack_10 = 0;
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(&uStack_7);
      if (pRVar2 == (RectTransform *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uStack_13 = (undefined4)uStack_9;
      uStack_14 = uStack_9._4_4_;
      uStack_15 = (undefined4)uStack_10;
      uStack_16 = uStack_10._4_4_;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar17 = (pRVar2->fields)._._._.m_CachedPtr;
      if (pvVar17 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      pcVar18 = pcRam_?;
      pcVar19 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar18 = pcRam_?,
         pcVar19 = pcVar11, pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      goto code_?;
    }
    if (iVar5 == 2) {
      pIVar1 = (this->fields).ExtenderComponent;
      if (pIVar1 == (Image *)0x0) goto code_?;
      pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pIVar1,(MethodInfo *)0x0);
      pIVar1 = (this->fields).ExtenderComponent;
      if (((pIVar1 == (Image *)0x0) ||
          (pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar1,(MethodInfo *)0x0),
          pRVar6 == (RectTransform *)0x0)) ||
         (value_00.y = fVar4, value_00.x = fVar3,
         UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                   (pRVar6,value_00,(MethodInfo *)0x0), pRVar2 == (RectTransform *)0x0))
      goto code_?;
      value_03.y = fVar4;
      value_03.x = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                (pRVar2,value_03,(MethodInfo *)0x0);
      pIVar1 = (this->fields).ExtenderComponent;
      if (pIVar1 == (Image *)0x0) goto code_?;
      pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pIVar1,(MethodInfo *)0x0);
      uStack_7 = 0;
      uStack_8 = _UNK_?;
      uStack_9 = 0;
      uStack_10 = 0;
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(&uStack_7);
      if (pRVar2 == (RectTransform *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uStack_13 = (undefined4)uStack_9;
      uStack_14 = uStack_9._4_4_;
      uStack_15 = (undefined4)uStack_10;
      uStack_16 = uStack_10._4_4_;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar17 = (pRVar2->fields)._._._.m_CachedPtr;
      if (pvVar17 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      pcVar18 = pcRam_?;
      pcVar19 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar18 = pcRam_?,
         pcVar19 = pcVar11, pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      goto code_?;
    }
    if (iVar5 == 3) {
      pIVar1 = (this->fields).ExtenderComponent;
      if (pIVar1 == (Image *)0x0) goto code_?;
      pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pIVar1,(MethodInfo *)0x0);
      pIVar1 = (this->fields).ExtenderComponent;
      if (((pIVar1 == (Image *)0x0) ||
          (pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar1,(MethodInfo *)0x0),
          pRVar6 == (RectTransform *)0x0)) ||
         (value_01.y = fVar3, value_01.x = fVar4,
         UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                   (pRVar6,value_01,(MethodInfo *)0x0), pRVar2 == (RectTransform *)0x0))
      goto code_?;
      value_02.y = fVar3;
      value_02.x = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                (pRVar2,value_02,(MethodInfo *)0x0);
      pIVar1 = (this->fields).ExtenderComponent;
      if (pIVar1 == (Image *)0x0) goto code_?;
      pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pIVar1,(MethodInfo *)0x0);
      uStack_7 = 0;
      uStack_8 = _UNK_?;
      uStack_9 = 0;
      uStack_10 = 0;
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(&uStack_7);
      if (pRVar2 == (RectTransform *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uStack_13 = (undefined4)uStack_9;
      uStack_14 = uStack_9._4_4_;
      uStack_15 = (undefined4)uStack_10;
      uStack_16 = uStack_10._4_4_;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar17 = (pRVar2->fields)._._._.m_CachedPtr;
      if (pvVar17 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      pcVar18 = pcRam_?;
      pcVar19 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar18 = pcVar11,
         pcVar19 = pcRam_?, pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      goto code_?;
    }
  }
  pIVar1 = (this->fields).ExtenderComponent;
  if (pIVar1 != (Image *)0x0) {
    bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pIVar1,(MethodInfo *)0x0);
    if (bVar20 != 0) {
      pEVar21 = (this->fields).ExtenderBorderInfo;
      if (pEVar21 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
      uVar22 = (this->fields).ExtenderDock;
      if ((uint)pEVar21->max_length <= uVar22) goto code_?;
      if (pEVar21->vector[(int)uVar22] == (ExtenderBorderInfo *)0x0) goto code_?;
      if ((pEVar21->vector[(int)uVar22]->fields).Enabled == 0) {
        pIVar1 = (this->fields).ExtenderComponent;
        if (pIVar1 == (Image *)0x0) goto code_?;
        bVar20 = 0;
        goto code_?;
      }
    }
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 != (Image *)0x0) {
      bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)pIVar1,(MethodInfo *)0x0);
      if (bVar20 != 0) {
        return;
      }
      pEVar21 = (this->fields).ExtenderBorderInfo;
      if (pEVar21 != (ExtenderBorderInfo__Array *)0x0) {
        uVar22 = (this->fields).ExtenderDock;
        if ((uint)pEVar21->max_length <= uVar22) {
code_?:
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (pEVar21->vector[(int)uVar22] != (ExtenderBorderInfo *)0x0) {
          if ((pEVar21->vector[(int)uVar22]->fields).Enabled == 0) {
            return;
          }
          pIVar1 = (this->fields).ExtenderComponent;
          if (pIVar1 != (Image *)0x0) {
            bVar20 = 1;
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar1,bVar20,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Vector2 PerformManualSize(String) */

Vector2 Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformManualSize
                  (ChatBubble *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VVar1 = (this->fields).MessageMinimumSize;
  pTVar2 = (this->fields).MessageComponent;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar2 != (Text *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pTVar2->fields)._._._._._._._ != (void *)0x0) {
      pTVar2 = (this->fields).MessageComponent;
      if (pTVar2 != (Text *)0x0) {
        uVar3 = (*(pTVar2->klass->vtable).get_text.methodPtr)
                          (pTVar2,(pTVar2->klass->vtable).get_text.method);
        pTVar2 = (this->fields).MessageComponent;
        if (pTVar2 != (Text *)0x0) {
          (*(pTVar2->klass->vtable).set_text.methodPtr)
                    (pTVar2,value,(pTVar2->klass->vtable).set_text.method);
          ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
          pTVar2 = (this->fields).MessageComponent;
          if ((pTVar2 != (Text *)0x0) &&
             (obj = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pTVar2,(MethodInfo *)0x0), obj != (RectTransform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_4 = 0;
            uStack_5 = 0;
            pvVar6 = (obj->fields)._._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              VVar1 = (Vector2)(*pcVar7)();
              return VVar1;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar7 = (code *)swi(3);
              VVar1 = (Vector2)(*pcVar7)();
              return VVar1;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)(pvVar6,&uStack_4);
            pTVar2 = (this->fields).MessageComponent;
            (this->fields).MessageMinimumSize.x = (float)uStack_5;
            (this->fields).MessageMinimumSize.y = uStack_5._4_4_;
            if (pTVar2 != (Text *)0x0) {
              (*(pTVar2->klass->vtable).set_text.methodPtr)
                        (pTVar2,uVar3,(pTVar2->klass->vtable).set_text.method);
              uVar3._0_4_ = VVar1.x;
              uVar3._4_4_ = VVar1.y;
              return (Vector2)uVar3;
            }
          }
        }
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      VVar1 = (Vector2)(*pcVar7)();
      return VVar1;
    }
  }
  return VVar1;
}


/* Void SetChatBubbleVisibility(Boolean) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_SetChatBubbleVisibility
               (ChatBubble *this,bool shouldBeVisible,MethodInfo *method)

{
  this_00 = (this->fields).CanvasGroup;
  if (shouldBeVisible == 0) {
    (this->fields).currentFade = 0.0;
    (this->fields).timeUntilFade = 0.0;
    if (this_00 != (CanvasGroup *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                      ,CONCAT71(in_register_00000011,shouldBeVisible),0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_00 == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar2 = (this_00->fields)._._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar2);
      return;
    }
  }
  else {
    (this->fields).currentFade = 1.0;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,(this->fields).currentFade,(MethodInfo *)0x0);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar4 = (float)(*pcRam_?)();
      pSVar5 = (this->fields).MessageValue;
      if (pSVar5 != (String *)0x0) {
        fVar4 = (float)(pSVar5->fields)._stringLength / _UNK_? + fVar4 + _UNK_?;
        pfVar6 = &(this->fields).timeUntilFade;
        if (fVar4 < *pfVar6 || fVar4 == *pfVar6) {
          return;
        }
        (this->fields).timeUntilFade = fVar4;
        return;
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetExtenderAnchorPosToBorder(ExtenderBorderInfo) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_SetExtenderAnchorPosToBorder
               (ChatBubble *this,ExtenderBorderInfo *info,MethodInfo *method)

{
  iVar1 = (this->fields).ExtenderDock;
  if (iVar1 == 0) {
    pIVar2 = (this->fields).ExtenderComponent;
    if (pIVar2 == (Image *)0x0) goto code_?;
    this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar2,(MethodInfo *)0x0);
    pIVar2 = (this->fields).ExtenderComponent;
    if ((pIVar2 == (Image *)0x0) ||
       (pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar2,(MethodInfo *)0x0), pRVar3 == (RectTransform *)0x0))
    goto code_?;
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(pRVar3,(MethodInfo *)0x0);
    fStackX_8 = VVar4.x;
    if (info == (ExtenderBorderInfo *)0x0) goto code_?;
    fVar5 = (info->fields).Margin;
code_?:
    if (this_00 == (RectTransform *)0x0) goto code_?;
    VVar4.y = fVar5;
    VVar4.x = fStackX_8;
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = (this->fields).ExtenderComponent;
      if ((pIVar2 == (Image *)0x0) ||
         (this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pIVar2,(MethodInfo *)0x0),
         info == (ExtenderBorderInfo *)0x0)) goto code_?;
      pIVar2 = (this->fields).ExtenderComponent;
      fVar5 = (info->fields).Margin;
      if ((pIVar2 == (Image *)0x0) ||
         (pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pIVar2,(MethodInfo *)0x0), pRVar3 == (RectTransform *)0x0))
      goto code_?;
      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_get_anchoredPosition(pRVar3,(MethodInfo *)0x0);
      fVar6 = VVar4.y;
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 3) {
          return;
        }
        pIVar2 = (this->fields).ExtenderComponent;
        if (pIVar2 == (Image *)0x0) goto code_?;
        this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar2,(MethodInfo *)0x0);
        pIVar2 = (this->fields).ExtenderComponent;
        if ((pIVar2 == (Image *)0x0) ||
           (pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar2,(MethodInfo *)0x0), pRVar3 == (RectTransform *)0x0
           )) goto code_?;
        VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_get_anchoredPosition(pRVar3,(MethodInfo *)0x0);
        fStackX_8 = VVar4.x;
        if (info == (ExtenderBorderInfo *)0x0) goto code_?;
        fVar5 = (float)((uint)(info->fields).Margin ^ _UNK_?);
        goto code_?;
      }
      pIVar2 = (this->fields).ExtenderComponent;
      if ((pIVar2 == (Image *)0x0) ||
         (this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pIVar2,(MethodInfo *)0x0),
         info == (ExtenderBorderInfo *)0x0)) goto code_?;
      pIVar2 = (this->fields).ExtenderComponent;
      fVar5 = (info->fields).Margin;
      if ((pIVar2 == (Image *)0x0) ||
         (pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pIVar2,(MethodInfo *)0x0), pRVar3 == (RectTransform *)0x0))
      goto code_?;
      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_get_anchoredPosition(pRVar3,(MethodInfo *)0x0);
      fVar6 = VVar4.y;
      fVar5 = (float)((uint)fVar5 ^ _UNK_?);
    }
    if (this_00 == (RectTransform *)0x0) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    VVar4.y = fVar6;
    VVar4.x = fVar5;
  }
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
            (this_00,VVar4,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_Update(ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ChatBubble_PerformExtenderPosition(this,(MethodInfo *)0x0);
  pCVar1 = (this->fields).anchor;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar3 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (pCVar1 != (ChatAnchor *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pCVar1 = (this->fields).anchor;
      if (pCVar1 == (ChatAnchor *)0x0) goto code_?;
      ChatAnchor::ChatAnchor_UpdateAttachedBubblePosition(pCVar1,(MethodInfo *)0x0);
    }
  }
  fVar4 = (this->fields).timeUntilFade;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  fVar6 = (float)(*pcRam_?)();
  if (fVar6 <= fVar4) {
    ChatBubble_UpdateDistanceFading(this,(MethodInfo *)0x0);
    return;
  }
  fVar4 = (this->fields).currentFade;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  fVar6 = (float)(*pcRam_?)();
  pCVar7 = (this->fields).CanvasGroup;
  fVar4 = fVar4 - fVar6;
  (this->fields).currentFade = fVar4;
  if (pCVar7 != (CanvasGroup *)0x0) {
    fVar6 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar7,(MethodInfo *)0x0);
    if (fVar6 <= fVar4) {
      return;
    }
    pCVar7 = (this->fields).CanvasGroup;
    if (pCVar7 != (CanvasGroup *)0x0) {
      fVar4 = (this->fields).currentFade;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                      ,fVar4,0,in_R9,uVar2,uVar3,unaff_RBX);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pCVar7 == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar8 = (pCVar7->fields)._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar7,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar8,fVar4);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateDistanceFading() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_UpdateDistanceFading
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    if ((pMVar3->fields)._.playerState == 1) {
      pCVar4 = (this->fields).anchor;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pCVar4 != (ChatAnchor *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pCVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pCVar4 = (this->fields).anchor;
          if ((pCVar4 != (ChatAnchor *)0x0) &&
             (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar4,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_5 = 0;
            fStack_6 = 0.0;
            pvVar7 = (obj->fields)._._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar7,&uStack_5);
            pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                ((MethodInfo *)0x0);
            if (((pSVar10 != (SpawnRoleDataMediator *)0x0) &&
                (pSVar11 = (pSVar10->fields).position,
                pSVar11 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)
                          0x0)) &&
               (pSVar12 = (pSVar11->fields)._.subscribableVariable,
               pSVar12 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
              if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   ->klass->field_0x135 & 1) == 0) {
                FUN_?();
              }
              uVar13 = (pSVar12->fields)._.value.x;
              uVar14 = (pSVar12->fields)._.value.y;
              fStack_6 = fStack_6 - (pSVar12->fields)._.value.z;
              uStack_5 = CONCAT44(uStack_5._4_4_ - (float)uVar14,(float)uStack_5 - (float)uVar13);
              fVar15 = (float)FUN_?(&uStack_5);
              if (fVar15 <= _UNK_?) {
                return;
              }
              this_01 = (this->fields).CanvasGroup;
              if (this_01 != (CanvasGroup *)0x0) {
                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                          (this_01,(_UNK_? - fVar15) / _UNK_?,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto code_?;
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateFading() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_UpdateFading(ChatBubble *this,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  fVar3 = (this->fields).timeUntilFade;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?,method,in_R8,in_R9,uVar1,uVar2),
     pcVar4 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  fVar5 = (float)(*pcRam_?)();
  if (fVar5 <= fVar3) {
    ChatBubble_UpdateDistanceFading(this,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (this->fields).currentFade;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  fVar5 = (float)(*pcRam_?)();
  pCVar6 = (this->fields).CanvasGroup;
  fVar3 = fVar3 - fVar5;
  (this->fields).currentFade = fVar3;
  if (pCVar6 != (CanvasGroup *)0x0) {
    fVar5 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar6,(MethodInfo *)0x0);
    if (fVar5 <= fVar3) {
      return;
    }
    pCVar6 = (this->fields).CanvasGroup;
    if (pCVar6 != (CanvasGroup *)0x0) {
      fVar3 = (this->fields).currentFade;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                      ,fVar3,0,in_R9,uVar1,uVar2,unaff_RBX);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pCVar6 == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar7 = (pCVar6->fields)._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar6,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar1 = func_?(&UNK_?);
        FUN_?(uVar1,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar7,fVar3);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ChatBubble() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble__ctor(ChatBubble *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).MessageMinimumSize.x = 60.0;
  (this->fields).MessageMinimumSize.y = 30.0;
  (this->fields).MessageWrapWidth = 300.0;
  (this->fields).isActive = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x30528cee,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* RectTransform get_rectTransform() */

RectTransform *
Assembly-CSharp.dll::ChatBubble::ChatBubble_get_rectTransform(ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields)._rectTransform;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar1 != (RectTransform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar1->fields)._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pRVar1 = (RectTransform *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                     );
  bVar2 = iRam_? == 0;
  (this->fields)._rectTransform = pRVar1;
  if (bVar2) {
    return pRVar1;
  }
  uVar3 = (uint)((ulonglong)&(this->fields)._rectTransform >> 0xc);
  puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar5 = *puVar4;
    LOCK();
    uVar6 = *puVar4;
    if (uVar5 == uVar6) {
      *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
    }
    UNLOCK();
  } while (uVar5 != uVar6);
code_?:
  return (this->fields)._rectTransform;
}

