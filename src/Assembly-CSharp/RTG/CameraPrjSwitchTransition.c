
/* Void Begin() */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::CameraPrjSwitchTransition_Begin
               (CameraPrjSwitchTransition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._targetMono;
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
  if (pMVar1 != (MonoBehaviour *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      pCVar2 = (this->fields)._targetCamera;
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
      if (pCVar2 != (Camera *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pCVar2->fields)._._._.m_CachedPtr != (void *)0x0) {
          if ((this->fields)._transitionType != 0) {
            pMVar1 = (this->fields)._targetMono;
            if (pMVar1 == (MonoBehaviour *)0x0) {
code_?:
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                      (pMVar1,(this->fields)._transitionCrtn,(MethodInfo *)0x0);
            (this->fields)._transitionCrtn = (IEnumerator *)0x0;
            func_?(&(this->fields)._transitionCrtn);
            pCVar2 = (this->fields)._targetCamera;
            if ((pCVar2 == (Camera *)0x0) ||
               (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar2,(MethodInfo *)0x0), obj == (Transform *)0x0))
            goto code_?;
            uStack_4._0_4_ = (this->fields)._camRestorePosition.x;
            uStack_4._4_4_ = (this->fields)._camRestorePosition.y;
            fStack_5 = (this->fields)._camRestorePosition.z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (obj->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar7 = func_?(&UNK_?);
              FUN_?(uVar7,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar6,&uStack_4);
          }
          pMVar1 = (this->fields)._targetMono;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          routine = (IEnumerator *)
                    FUN_?(TypeInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41);
          iVar8 = iRam_?;
          *(undefined4 *)&routine[1].klass = 0;
          routine[2].klass = (IEnumerator__Class *)this;
          if (iVar8 != 0) {
            uVar9 = (uint)((ulonglong)(routine + 2) >> 0xc);
            lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
              puVar12 = (ulonglong *)(lVar10 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
              iVar8 = iRam_?;
            } while (!bVar13);
          }
          (this->fields)._transitionCrtn = routine;
          if (iVar8 != 0) {
            uVar9 = (uint)((ulonglong)&(this->fields)._transitionCrtn >> 0xc);
            lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
              puVar12 = (ulonglong *)(lVar10 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          if (pMVar1 == (MonoBehaviour *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                    (pMVar1,routine,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


/* IEnumerator DoTransition() */

IEnumerator *
Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::CameraPrjSwitchTransition_DoTransition
          (CameraPrjSwitchTransition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41);
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


/* CameraPrjSwitchTransition() */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::CameraPrjSwitchTransition__ctor
               (CameraPrjSwitchTransition *this,MethodInfo *method)

{
  (this->fields)._camFieldOfView = 60.0;
  (this->fields)._durationInSeconds = 0.23;
  return;
}


/* Void add_TransitionBegin(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_add_TransitionBegin
               (CameraPrjSwitchTransition *this,CameraProjectionSwitchBeginHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = &this->fields;
  a = (this->fields).TransitionBegin;
  do {
    pCVar2 = (CameraProjectionSwitchBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraProjectionSwitchBeginHandler *)0x0;
    if (pCVar2 != (CameraProjectionSwitchBeginHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraProjectionSwitchBeginHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = pCVar1->TransitionBegin;
    bVar5 = a == pCVar2;
    if (bVar5) {
      pCVar1->TransitionBegin = pCVar3;
      pCVar2 = a;
    }
    UNLOCK();
    pCVar3 = a;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)pCVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pCVar3 != a;
    a = pCVar3;
  } while (bVar5);
  return;
}


/* Void add_TransitionEnd(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_add_TransitionEnd
               (CameraPrjSwitchTransition *this,CameraProjectionSwitchBeginHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).TransitionEnd;
  a = (this->fields).TransitionEnd;
  do {
    pCVar2 = (CameraProjectionSwitchBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraProjectionSwitchBeginHandler *)0x0;
    if (pCVar2 != (CameraProjectionSwitchBeginHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraProjectionSwitchBeginHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = a == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = a;
    }
    UNLOCK();
    pCVar3 = a;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pCVar3 != a;
    a = pCVar3;
  } while (bVar5);
  return;
}


/* Void add_TransitionUpdate(CameraProjectionSwitchUpdateHandler) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_add_TransitionUpdate
               (CameraPrjSwitchTransition *this,CameraProjectionSwitchUpdateHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).TransitionUpdate;
  a = (this->fields).TransitionUpdate;
  do {
    pCVar2 = (CameraProjectionSwitchUpdateHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraProjectionSwitchUpdateHandler *)0x0;
    if (pCVar2 != (CameraProjectionSwitchUpdateHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraProjectionSwitchUpdateHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraProjectionSwitchUpdateHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = a == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = a;
    }
    UNLOCK();
    pCVar3 = a;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pCVar3 != a;
    a = pCVar3;
  } while (bVar5);
  return;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::CameraPrjSwitchTransition_get_IsActive
               (CameraPrjSwitchTransition *this,MethodInfo *method)

{
  return (this->fields)._transitionType != 0;
}


/* Void remove_TransitionBegin(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_remove_TransitionBegin
               (CameraPrjSwitchTransition *this,CameraProjectionSwitchBeginHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = &this->fields;
  source = (this->fields).TransitionBegin;
  do {
    pCVar2 = (CameraProjectionSwitchBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraProjectionSwitchBeginHandler *)0x0;
    if (pCVar2 != (CameraProjectionSwitchBeginHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraProjectionSwitchBeginHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = pCVar1->TransitionBegin;
    bVar5 = source == pCVar2;
    if (bVar5) {
      pCVar1->TransitionBegin = pCVar3;
      pCVar2 = source;
    }
    UNLOCK();
    pCVar3 = source;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)pCVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pCVar3 != source;
    source = pCVar3;
  } while (bVar5);
  return;
}


/* Void remove_TransitionEnd(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_remove_TransitionEnd
               (CameraPrjSwitchTransition *this,CameraProjectionSwitchBeginHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).TransitionEnd;
  source = (this->fields).TransitionEnd;
  do {
    pCVar2 = (CameraProjectionSwitchBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraProjectionSwitchBeginHandler *)0x0;
    if (pCVar2 != (CameraProjectionSwitchBeginHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraProjectionSwitchBeginHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = source == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = source;
    }
    UNLOCK();
    pCVar3 = source;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pCVar3 != source;
    source = pCVar3;
  } while (bVar5);
  return;
}


/* Void remove_TransitionUpdate(CameraProjectionSwitchUpdateHandler) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_remove_TransitionUpdate
               (CameraPrjSwitchTransition *this,CameraProjectionSwitchUpdateHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).TransitionUpdate;
  source = (this->fields).TransitionUpdate;
  do {
    pCVar2 = (CameraProjectionSwitchUpdateHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraProjectionSwitchUpdateHandler *)0x0;
    if (pCVar2 != (CameraProjectionSwitchUpdateHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraProjectionSwitchUpdateHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraProjectionSwitchUpdateHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = source == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = source;
    }
    UNLOCK();
    pCVar3 = source;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pCVar3 != source;
    source = pCVar3;
  } while (bVar5);
  return;
}


/* Void set_CamFieldOfView(Single) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_set_CamFieldOfView
               (CameraPrjSwitchTransition *this,float value,MethodInfo *method)

{
  if ((this->fields)._transitionType == 0) {
    (this->fields)._camFieldOfView = (float)((uint)value & _UNK_?);
  }
  return;
}


/* Void set_CamFocusPoint(Vector3) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_set_CamFocusPoint
               (CameraPrjSwitchTransition *this,Vector3 *value,MethodInfo *method)

{
  if ((this->fields)._transitionType == 0) {
    fVar1 = value->y;
    fVar2 = value->z;
    (this->fields)._camFocusPoint.x = value->x;
    (this->fields)._camFocusPoint.y = fVar1;
    (this->fields)._camFocusPoint.z = fVar2;
  }
  return;
}


/* Void set_DurationInSeconds(Single) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_set_DurationInSeconds
               (CameraPrjSwitchTransition *this,float value,MethodInfo *method)

{
  if ((this->fields)._transitionType == 0) {
    fVar1 = _UNK_?;
    if (_UNK_? <= (float)((uint)value & _UNK_?)) {
      fVar1 = (float)((uint)value & _UNK_?);
    }
    (this->fields)._durationInSeconds = fVar1;
  }
  return;
}


/* Void set_TargetCamera(Camera) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::CameraPrjSwitchTransition_set_TargetCamera
               (CameraPrjSwitchTransition *this,Camera *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._transitionType == 0) {
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
    if (value != (Camera *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (((value->fields)._._._.m_CachedPtr != (void *)0x0) &&
         (bVar1 = iRam_? != 0, (this->fields)._targetCamera = value, bVar1)) {
        uVar2 = (uint)((ulonglong)&(this->fields)._targetCamera >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
  }
  return;
}


/* Void set_TargetMono(MonoBehaviour) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::CameraPrjSwitchTransition_set_TargetMono
               (CameraPrjSwitchTransition *this,MonoBehaviour *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._transitionType == 0) {
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
    if (value != (MonoBehaviour *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (((value->fields)._._._.m_CachedPtr != (void *)0x0) &&
         (bVar1 = iRam_? != 0, (this->fields)._targetMono = value, bVar1)) {
        uVar2 = (uint)((ulonglong)&(this->fields)._targetMono >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
  }
  return;
}

