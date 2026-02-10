
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
    ChatBubble_UpdateExtenderPosition(this,(MethodInfo *)0x0);
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
                    ChatBubble_UpdateExtenderPosition(this,(MethodInfo *)0x0);
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
    FUN_?(&::StringLiteral__);
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
  if (value != (String *)0x0) {
    iVar1 = (value->fields)._stringLength;
    if (0x96 < iVar1) {
      if (iVar1 + -0x96 < 0) {
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
      pSVar3 = mscorlib.dll::System::String::String_InternalSubString
                          (value,0,0x96,(MethodInfo *)0x0);
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
    if (pTVar11 == (TextMeshProUGUI *)0x0) {
      return 0;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((Object_1__Fields)(pTVar11->fields)._._._._._._._ == (Object_1__Fields)0x0) {
      return 0;
    }
    pAVar12 = (this->fields).PopUpSound;
    if (pAVar12 != (AudioSource *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar13 = (pAVar12->fields)._._._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar12,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      pcRam_? = pcVar4;
      cVar14 = (*pcRam_?)(pvVar13);
      if (cVar14 != '\0') {
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        pcRam_? = pcVar4;
        value_00 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
        pAVar12 = (this->fields).PopUpSound;
        if (pAVar12 == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (pAVar12,value_00,(MethodInfo *)0x0);
        pAVar12 = (this->fields).PopUpSound;
        if (pAVar12 == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (pAVar12,(MethodInfo *)0x0);
      }
      pTVar11 = (this->fields).MessageComponent;
      if (pTVar11 != (TextMeshProUGUI *)0x0) {
        (*(pTVar11->klass->vtable).set_text.methodPtr)(pTVar11,value);
        ChatBubble_SetupActivationAnimation(this,1,(MethodInfo *)0x0);
        if ((this->fields).AutoSize != 0) {
          ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
        }
        pCVar15 = (this->fields).anchor;
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
        if (pCVar15 != (ChatAnchor *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pCVar15->fields)._._._._.m_CachedPtr != (void *)0x0) {
            this_00 = (this->fields).NameContainer;
            if (this_00 != (RoundedRectangle *)0x0) {
              this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_00,(MethodInfo *)0x0);
              pTVar11 = (this->fields).NameValue;
              if (pTVar11 != (TextMeshProUGUI *)0x0) {
                pSVar3 = (String *)
                          (*(pTVar11->klass->vtable).get_text.methodPtr)
                                    (pTVar11,(pTVar11->klass->vtable).get_text.method);
                if (pSVar3 == ::StringLiteral__) {
                  bVar16 = 1;
                }
                else if (((pSVar3 == (String *)0x0) || (::StringLiteral__ == (String *)0x0)) ||
                        ((pSVar3->fields)._stringLength !=
                         (::StringLiteral__->fields)._stringLength)) {
                  bVar16 = 0;
                }
                else {
                  bVar16 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                    ((uint8_t *)&(pSVar3->fields)._firstChar,
                                     (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                     (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0
                                    );
                }
                if (this_01 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (this_01,bVar16 ^ 1,(MethodInfo *)0x0);
                  pCVar15 = (this->fields).anchor;
                  if (pCVar15 != (ChatAnchor *)0x0) {
                    (pCVar15->fields).snapTracking = 1;
                    pCVar15 = (this->fields).anchor;
                    if (pCVar15 != (ChatAnchor *)0x0) {
                      ChatAnchor::ChatAnchor_UpdateAttachedBubblePosition(pCVar15,(MethodInfo *)0x0);
                      return 1;
                    }
                  }
                }
              }
            }
            goto code_?;
          }
        }
        return 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void CalculateExtenderBorderVertices(ExtenderBorderInfo, Vector3 ByRef, Vector3 ByRef) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_CalculateExtenderBorderVertices
               (ChatBubble *this,ExtenderBorderInfo *info,Vector3 *v1,Vector3 *v2,MethodInfo *method
               )

{
  pRVar1 = ChatBubble_get_RectTransform(this,(MethodInfo *)0x0);
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
    pRVar1 = ChatBubble_get_RectTransform(this,(MethodInfo *)0x0);
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


/* Single GetDistanceAlpha() */

float Assembly-CSharp.dll::ChatBubble::ChatBubble_GetDistanceAlpha
                (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
         (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
        (this_00 = (pMVar3->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
       (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar4 == (MVLocalPlayer *)0x0)) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      fVar6 = (float)(*pcVar5)();
      return fVar6;
    }
    if ((pMVar4->fields)._.playerState == 1) {
      pCVar7 = (this->fields).anchor;
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
      if (pCVar7 != (ChatAnchor *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pCVar7->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pCVar7 = (this->fields).anchor;
          if ((pCVar7 != (ChatAnchor *)0x0) &&
             (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar7,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_8 = 0;
            fStack_9 = 0.0;
            pvVar10 = (obj->fields)._._.m_CachedPtr;
            if (pvVar10 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              fVar6 = (float)(*pcVar5)();
              return fVar6;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar11 = func_?(&UNK_?);
              FUN_?(uVar11,0);
              pcVar5 = (code *)swi(3);
              fVar6 = (float)(*pcVar5)();
              return fVar6;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar10,&uStack_8);
            pSVar12 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                ((MethodInfo *)0x0);
            if (((pSVar12 != (SpawnRoleDataMediator *)0x0) &&
                (pSVar13 = (pSVar12->fields).position,
                pSVar13 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)
                          0x0)) &&
               (pSVar14 = (pSVar13->fields)._.subscribableVariable,
               pSVar14 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
              if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   ->klass->field_0x135 & 1) == 0) {
                FUN_?();
              }
              uVar15 = (pSVar14->fields)._.value.x;
              uVar16 = (pSVar14->fields)._.value.y;
              fStack_9 = fStack_9 - (pSVar14->fields)._.value.z;
              uStack_8 = CONCAT44(uStack_8._4_4_ - (float)uVar16,(float)uStack_8 - (float)uVar15);
              fVar6 = (float)FUN_?(&uStack_8);
              if (fVar6 <= _UNK_?) {
                return _UNK_?;
              }
              return (_UNK_? - fVar6) / _UNK_?;
            }
          }
          goto code_?;
        }
      }
    }
  }
  return 0.0;
}


/* Void HideBubble() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_HideBubble(ChatBubble *this,MethodInfo *method)

{
  this_00 = (this->fields).CanvasGroup;
  if (this_00 == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
            (this_00,0.0,(MethodInfo *)0x0);
  if ((this->fields).animationCoroutine != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,(this->fields).animationCoroutine,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).animationCoroutine = (IEnumerator *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).animationCoroutine >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_OnDisable(ChatBubble *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  this_00 = (this->fields).CanvasGroup;
  if (this_00 == (CanvasGroup *)0x0) {
    FUN_?(0,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
            (this_00,0.0,(MethodInfo *)0x0);
  if ((this->fields).animationCoroutine != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,(this->fields).animationCoroutine,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).animationCoroutine = (IEnumerator *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).animationCoroutine >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_OnEnable(ChatBubble *this,MethodInfo *method)

{
  (this->fields).isActive = 1;
  return;
}


/* Boolean PerformAutoHeight() */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformAutoHeight
               (ChatBubble *this,MethodInfo *method)

{
  fVar1 = (this->fields).MessageMinimumSize.x;
  fVar2 = (this->fields).MessageWrapWidth;
  pTVar3 = (this->fields).MessageComponent;
  if (pTVar3 != (TextMeshProUGUI *)0x0) {
    pRVar4 = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_rectTransform
                       ((TMP_Text *)pTVar3,(MethodInfo *)0x0);
    fVar5 = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::LayoutUtility_GetPreferredWidth
                       (pRVar4,(MethodInfo *)0x0);
    if (fVar5 <= fVar2) {
      fVar2 = fVar5;
    }
    if (fVar1 <= fVar2) {
      fVar1 = fVar2;
    }
    pTVar3 = (this->fields).MessageComponent;
    if ((pTVar3 != (TextMeshProUGUI *)0x0) &&
       (pRVar4 = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_rectTransform
                           ((TMP_Text *)pTVar3,(MethodInfo *)0x0), pRVar4 != (RectTransform *)0x0))
    {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (pRVar4->fields)._._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar4,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6);
      if ((this->fields).MessageWrapWidth <= fVar1) {
        pTVar3 = (this->fields).MessageComponent;
        if (pTVar3 == (TextMeshProUGUI *)0x0) goto code_?;
        pRVar4 = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_rectTransform
                           ((TMP_Text *)pTVar3,(MethodInfo *)0x0);
        fVar1 = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::
                 LayoutUtility_GetPreferredHeight(pRVar4,(MethodInfo *)0x0);
      }
      else {
        fVar1 = (this->fields).MessageMinimumSize.y;
      }
      fVar2 = (this->fields).MessageMinimumSize.y;
      if (fVar2 <= fVar1) {
        fVar2 = fVar1;
      }
      if (fVar2 == 0.0) {
        return 0;
      }
      pRVar4 = ChatBubble_get_RectTransform(this,(MethodInfo *)0x0);
      obj = ChatBubble_get_RectTransform(this,(MethodInfo *)0x0);
      if (obj != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar6 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)(pvVar6);
        if (pRVar4 != (RectTransform *)0x0) {
          VVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_get_sizeDelta(pRVar4,(MethodInfo *)0x0);
          VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_GetParentSize(pRVar4,(MethodInfo *)0x0);
          VVar12 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_get_anchorMax(pRVar4,(MethodInfo *)0x0);
          VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_get_anchorMin(pRVar4,(MethodInfo *)0x0);
          fStackX_c = VVar12.y;
          fStackX_1c = VVar13.y;
          fStackX_24 = VVar11.y;
          fStack_14 = VVar10.x;
          VVar10.y = ((fVar2 - 0.0) + 0.0) - (fStackX_c - fStackX_1c) * fStackX_24;
          VVar10.x = fStack_14;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar4,VVar10,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
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
  if (pTVar1 != (TextMeshProUGUI *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((Object_1__Fields)(pTVar1->fields)._._._._._._._ != (Object_1__Fields)0x0) {
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
  if ((pTVar1 != (TextMeshProUGUI *)0x0) &&
     (pRVar2 = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_rectTransform
                         ((TMP_Text *)pTVar1,(MethodInfo *)0x0), pRVar2 != (RectTransform *)0x0)) {
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
    if (pTVar1 != (TextMeshProUGUI *)0x0) {
      pRVar2 = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_rectTransform
                         ((TMP_Text *)pTVar1,(MethodInfo *)0x0);
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
      pRVar2 = ChatBubble_get_RectTransform(this,(MethodInfo *)0x0);
      obj = ChatBubble_get_RectTransform(this,(MethodInfo *)0x0);
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
  if (pTVar2 != (TextMeshProUGUI *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((Object_1__Fields)(pTVar2->fields)._._._._._._._ != (Object_1__Fields)0x0) {
      pTVar2 = (this->fields).MessageComponent;
      if (pTVar2 != (TextMeshProUGUI *)0x0) {
        uVar3 = (*(pTVar2->klass->vtable).get_text.methodPtr)
                          (pTVar2,(pTVar2->klass->vtable).get_text.method);
        pTVar2 = (this->fields).MessageComponent;
        if (pTVar2 != (TextMeshProUGUI *)0x0) {
          (*(pTVar2->klass->vtable).set_text.methodPtr)
                    (pTVar2,value,(pTVar2->klass->vtable).set_text.method);
          ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
          pTVar2 = (this->fields).MessageComponent;
          if ((pTVar2 != (TextMeshProUGUI *)0x0) &&
             (obj = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_rectTransform
                              ((TMP_Text *)pTVar2,(MethodInfo *)0x0), obj != (RectTransform *)0x0))
          {
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
            if (pTVar2 != (TextMeshProUGUI *)0x0) {
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


/* Void SetAlpha(Single) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_SetAlpha
               (ChatBubble *this,float alpha,MethodInfo *method)

{
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
                  ,in_RDX,0);
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
  (*pcRam_?)(pvVar2,alpha);
  return;
}


/* Void SetExtenderAnchorPosToBorder(ExtenderBorderInfo) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_SetExtenderAnchorPosToBorder
               (ChatBubble *this,ExtenderBorderInfo *info,MethodInfo *method)

{
  iVar1 = (this->fields).ExtenderDock;
  if (iVar1 == 0) {
    pIVar2 = (this->fields).ExtenderComponent;
    if ((pIVar2 == (Image *)0x0) ||
       (obj = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar2,(MethodInfo *)0x0), info == (ExtenderBorderInfo *)0x0))
    goto code_?;
    fVar3 = (info->fields).Margin;
  }
  else {
    if (iVar1 == 1) {
      pIVar2 = (this->fields).ExtenderComponent;
      if (((pIVar2 == (Image *)0x0) ||
          (obj = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar2,(MethodInfo *)0x0), info == (ExtenderBorderInfo *)0x0)
          ) || (fVar3 = 0.0, obj == (RectTransform *)0x0)) goto code_?;
      fVar4 = (info->fields).Margin;
      goto code_?;
    }
    if (iVar1 == 2) {
      pIVar2 = (this->fields).ExtenderComponent;
      if ((pIVar2 != (Image *)0x0) &&
         (obj = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                          ((Graphic *)pIVar2,(MethodInfo *)0x0), info != (ExtenderBorderInfo *)0x0))
      {
        fVar3 = 0.0;
        fVar4 = (float)((uint)(info->fields).Margin ^ _UNK_?);
        if (obj != (RectTransform *)0x0) goto code_?;
      }
      goto code_?;
    }
    if (iVar1 != 3) {
      return;
    }
    pIVar2 = (this->fields).ExtenderComponent;
    if ((pIVar2 == (Image *)0x0) ||
       (obj = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar2,(MethodInfo *)0x0), info == (ExtenderBorderInfo *)0x0))
    goto code_?;
    fVar3 = (float)((uint)(info->fields).Margin ^ _UNK_?);
  }
  if (obj == (RectTransform *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar4 = 0.0;
code_?:
  auStack_6[0] = CONCAT44(fVar3,fVar4);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                  ,auStack_6[0],0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar7 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar7,auStack_6);
  return;
}


/* Void SetSenderName(String) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_SetSenderName
               (ChatBubble *this,String *name,MethodInfo *method)

{
  if (name != (String *)0x0) {
    uVar1 = (*(name->klass->vtable).GetHashCode.methodPtr)
                      (name,(name->klass->vtable).GetHashCode.method);
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(uVar1);
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    H = (float)(*pcRam_?)(0,_UNK_?);
    pRVar4 = (this->fields).NameContainer;
    pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_HSVToRGB_1
                       (&CStack_6,H,_UNK_?,_UNK_?,1,(MethodInfo *)0x0);
    if (pRVar4 != (RoundedRectangle *)0x0) {
      CStack_6.r = pCVar5->r;
      CStack_6.g = pCVar5->g;
      CStack_6.b = pCVar5->b;
      CStack_6.a = pCVar5->a;
      (*(pRVar4->klass->vtable).set_color.methodPtr)
                (pRVar4,&CStack_6,(pRVar4->klass->vtable).set_color.method);
      pTVar7 = (this->fields).NameValue;
      if (pTVar7 != (TextMeshProUGUI *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pTVar7->klass->vtable).set_text.methodPtr)
                  (pTVar7,name,(pTVar7->klass->vtable).set_text.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupActivationAnimation(Boolean) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_SetupActivationAnimation
               (ChatBubble *this,bool activationValue,MethodInfo *method)

{
  (this->fields).targetActivation = activationValue;
  if ((this->fields).animationCoroutine != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,(this->fields).animationCoroutine,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).animationCoroutine = (IEnumerator *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).animationCoroutine >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChatBubble___UpdateAnimationCoroutine_d__37);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar6 = (IEnumerator *)FUN_?(TypeInfo__ChatBubble___UpdateAnimationCoroutine_d__37);
  iVar7 = iRam_?;
  *(undefined4 *)&pIVar6[1].klass = 0;
  pIVar6[2].klass = (IEnumerator__Class *)this;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)(pIVar6 + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).animationCoroutine = pIVar6;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).animationCoroutine >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pIVar6 = (this->fields).animationCoroutine;
  if (pIVar6 == (IEnumerator *)0x0) {
    uVar8 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar8);
    pSVar9 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar9,(MethodInfo *)0x0);
    uVar8 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar8);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    uVar8 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar8);
    pSVar9 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar9,(MethodInfo *)0x0);
    uVar8 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar8);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar12 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar12 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcRam_? = pcVar10;
  (*pcRam_?)(pvVar12,pIVar6);
  return;
}


/* Void SetupMessageComponent(String) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_SetupMessageComponent
               (ChatBubble *this,String *value,MethodInfo *method)

{
  pAVar1 = (this->fields).PopUpSound;
  if (pAVar1 == (AudioSource *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (pAVar1->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
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
  cVar5 = (*pcRam_?)(pvVar2);
  if (cVar5 != '\0') {
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
    value_00 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
    pAVar1 = (this->fields).PopUpSound;
    if (pAVar1 == (AudioSource *)0x0) goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (pAVar1,value_00,(MethodInfo *)0x0);
    pAVar1 = (this->fields).PopUpSound;
    if (pAVar1 == (AudioSource *)0x0) goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
              (pAVar1,(MethodInfo *)0x0);
  }
  pTVar6 = (this->fields).MessageComponent;
  if (pTVar6 != (TextMeshProUGUI *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar6->klass->vtable).set_text.methodPtr)
              (pTVar6,value,(pTVar6->klass->vtable).set_text.method);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  ChatBubble_UpdateExtenderPosition(this,(MethodInfo *)0x0);
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
  if (pCVar1 != (ChatAnchor *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pCVar1 = (this->fields).anchor;
      if (pCVar1 == (ChatAnchor *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ChatAnchor::ChatAnchor_UpdateAttachedBubblePosition(pCVar1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* IEnumerator UpdateAnimationCoroutine() */

IEnumerator *
Assembly-CSharp.dll::ChatBubble::ChatBubble_UpdateAnimationCoroutine
          (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChatBubble___UpdateAnimationCoroutine_d__37);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__ChatBubble___UpdateAnimationCoroutine_d__37);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void UpdateAnimationState(Single, Single, Single, Single) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_UpdateAnimationState
               (ChatBubble *this,float currentTime,float animationTime,float startYPosition,
               float targetYPosition,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = currentTime / animationTime;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (_UNK_? < fVar2) {
    fVar2 = _UNK_?;
  }
  if (fVar2 < 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = _UNK_?;
    if (fVar2 <= _UNK_?) {
      fVar3 = fVar2;
    }
  }
  fVar3 = fVar3 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                  ._0_4_ * fVar3 * fVar3 + fVar3 * _UNK_? * fVar3;
  this_00 = (this->fields).AnimationContainer;
  if (this_00 != (RectTransform *)0x0) {
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
    fStackX_8 = VVar4.x;
    VVar4.y = (fVar1 - fVar3) * startYPosition + fVar3 * targetYPosition;
    VVar4.x = fStackX_8;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
              (this_00,VVar4,(MethodInfo *)0x0);
    if ((this->fields).targetActivation == 0) {
      fVar3 = 0.0;
      fVar5 = fVar1;
    }
    else {
      fVar3 = fVar1;
      fVar5 = 0.0;
    }
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    else if (fVar1 < fVar2) {
      fVar2 = fVar1;
    }
    fVar6 = fVar2 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                    ._0_4_ * fVar2 * fVar2 + fVar2 * _UNK_? * fVar2;
    fVar2 = ChatBubble_GetDistanceAlpha(this,(MethodInfo *)0x0);
    obj = (this->fields).CanvasGroup;
    fVar2 = fVar2 * ((fVar1 - fVar6) * fVar5 + fVar6 * fVar3);
    if (obj != (CanvasGroup *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                      ,fVar2,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pvVar8 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar8,fVar2);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateExtenderPosition() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_UpdateExtenderPosition
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
          goto code_?;
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
          aVStack_7[0].x = VStack_3.x;
          aVStack_7[0].y = VStack_3.y;
          aVStack_7[0].z = VStack_3.z;
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
          (*pcRam_?)(pvVar4,aVStack_7,2,&uStack_8);
          if ((((fStack_9 <= 0.0) || ((float)uStack_8 <= 0.0)) ||
              (_UNK_? <= (float)uStack_8)) ||
             ((uStack_8._4_4_ <= 0.0 || (_UNK_? <= uStack_8._4_4_)))) {
            ChatBubble_BindExtenderToClosestBorder(this,camera,(MethodInfo *)0x0);
          }
          else if ((this->fields).ExtenderDock != 0) {
            (this->fields).ExtenderDock = 0;
            ChatBubble_PerformExtenderSnap(this,(MethodInfo *)0x0);
            ChatBubble_UpdateExtenderPosition(this,(MethodInfo *)0x0);
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
  aVStack_7[0].x = (pVVar10->zeroVector).x;
  aVStack_7[0].y = (pVVar10->zeroVector).y;
  aVStack_7[0].z = (pVVar10->zeroVector).z;
  if (pEVar11 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
  uVar12 = (this->fields).ExtenderDock;
  if ((uint)pEVar11->max_length <= uVar12) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  info = pEVar11->vector[(int)uVar12];
  ChatBubble_CalculateExtenderBorderVertices(this,info,&VStack_3,aVStack_7,(MethodInfo *)0x0);
  iVar13 = (this->fields).ExtenderDock;
  if (iVar13 == 0) {
    pIVar1 = (this->fields).ExtenderComponent;
    if ((pIVar1 == (Image *)0x0) ||
       (this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar1,(MethodInfo *)0x0), info == (ExtenderBorderInfo *)0x0
       )) goto code_?;
    fVar14 = (info->fields).Margin;
code_?:
    if (this_00 == (RectTransform *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar15 = 0.0;
  }
  else {
    if (iVar13 == 1) {
      pIVar1 = (this->fields).ExtenderComponent;
      if (((pIVar1 == (Image *)0x0) ||
          (this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar1,(MethodInfo *)0x0),
          info == (ExtenderBorderInfo *)0x0)) || (this_00 == (RectTransform *)0x0))
      goto code_?;
      fVar15 = (info->fields).Margin;
    }
    else {
      if (iVar13 != 2) {
        if (iVar13 != 3) {
          return;
        }
        pIVar1 = (this->fields).ExtenderComponent;
        if ((pIVar1 == (Image *)0x0) ||
           (this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar1,(MethodInfo *)0x0),
           info == (ExtenderBorderInfo *)0x0)) goto code_?;
        fVar14 = (float)((uint)(info->fields).Margin ^ _UNK_?);
        goto code_?;
      }
      pIVar1 = (this->fields).ExtenderComponent;
      if (((pIVar1 == (Image *)0x0) ||
          (this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar1,(MethodInfo *)0x0),
          info == (ExtenderBorderInfo *)0x0)) ||
         (fVar15 = (float)((uint)(info->fields).Margin ^ _UNK_?),
         this_00 == (RectTransform *)0x0)) goto code_?;
    }
    fVar14 = 0.0;
  }
  value.y = fVar14;
  value.x = fVar15;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
            (this_00,value,(MethodInfo *)0x0);
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
  (this->fields).targetActivation = 1;
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
                while (ppMVar16 = ppMVar15 + 0x3052aacd,
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


/* RectTransform get_RectTransform() */

RectTransform *
Assembly-CSharp.dll::ChatBubble::ChatBubble_get_RectTransform(ChatBubble *this,MethodInfo *method)

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

