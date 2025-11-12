
/* Boolean CreateDeltaCapture(Vector3, Int32 ByRef) */

bool Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_CreateDeltaCapture
               (InputDeviceBase *this,Vector3 *deltaOrigin,int32_t *deltaCaptureId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__InputDeviceDeltaCapture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *deltaCaptureId = 0;
  if (0 < (this->fields)._maxNumDeltaCaptures) {
    do {
      pIVar1 = (this->fields)._deltaCaptures;
      if (pIVar1 == (InputDeviceDeltaCapture__Array *)0x0) goto code_?;
      if ((uint)pIVar1->max_length <= (uint)*deltaCaptureId) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
    } while ((pIVar1->vector[*deltaCaptureId] != (InputDeviceDeltaCapture *)0x0) &&
            (*deltaCaptureId = *deltaCaptureId + 1,
            *deltaCaptureId < (this->fields)._maxNumDeltaCaptures));
  }
  if (*deltaCaptureId == (this->fields)._maxNumDeltaCaptures) {
    *deltaCaptureId = -1;
    bVar3 = 0;
  }
  else {
    iVar4 = *deltaCaptureId;
    lVar5 = FUN_?(TypeInfo__RTG__InputDeviceDeltaCapture);
    fVar6 = deltaOrigin->z;
    *(undefined8 *)(lVar5 + 0x14) = *(undefined8 *)deltaOrigin;
    *(float *)(lVar5 + 0x1c) = fVar6;
    *(int32_t *)(lVar5 + 0x10) = iVar4;
    pIVar1 = (this->fields)._deltaCaptures;
    iVar7 = *deltaCaptureId;
    if (pIVar1 == (InputDeviceDeltaCapture__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    lVar8 = FUN_?(lVar5,(pIVar1->klass->_0).element_class);
    if (lVar8 == 0) {
      uVar9 = FUN_?();
      FUN_?(uVar9,0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    FUN_?(pIVar1,(longlong)iVar7,lVar5);
    bVar3 = 1;
  }
  return bVar3;
}


/* Void DetectAndHandleDoubleTap() */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_DetectAndHandleDoubleTap
               (InputDeviceBase *this,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).__unknown_6.methodPtr)
                    (this,0,(this->klass->vtable).__unknown_6.method);
  if (cVar1 != '\0') {
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
    fVar4 = (float)(*pcRam_?)();
    pcVar2 = pcRam_?;
    if ((this->fields)._doubleTapDelay <= fVar4 - (this->fields)._lastTapTime) {
      (this->fields)._didDoubleTap = 0;
      pcVar5 = pcRam_?;
      if ((pcVar2 == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar5 = pcVar2, pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar5;
      fVar4 = (float)(*pcVar2)();
      (this->fields)._lastTapTime = fVar4;
      return;
    }
    (this->fields)._lastTapTime = 0.0;
    (this->fields)._didDoubleTap = 1;
    if ((this->fields).DoubleTap != (InputDeviceDoubleTapHandler *)0x0) {
      pIVar6 = (this->fields).DoubleTap;
      puVar7 = (undefined8 *)
               (*(this->klass->vtable).__unknown_3.methodPtr)
                         (auStack_8,this,(this->klass->vtable).__unknown_3.method);
      (*(pIVar6->fields)._._.invoke_impl)
                ((pIVar6->fields)._._.method_code,this,*puVar7,(pIVar6->fields)._._.method);
    }
  }
  return;
}


/* Vector3 GetCaptureDelta(Int32) */

Vector3 * Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_GetCaptureDelta
                    (Vector3 *__return_storage_ptr__,InputDeviceBase *this,int32_t deltaCaptureId,
                    MethodInfo *method)

{
  if ((-1 < deltaCaptureId) && (deltaCaptureId < (this->fields)._maxNumDeltaCaptures)) {
    pIVar1 = (this->fields)._deltaCaptures;
    if (pIVar1 != (InputDeviceDeltaCapture__Array *)0x0) {
      if ((uint)pIVar1->max_length <= (uint)deltaCaptureId) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar2)();
        return pVVar3;
      }
      if (pIVar1->vector[deltaCaptureId] == (InputDeviceDeltaCapture *)0x0)
      goto code_?;
      if (pIVar1 != (InputDeviceDeltaCapture__Array *)0x0) {
        if ((uint)pIVar1->max_length <= (uint)deltaCaptureId) goto code_?;
        pIVar4 = pIVar1->vector[deltaCaptureId];
        if (pIVar4 != (InputDeviceDeltaCapture *)0x0) {
          fVar5 = (pIVar4->fields)._delta.y;
          fVar6 = (pIVar4->fields)._delta.z;
          __return_storage_ptr__->x = (pIVar4->fields)._delta.x;
          __return_storage_ptr__->y = fVar5;
          __return_storage_ptr__->z = fVar6;
          return __return_storage_ptr__;
        }
      }
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
code_?:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar7->zeroVector).y;
  fVar6 = (pVVar7->zeroVector).z;
  __return_storage_ptr__->x = (pVVar7->zeroVector).x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Void RemoveDeltaCapture(Int32) */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_RemoveDeltaCapture
               (InputDeviceBase *this,int32_t deltaCaptureId,MethodInfo *method)

{
  if ((deltaCaptureId < 0) || ((this->fields)._maxNumDeltaCaptures <= deltaCaptureId)) {
    return;
  }
  pIVar1 = (this->fields)._deltaCaptures;
  if (pIVar1 == (InputDeviceDeltaCapture__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((uint)pIVar1->max_length <= (uint)deltaCaptureId) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  pIVar1->vector[deltaCaptureId] = (InputDeviceDeltaCapture *)0x0;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(pIVar1->vector + deltaCaptureId) >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void SetMaxNumDeltaCaptures(Int32) */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_SetMaxNumDeltaCaptures
               (InputDeviceBase *this,int32_t maxNumDeltaCaptures,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__InputDeviceDeltaCapture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 1;
  if (0 < maxNumDeltaCaptures) {
    iVar1 = maxNumDeltaCaptures;
  }
  (this->fields)._maxNumDeltaCaptures = iVar1;
  pIVar2 = (InputDeviceDeltaCapture__Array *)FUN_?(TypeInfo__RTG__InputDeviceDeltaCapture);
  bVar3 = iRam_? != 0;
  (this->fields)._deltaCaptures = pIVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._deltaCaptures >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_Update
               (InputDeviceBase *this,MethodInfo *method)

{
  (*(this->klass->vtable).__unknown_9.methodPtr)(this,(this->klass->vtable).__unknown_9.method);
  uVar1 = 0;
  puVar2 = (undefined8 *)(*(this->klass->vtable).__unknown_3.methodPtr)(auStack_3,this);
  fVar4 = *(float *)(puVar2 + 1);
  if (0 < (this->fields)._maxNumDeltaCaptures) {
    lVar5 = 0;
    fStack_6 = (float)((ulonglong)*puVar2 >> 0x20);
    lVar7 = 0x20;
    fStack_8 = (float)*puVar2;
    do {
      pIVar9 = (this->fields)._deltaCaptures;
      if (pIVar9 == (InputDeviceDeltaCapture__Array *)0x0) {
code_?:
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((uint)pIVar9->max_length <= uVar1) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (*(longlong *)((longlong)pIVar9->vector + lVar7 + -0x20) == 0) break;
      pIVar11 = pIVar9->vector[lVar5];
      uVar1 = uVar1 + 1;
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 8;
      if (pIVar11 == (InputDeviceDeltaCapture *)0x0) goto code_?;
      auStack_3[0]._0_4_ = (pIVar11->fields)._origin.x;
      auStack_3[0]._4_4_ = (pIVar11->fields)._origin.y;
      fVar12 = (pIVar11->fields)._origin.z;
      (pIVar11->fields)._delta.x = fStack_8 - (float)(undefined4)auStack_3[0];
      (pIVar11->fields)._delta.y = fStack_6 - (float)auStack_3[0]._4_4_;
      (pIVar11->fields)._delta.z = fVar4 - fVar12;
    } while ((int)uVar1 < (this->fields)._maxNumDeltaCaptures);
  }
  cVar13 = (*(this->klass->vtable).__unknown_6.methodPtr)
                    (this,0,(this->klass->vtable).__unknown_6.method);
  if (cVar13 != '\0') {
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    fVar4 = (float)(*pcRam_?)();
    pcVar10 = pcRam_?;
    if (fVar4 - (this->fields)._lastTapTime < (this->fields)._doubleTapDelay) {
      (this->fields)._lastTapTime = 0.0;
      (this->fields)._didDoubleTap = 1;
      if ((this->fields).DoubleTap != (InputDeviceDoubleTapHandler *)0x0) {
        pIVar15 = (this->fields).DoubleTap;
        puVar2 = (undefined8 *)
                 (*(this->klass->vtable).__unknown_3.methodPtr)
                           (auStack_3,this,(this->klass->vtable).__unknown_3.method);
        (*(pIVar15->fields)._._.invoke_impl)
                  ((pIVar15->fields)._._.method_code,this,*puVar2,(pIVar15->fields)._._.method);
      }
    }
    else {
      (this->fields)._didDoubleTap = 0;
      pcVar16 = pcRam_?;
      if ((pcVar10 == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar16 = pcVar10, pcVar10 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar16;
      fVar4 = (float)(*pcVar10)();
      (this->fields)._lastTapTime = fVar4;
    }
  }
  return;
}


/* Void UpdateDeltaCaptures() */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_UpdateDeltaCaptures
               (InputDeviceBase *this,MethodInfo *method)

{
  uVar1 = 0;
  puVar2 = (undefined8 *)
           (*(this->klass->vtable).__unknown_3.methodPtr)
                     (auStack_3,this,(this->klass->vtable).__unknown_3.method);
  fVar4 = *(float *)(puVar2 + 1);
  if (0 < (this->fields)._maxNumDeltaCaptures) {
    lVar5 = 0;
    lVar6 = 0x20;
    fStack_7 = (float)((ulonglong)*puVar2 >> 0x20);
    fStack_8 = (float)*puVar2;
    do {
      pIVar9 = (this->fields)._deltaCaptures;
      if (pIVar9 == (InputDeviceDeltaCapture__Array *)0x0) {
DAT_?:
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((uint)pIVar9->max_length <= uVar1) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (*(longlong *)((longlong)pIVar9->vector + lVar6 + -0x20) == 0) {
        return;
      }
      pIVar11 = pIVar9->vector[lVar5];
      uVar1 = uVar1 + 1;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 8;
      if (pIVar11 == (InputDeviceDeltaCapture *)0x0) goto DAT_?;
      uVar12 = (pIVar11->fields)._origin.x;
      uVar13 = (pIVar11->fields)._origin.y;
      fVar14 = (pIVar11->fields)._origin.z;
      (pIVar11->fields)._delta.x = fStack_8 - (float)uVar12;
      (pIVar11->fields)._delta.y = fStack_7 - (float)uVar13;
      (pIVar11->fields)._delta.z = fVar4 - fVar14;
    } while ((int)uVar1 < (this->fields)._maxNumDeltaCaptures);
  }
  return;
}


/* InputDeviceBase() */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase__ctor
               (InputDeviceBase *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._doubleTapDelay = 0.5;
  if (bVar1) {
    FUN_?(&TypeInfo__RTG__InputDeviceDeltaCapture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._maxNumDeltaCaptures = 0x32;
  pIVar2 = (InputDeviceDeltaCapture__Array *)
           FUN_?(TypeInfo__RTG__InputDeviceDeltaCapture,0x32);
  bVar1 = iRam_? != 0;
  (this->fields)._deltaCaptures = pIVar2;
  if (bVar1) {
    uVar3 = (uint)((ulonglong)&(this->fields)._deltaCaptures >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar5 == *puVar6;
      if (bVar1) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void add_DoubleTap(InputDeviceDoubleTapHandler) */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_add_DoubleTap
               (InputDeviceBase *this,InputDeviceDoubleTapHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__InputDeviceDoubleTapHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = &this->fields;
  a = (this->fields).DoubleTap;
  do {
    pIVar2 = (InputDeviceDoubleTapHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pIVar3 = (InputDeviceDoubleTapHandler *)0x0;
    if (pIVar2 != (InputDeviceDoubleTapHandler *)0x0) {
      if (pIVar2->klass == TypeInfo__RTG__InputDeviceDoubleTapHandler) {
        pIVar3 = pIVar2;
      }
      if (pIVar3 == (InputDeviceDoubleTapHandler *)0x0) {
        FUN_?(pIVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pIVar2 = pIVar1->DoubleTap;
    bVar5 = a == pIVar2;
    if (bVar5) {
      pIVar1->DoubleTap = pIVar3;
      pIVar2 = a;
    }
    UNLOCK();
    pIVar3 = a;
    if (!bVar5) {
      pIVar3 = pIVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)pIVar1 >> 0xc);
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
    bVar5 = pIVar3 != a;
    a = pIVar3;
  } while (bVar5);
  return;
}


/* Void remove_DoubleTap(InputDeviceDoubleTapHandler) */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_remove_DoubleTap
               (InputDeviceBase *this,InputDeviceDoubleTapHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__InputDeviceDoubleTapHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = &this->fields;
  source = (this->fields).DoubleTap;
  do {
    pIVar2 = (InputDeviceDoubleTapHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pIVar3 = (InputDeviceDoubleTapHandler *)0x0;
    if (pIVar2 != (InputDeviceDoubleTapHandler *)0x0) {
      if (pIVar2->klass == TypeInfo__RTG__InputDeviceDoubleTapHandler) {
        pIVar3 = pIVar2;
      }
      if (pIVar3 == (InputDeviceDoubleTapHandler *)0x0) {
        FUN_?(pIVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pIVar2 = pIVar1->DoubleTap;
    bVar5 = source == pIVar2;
    if (bVar5) {
      pIVar1->DoubleTap = pIVar3;
      pIVar2 = source;
    }
    UNLOCK();
    pIVar3 = source;
    if (!bVar5) {
      pIVar3 = pIVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)pIVar1 >> 0xc);
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
    bVar5 = pIVar3 != source;
    source = pIVar3;
  } while (bVar5);
  return;
}


/* Void set_DoubleTapDelay(Single) */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_set_DoubleTapDelay
               (InputDeviceBase *this,float value,MethodInfo *method)

{
  if (value <= 0.0) {
    value = 0.0;
  }
  (this->fields)._doubleTapDelay = value;
  return;
}

