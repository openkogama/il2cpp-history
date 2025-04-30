
/* Boolean CreateDeltaCapture(Vector3, Int32 ByRef) */

bool Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_CreateDeltaCapture
               (InputDeviceBase *this,Vector3 deltaOrigin,int32_t *deltaCaptureId,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__InputDeviceDeltaCapture);
    cRam_? = '\x01';
  }
  *deltaCaptureId = 0;
  if (0 < (this->fields)._maxNumDeltaCaptures) {
    do {
      pIVar1 = (this->fields)._deltaCaptures;
      if (pIVar1 == (InputDeviceDeltaCapture__Array *)0x0) goto code_?;
      uVar2 = *deltaCaptureId;
      if (pIVar1->max_length <= uVar2) goto code_?;
    } while ((pIVar1->vector[uVar2] != (InputDeviceDeltaCapture *)0x0) &&
            (*deltaCaptureId = uVar2 + 1, (int)(uVar2 + 1) < (this->fields)._maxNumDeltaCaptures));
  }
  iVar3 = *deltaCaptureId;
  if (iVar3 == (this->fields)._maxNumDeltaCaptures) {
    *deltaCaptureId = -1;
    return 0;
  }
  method_00 = (MethodInfo *)&UNK_?;
  value = (InputDeviceDeltaCapture *)func_?(TypeInfo__RTG__InputDeviceDeltaCapture);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  (value->fields)._id = iVar3;
  (value->fields)._origin.x = deltaOrigin.x;
  (value->fields)._origin.y = deltaOrigin.y;
  (value->fields)._origin.z = deltaOrigin.z;
  pIVar1 = (this->fields)._deltaCaptures;
  uVar2 = *deltaCaptureId;
  if (pIVar1 != (InputDeviceDeltaCapture__Array *)0x0) {
    iVar3 = func_?(value,(pIVar1->klass->_0).element_class);
    if (iVar3 == 0) {
      uVar4 = func_?(0);
      func_?(uVar4);
    }
    else if (uVar2 < pIVar1->max_length) {
      pIVar1->vector[uVar2] = value;
      func_?(pIVar1->vector + uVar2,value);
      return 1;
    }
code_?:
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void DetectAndHandleDoubleTap() */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_DetectAndHandleDoubleTap
               (InputDeviceBase *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).__unknown_6.method)
                    (this,0,(this->klass->vtable).__unknown_7.methodPtr);
  if (cVar1 != '\0') {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((this->fields)._doubleTapDelay <= fVar2 - (this->fields)._lastTapTime) {
      (this->fields)._didDoubleTap = 0;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields)._lastTapTime = fVar2;
      return;
    }
    pIVar3 = (this->fields).DoubleTap;
    (this->fields)._lastTapTime = 0.0;
    (this->fields)._didDoubleTap = 1;
    if (pIVar3 != (InputDeviceDoubleTapHandler *)0x0) {
      puVar4 = (undefined8 *)
               (*(code *)(this->klass->vtable).__unknown_3.method)
                         (auStack_5,this,(this->klass->vtable).__unknown_4.methodPtr);
      uStack_6 = (undefined4)*puVar4;
      uStack_7 = uStack_6;
      uStack_8 = (undefined4)((ulonglong)*puVar4 >> 0x20);
      uStack_9 = uStack_8;
      (*(pIVar3->fields)._._.invoke_impl)
                ((pIVar3->fields)._._.method_code,this,uStack_6,uStack_8,
                 (pIVar3->fields)._._.method);
    }
  }
  return;
}


/* Vector3 GetCaptureDelta(Int32) */

Vector3 * Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_GetCaptureDelta
                    (Vector3 *__return_storage_ptr__,InputDeviceBase *this,int32_t deltaCaptureId,
                    MethodInfo *method)

{
  ppVStack_1 = (Vector3__Class **)&stack0xfffffffc;
  if ((-1 < deltaCaptureId) && (deltaCaptureId < (this->fields)._maxNumDeltaCaptures)) {
    pIVar2 = (this->fields)._deltaCaptures;
    if (pIVar2 == (InputDeviceDeltaCapture__Array *)0x0) {
code_?:
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar5)();
      return pVVar6;
    }
    if ((uint)deltaCaptureId < pIVar2->max_length) {
      if (pIVar2->vector[deltaCaptureId] == (InputDeviceDeltaCapture *)0x0) goto code_?;
      if ((uint)deltaCaptureId < pIVar2->max_length) {
        pIVar7 = pIVar2->vector[deltaCaptureId];
        if (pIVar7 != (InputDeviceDeltaCapture *)0x0) {
          fVar8 = (pIVar7->fields)._delta.y;
          fVar9 = (pIVar7->fields)._delta.z;
          __return_storage_ptr__->x = (pIVar7->fields)._delta.x;
          __return_storage_ptr__->y = fVar8;
          __return_storage_ptr__->z = fVar9;
          return __return_storage_ptr__;
        }
        goto code_?;
      }
    }
    ppVStack_1 = (Vector3__Class **)0x0;
    puStack_10 = (undefined *)func_?();
    func_?();
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
code_?:
  if (cRam_? == '\0') {
    ppVStack_1 = &TypeInfo__UnityEngine__Vector3;
    func_?();
    cRam_? = '\x01';
  }
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = (pVVar11->zeroVector).y;
  fVar9 = (pVVar11->zeroVector).z;
  __return_storage_ptr__->x = (pVVar11->zeroVector).x;
  __return_storage_ptr__->y = fVar8;
  __return_storage_ptr__->z = fVar9;
  return __return_storage_ptr__;
}


/* Void RemoveDeltaCapture(Int32) */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_RemoveDeltaCapture
               (InputDeviceBase *this,int32_t deltaCaptureId,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((-1 < deltaCaptureId) && (deltaCaptureId < (this->fields)._maxNumDeltaCaptures)) {
    pIVar2 = (this->fields)._deltaCaptures;
    if (pIVar2 == (InputDeviceDeltaCapture__Array *)0x0) {
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (pIVar2->max_length <= (uint)deltaCaptureId) {
      puStack_1 = (undefined1 *)0x0;
      ppIStack_6 = (InputDeviceDeltaCapture **)func_?();
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ppIStack_6 = pIVar2->vector + deltaCaptureId;
    *ppIStack_6 = (InputDeviceDeltaCapture *)0x0;
    puStack_1 = (undefined1 *)0x0;
    func_?();
  }
  return;
}


/* Void SetMaxNumDeltaCaptures(Int32) */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_SetMaxNumDeltaCaptures
               (InputDeviceBase *this,int32_t maxNumDeltaCaptures,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__InputDeviceDeltaCapture);
    cRam_? = '\x01';
  }
  iVar1 = 1;
  if (0 < maxNumDeltaCaptures) {
    iVar1 = maxNumDeltaCaptures;
  }
  (this->fields)._maxNumDeltaCaptures = iVar1;
  pIVar2 = (InputDeviceDeltaCapture__Array *)
           func_?(TypeInfo__RTG__InputDeviceDeltaCapture,iVar1);
  ppIVar3 = &(this->fields)._deltaCaptures;
  *ppIVar3 = pIVar2;
  func_?(ppIVar3,pIVar2);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_Update
               (InputDeviceBase *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).__unknown_9.method)(this,this->klass[1]._0.image);
  uVar1 = 0;
  puVar2 = (undefined8 *)
            (*(code *)(this->klass->vtable).__unknown_3.method)
                      (&uStack_3,this,(this->klass->vtable).__unknown_4.methodPtr);
  uVar4 = *puVar2;
  fVar5 = *(float *)(puVar2 + 1);
  uStack_6 = uVar4;
  fStack_7 = fVar5;
  if (0 < (this->fields)._maxNumDeltaCaptures) {
    iVar8 = 0x10;
    uStack_6._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    fVar9 = uStack_6._4_4_;
    uStack_6._0_4_ = (float)uVar4;
    fVar10 = (float)uStack_6;
    do {
      pIVar11 = (this->fields)._deltaCaptures;
      if (pIVar11 == (InputDeviceDeltaCapture__Array *)0x0) {
code_?:
        func_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (pIVar11->max_length <= uVar1) {
        func_?();
        goto code_?;
      }
      if (*(int *)((int)pIVar11->vector + iVar8 + -0x10) == 0) break;
      pIVar13 = pIVar11->vector[uVar1];
      iVar8 = iVar8 + 4;
      uVar1 = uVar1 + 1;
      if (pIVar13 == (InputDeviceDeltaCapture *)0x0) goto code_?;
      uStack_6._0_4_ = (pIVar13->fields)._origin.x;
      uStack_6._4_4_ = (pIVar13->fields)._origin.y;
      fStack_7 = (pIVar13->fields)._origin.z;
      fStack_14 = fVar5 - fStack_7;
      (pIVar13->fields)._delta.x = fVar10 - (float)uStack_6;
      (pIVar13->fields)._delta.y = fVar9 - uStack_6._4_4_;
      (pIVar13->fields)._delta.z = fStack_14;
    } while ((int)uVar1 < (this->fields)._maxNumDeltaCaptures);
  }
  cVar15 = (*(code *)(this->klass->vtable).__unknown_6.method)
                     (this,0,(this->klass->vtable).__unknown_7.methodPtr);
  if (cVar15 != '\0') {
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((this->fields)._doubleTapDelay <= fVar5 - (this->fields)._lastTapTime) {
      (this->fields)._didDoubleTap = 0;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields)._lastTapTime = fVar5;
      return;
    }
    pIVar16 = (this->fields).DoubleTap;
    (this->fields)._lastTapTime = 0.0;
    (this->fields)._didDoubleTap = 1;
    if (pIVar16 != (InputDeviceDoubleTapHandler *)0x0) {
      puVar2 = (undefined8 *)
                (*(code *)(this->klass->vtable).__unknown_3.method)
                          (&uStack_6,this,(this->klass->vtable).__unknown_4.methodPtr);
      uVar4 = *puVar2;
      uStack_3._0_4_ = (undefined4)uVar4;
      uStack_6 = CONCAT44((undefined4)uStack_3,(float)uStack_6);
      uStack_3._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uVar17 = uStack_3._4_4_;
      fStack_7 = (float)uStack_3._4_4_;
      uVar18 = (undefined4)uStack_3;
      uStack_3 = uVar4;
      (*(pIVar16->fields)._._.invoke_impl)
                ((pIVar16->fields)._._.method_code,this,uVar18,uVar17,(pIVar16->fields)._._.method);
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
           (*(code *)(this->klass->vtable).__unknown_3.method)
                     (auStack_3,this,(this->klass->vtable).__unknown_4.methodPtr);
  uVar4 = *puVar2;
  fVar5 = *(float *)(puVar2 + 1);
  if (0 < (this->fields)._maxNumDeltaCaptures) {
    iVar6 = 0x10;
    uStack_7._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    fVar8 = uStack_7._4_4_;
    uStack_7._0_4_ = (float)uVar4;
    fVar9 = (float)uStack_7;
    uStack_7 = uVar4;
    fStack_10 = fVar5;
    do {
      pIVar11 = (this->fields)._deltaCaptures;
      if (pIVar11 == (InputDeviceDeltaCapture__Array *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (pIVar11->max_length <= uVar1) goto code_?;
      if (*(int *)((int)pIVar11->vector + iVar6 + -0x10) == 0) {
        return;
      }
      pIVar13 = pIVar11->vector[uVar1];
      iVar6 = iVar6 + 4;
      uVar1 = uVar1 + 1;
      if (pIVar13 == (InputDeviceDeltaCapture *)0x0) goto code_?;
      uStack_7._0_4_ = (pIVar13->fields)._origin.x;
      uStack_7._4_4_ = (pIVar13->fields)._origin.y;
      fStack_10 = (pIVar13->fields)._origin.z;
      fStack_14 = fVar5 - fStack_10;
      (pIVar13->fields)._delta.x = fVar9 - (float)uStack_7;
      (pIVar13->fields)._delta.y = fVar8 - uStack_7._4_4_;
      (pIVar13->fields)._delta.z = fStack_14;
    } while ((int)uVar1 < (this->fields)._maxNumDeltaCaptures);
  }
  return;
}


/* InputDeviceBase() */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase__ctor
               (InputDeviceBase *this,MethodInfo *method)

{
  (this->fields)._doubleTapDelay = 0.5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__InputDeviceDeltaCapture);
    cRam_? = '\x01';
  }
  (this->fields)._maxNumDeltaCaptures = 0x32;
  pIVar1 = (InputDeviceDeltaCapture__Array *)
           func_?(TypeInfo__RTG__InputDeviceDeltaCapture,0x32);
  (this->fields)._deltaCaptures = pIVar1;
  func_?();
  return;
}


/* Void add_DoubleTap(InputDeviceDoubleTapHandler) */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_add_DoubleTap
               (InputDeviceBase *this,InputDeviceDoubleTapHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__InputDeviceDoubleTapHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).DoubleTap;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((InputDeviceDoubleTapHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__InputDeviceDoubleTapHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__InputDeviceDoubleTapHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pIVar4 = (InputDeviceDoubleTapHandler *)func_?(&this->fields,pDVar2,a);
    bVar5 = pIVar4 == a;
    a = pIVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_DoubleTap(InputDeviceDoubleTapHandler) */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_remove_DoubleTap
               (InputDeviceBase *this,InputDeviceDoubleTapHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__InputDeviceDoubleTapHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).DoubleTap;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((InputDeviceDoubleTapHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__InputDeviceDoubleTapHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__InputDeviceDoubleTapHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pIVar4 = (InputDeviceDoubleTapHandler *)func_?(&this->fields,pDVar2,source);
    bVar5 = pIVar4 == source;
    source = pIVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void set_DoubleTapDelay(Single) */

void Assembly-CSharp.dll::RTG::InputDeviceBase::InputDeviceBase_set_DoubleTapDelay
               (InputDeviceBase *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._doubleTapDelay = value;
  return;
}

