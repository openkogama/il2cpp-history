
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RotateOrientationWarning+<RotationAnimationCoroutine>d__8::
     RotateOrientationWarning_RotationAnimationCoroutine_d_8_MoveNext
               (RotateOrientationWarning_RotationAnimationCoroutine_d_8 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
  case 5:
    (this->fields)._rotationTime_5__2 = 0.0;
  case 1:
    (this->fields).__1__state = -1;
    if (this_00 == (RotateOrientationWarning *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    if ((this_00->fields).targetRotationTime < (this->fields)._rotationTime_5__2) {
      fVar3 = (this_00->fields).targetPauseTime;
      pOVar4 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
      *(float *)&pOVar4[1].klass = fVar3;
      (this->fields).__2__current = pOVar4;
      func_?(&(this->fields).__2__current);
      bVar2 = 1;
      (this->fields).__1__state = 2;
    }
    else {
      fVar3 = (this->fields)._rotationTime_5__2;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar5 = fVar5 + fVar3;
      method_00 = (MethodInfo *)0x0;
      (this->fields)._rotationTime_5__2 = fVar5;
      fVar3 = MathFunctions::MathFunctions_SmoothInverseLerp
                         (0.0,(this_00->fields).targetRotationTime,fVar5,(MethodInfo *)0x0);
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                         ((this_00->fields).startRotationAngle,(this_00->fields).targetRotationAngle
                          ,fVar3,method_00);
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                          (aQStack_8,0.0,0.0,fVar3,in_stack_9);
      if (pTVar6 == (Transform *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      fStack_10 = pQVar7->x;
      fStack_11 = pQVar7->y;
      fStack_12 = pQVar7->z;
      fStack_13 = pQVar7->w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar14 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar14,&fStack_10);
      (this->fields).__2__current = (Object *)0x0;
      func_?(&(this->fields).__2__current);
      bVar2 = 1;
      (this->fields).__1__state = 1;
    }
    break;
  case 2:
    (this->fields)._fadeTime_5__3 = 0.0;
  case 3:
    (this->fields).__1__state = -1;
    if (this_00 == (RotateOrientationWarning *)0x0) goto code_?;
    if ((this->fields)._fadeTime_5__3 <= (this_00->fields).targetFadeTime) {
      fVar3 = (this->fields)._fadeTime_5__3;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar5 = fVar5 + fVar3;
      (this->fields)._fadeTime_5__3 = fVar5;
      fVar5 = MathFunctions::MathFunctions_SmoothInverseLerp
                         (0.0,(this_00->fields).targetFadeTime,fVar5,(MethodInfo *)0x0);
      fVar3 = _UNK_?;
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      else if (_UNK_? < fVar5) {
        fVar5 = _UNK_?;
      }
      pIVar16 = (this_00->fields).image;
      if (pIVar16 != (Image *)0x0) {
        pfVar17 = (float *)(*(pIVar16->klass->vtable).get_color.methodPtr)
                                    (&fStack_10,pIVar16,(pIVar16->klass->vtable).get_color.method);
        pIVar18 = (this_00->fields).image;
        fVar19 = *pfVar17;
        if (pIVar18 != (Image *)0x0) {
          lVar20 = (*(pIVar18->klass->vtable).get_color.methodPtr)
                            (&fStack_10,pIVar18,(pIVar18->klass->vtable).get_color.method);
          pIVar18 = (this_00->fields).image;
          uVar21 = *(undefined4 *)(lVar20 + 4);
          if (pIVar18 != (Image *)0x0) {
            lVar20 = (*(pIVar18->klass->vtable).get_color.methodPtr)
                              (&fStack_10,pIVar18,(pIVar18->klass->vtable).get_color.method);
            fStack_12 = *(float *)(lVar20 + 8);
            fStack_13 = fVar5 * _UNK_? + fVar3;
            fStack_10 = fVar19;
            fStack_11 = (float)uVar21;
            (*(pIVar16->klass->vtable).set_color.methodPtr)
                      (pIVar16,&fStack_10,(pIVar16->klass->vtable).set_color.method);
            (this->fields).__2__current = (Object *)0x0;
            func_?(&(this->fields).__2__current);
            (this->fields).__1__state = 3;
            return 1;
          }
        }
      }
      goto code_?;
    }
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                        (aQStack_8,0.0,0.0,(this_00->fields).startRotationAngle,
                         in_stack_9);
    if (pTVar6 == (Transform *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    fStack_10 = pQVar7->x;
    fStack_11 = pQVar7->y;
    fStack_12 = pQVar7->z;
    fStack_13 = pQVar7->w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pTVar6->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar14,&fStack_10);
    (this->fields)._fadeTime_5__3 = 0.0;
code_?:
    if ((this->fields)._fadeTime_5__3 <= (this_00->fields).targetFadeTime) {
      fVar3 = (this->fields)._fadeTime_5__3;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar5 = fVar5 + fVar3;
      (this->fields)._fadeTime_5__3 = fVar5;
      fVar3 = MathFunctions::MathFunctions_SmoothInverseLerp
                         (0.0,(this_00->fields).targetFadeTime,fVar5,(MethodInfo *)0x0);
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (_UNK_? < fVar3) {
        fVar3 = _UNK_?;
      }
      pIVar16 = (this_00->fields).image;
      if (pIVar16 != (Image *)0x0) {
        pfVar17 = (float *)(*(pIVar16->klass->vtable).get_color.methodPtr)
                                    (aQStack_8,pIVar16,(pIVar16->klass->vtable).get_color.method);
        pIVar18 = (this_00->fields).image;
        fVar5 = *pfVar17;
        if (pIVar18 != (Image *)0x0) {
          lVar20 = (*(pIVar18->klass->vtable).get_color.methodPtr)
                            (aQStack_8,pIVar18,(pIVar18->klass->vtable).get_color.method);
          pIVar18 = (this_00->fields).image;
          uVar21 = *(undefined4 *)(lVar20 + 4);
          if (pIVar18 != (Image *)0x0) {
            lVar20 = (*(pIVar18->klass->vtable).get_color.methodPtr)
                              (aQStack_8,pIVar18,(pIVar18->klass->vtable).get_color.method);
            fStack_13 = fVar3 + 0.0;
            fStack_12 = *(float *)(lVar20 + 8);
            fStack_10 = fVar5;
            fStack_11 = (float)uVar21;
            (*(pIVar16->klass->vtable).set_color.methodPtr)
                      (pIVar16,&fStack_10,(pIVar16->klass->vtable).set_color.method);
            (this->fields).__2__current = (Object *)0x0;
            func_?(&(this->fields).__2__current);
            (this->fields).__1__state = 4;
            return 1;
          }
        }
      }
      goto code_?;
    }
    fVar3 = (this_00->fields).targetPauseTime;
    pOVar4 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
    *(float *)&pOVar4[1].klass = fVar3 * _UNK_?;
    (this->fields).__2__current = pOVar4;
    func_?(&(this->fields).__2__current);
    bVar2 = 1;
    (this->fields).__1__state = 5;
    break;
  case 4:
    (this->fields).__1__state = -1;
    if (this_00 == (RotateOrientationWarning *)0x0) goto code_?;
    goto code_?;
  default:
    bVar2 = 0;
  }
  return bVar2;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RotateOrientationWarning+<RotationAnimationCoroutine>d__8::
     RotateOrientationWarning_RotationAnimationCoroutine_d_8_System_Collections_IEnumerator_Reset
               (RotateOrientationWarning_RotationAnimationCoroutine_d_8 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__RotateOrientationWarning___RotationAnimationCoroutine_d__8__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

