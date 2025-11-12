
/* Avatar GetAvatar() */

Avatar * Assembly-CSharp.dll::ActivateOnAnimationBase::ActivateOnAnimationBase_GetAvatar
                   (ActivateOnAnimationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Avatar *)0x0;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 == (Transform *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pAVar1 = (Avatar *)(*pcVar3)();
    return pAVar1;
  }
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                     (pTVar2,(MethodInfo *)0x0);
  while( true ) {
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
    if (pTVar2 == (Transform *)0x0) break;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
      return pAVar1;
    }
    pAVar1 = (Avatar *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)pTVar2,
                        Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
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
    if (pAVar1 != (Avatar *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
        return pAVar1;
      }
    }
  }
  return pAVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ActivateOnAnimationBase::ActivateOnAnimationBase_OnDestroy
               (ActivateOnAnimationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).mvAvatar == (MVAvatar *)0x0) {
    return;
  }
  pMVar1 = (((this->fields).mvAvatar)->fields).body;
  if (((pMVar1 != (MVBody *)0x0) &&
      (pMVar2 = (pMVar1->fields).bodyObject, pMVar2 != (MVBodyObject *)0x0)) &&
     (pBVar3 = (pMVar2->fields).boneAnimation, pBVar3 != (BoneAnimation *)0x0)) {
    pAVar4 = (pBVar3->fields).OnAnimationChange;
    pUVar5 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar5,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    pAVar7 = TypeInfo__System__Action<System::String>;
    if (pDVar6 == (Delegate *)0x0) {
      (pBVar3->fields).OnAnimationChange = (Action_1_String_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_String_ *)FUN_?(pDVar6,TypeInfo__System__Action<System::String>);
      if (pAVar4 == (Action_1_String_ *)0x0) {
        FUN_?(pDVar6,pAVar7);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (pBVar3->fields).OnAnimationChange = pAVar4;
      pAVar7 = TypeInfo__System__Action<System::String>;
      lVar9 = FUN_?(pDVar6,TypeInfo__System__Action<System::String>);
      if (lVar9 == 0) {
        FUN_?(pDVar6,pAVar7);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&(pBVar3->fields).OnAnimationChange >> 0xc);
      lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar12 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    pMVar14 = (this->fields).mvAvatar;
    if ((pMVar14 != (MVAvatar *)0x0) &&
       (pAVar15 = (pMVar14->fields).limbManager, pAVar15 != (AvatarLimbManager *)0x0)) {
      pAVar4 = (pAVar15->fields).OnEmoteStart;
      pUVar5 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<System::String>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar5,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
      pAVar7 = TypeInfo__System__Action<System::String>;
      if (pDVar6 == (Delegate *)0x0) {
        (pAVar15->fields).OnEmoteStart = (Action_1_String_ *)0x0;
      }
      else {
        pAVar4 = (Action_1_String_ *)
                  FUN_?(pDVar6,TypeInfo__System__Action<System::String>);
        if (pAVar4 == (Action_1_String_ *)0x0) {
          FUN_?(pDVar6,pAVar7);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (pAVar15->fields).OnEmoteStart = pAVar4;
        pAVar7 = TypeInfo__System__Action<System::String>;
        lVar9 = FUN_?(pDVar6,TypeInfo__System__Action<System::String>);
        if (lVar9 == 0) {
          FUN_?(pDVar6,pAVar7);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (iRam_? == 0) {
        return;
      }
      uVar10 = (uint)((ulonglong)&(pAVar15->fields).OnEmoteStart >> 0xc);
      lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar12 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ActivateOnAnimationBase::ActivateOnAnimationBase_Start
               (ActivateOnAnimationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)0x0;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                        (pTVar2,(MethodInfo *)0x0);
    do {
      do {
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
        if (pTVar2 == (Transform *)0x0) goto code_?;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
        pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                            ((Component *)pTVar2,
                             Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (pTVar2,(MethodInfo *)0x0);
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
      } while (pOVar1 == (Object *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
    } while (pOVar1[1].klass == (Object__Class *)0x0);
code_?:
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
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar1[1].klass != (Object__Class *)0x0) {
        bVar3 = iRam_? != 0;
        (this->fields).mvAvatar = (MVAvatar *)pOVar1[2].klass;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).mvAvatar >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        pMVar8 = (this->fields).mvAvatar;
        if ((((pMVar8 != (MVAvatar *)0x0) &&
             (pMVar9 = (pMVar8->fields).body, pMVar9 != (MVBody *)0x0)) &&
            (pMVar10 = (pMVar9->fields).bodyObject, pMVar10 != (MVBodyObject *)0x0)) &&
           (pBVar11 = (pMVar10->fields).boneAnimation, pBVar11 != (BoneAnimation *)0x0)) {
          pAVar12 = (pBVar11->fields).OnAnimationChange;
          pUVar13 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<System::String>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (pUVar13,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0
                    );
          pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar12,(Delegate *)pUVar13,(MethodInfo *)0x0);
          pAVar15 = TypeInfo__System__Action<System::String>;
          if (pDVar14 == (Delegate *)0x0) {
            (pBVar11->fields).OnAnimationChange = (Action_1_String_ *)0x0;
          }
          else {
            pAVar12 = (Action_1_String_ *)
                      FUN_?(pDVar14,TypeInfo__System__Action<System::String>);
            if (pAVar12 == (Action_1_String_ *)0x0) {
              FUN_?(pDVar14,pAVar15);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            (pBVar11->fields).OnAnimationChange = pAVar12;
            pAVar15 = TypeInfo__System__Action<System::String>;
            lVar5 = FUN_?(pDVar14,TypeInfo__System__Action<System::String>);
            if (lVar5 == 0) {
              FUN_?(pDVar14,pAVar15);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)&(pBVar11->fields).OnAnimationChange >> 0xc);
            lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
              puVar7 = (ulonglong *)(lVar5 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          pMVar8 = (this->fields).mvAvatar;
          if ((pMVar8 != (MVAvatar *)0x0) &&
             (pAVar17 = (pMVar8->fields).limbManager, pAVar17 != (AvatarLimbManager *)0x0)) {
            pAVar12 = (pAVar17->fields).OnEmoteStart;
            pUVar13 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__System__Action<System::String>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (pUVar13,(Object *)this,(this->klass->vtable).__unknown.method,
                       (MethodInfo *)0x0);
            pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar12,(Delegate *)pUVar13,(MethodInfo *)0x0);
            pAVar15 = TypeInfo__System__Action<System::String>;
            if (pDVar14 == (Delegate *)0x0) {
              (pAVar17->fields).OnEmoteStart = (Action_1_String_ *)0x0;
            }
            else {
              pAVar12 = (Action_1_String_ *)
                        FUN_?(pDVar14,TypeInfo__System__Action<System::String>);
              if (pAVar12 == (Action_1_String_ *)0x0) {
                FUN_?(pDVar14,pAVar15);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              (pAVar17->fields).OnEmoteStart = pAVar12;
              pAVar15 = TypeInfo__System__Action<System::String>;
              lVar5 = FUN_?(pDVar14,TypeInfo__System__Action<System::String>);
              if (lVar5 == 0) {
                FUN_?(pDVar14,pAVar15);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            if (iRam_? == 0) {
              return;
            }
            uVar4 = (uint)((ulonglong)&(pAVar17->fields).OnEmoteStart >> 0xc);
            lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
              puVar7 = (ulonglong *)(lVar5 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
            return;
          }
        }
        goto code_?;
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

