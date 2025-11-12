
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<AnimationCoroutine>d__55::
     MVDoor_AnimationCoroutine_d_55_MoveNext
               (MVDoor_AnimationCoroutine_d_55 *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (MVDoor *)0x0) goto code_?;
    MVDoor::MVDoor_ToggleDoorColliders(this_00,0,(MethodInfo *)0x0);
    pMVar3 = (this_00->fields).doorObject;
    if (pMVar3 == (MVDoorObject *)0x0) goto code_?;
    doorType = (this_00->fields).doorConfig.doorType;
    method = (MethodInfo *)(ulonglong)doorType;
    fVar4 = MVDoorObject::MVDoorObject_GetCurrentValue(pMVar3,doorType,(MethodInfo *)0x0);
    fVar5 = (this->fields).from;
    fVar6 = (this->fields).to;
    (this->fields)._currentValue_5__2 = fVar4;
    if ((fVar5 == fVar6) || (fVar5 = (fVar4 - fVar5) / (fVar6 - fVar5), fVar5 < 0.0)) {
      fVar5 = 0.0;
    }
    else if (fVar1 < fVar5) {
      (this->fields)._t_5__3 = fVar1;
      goto code_?;
    }
    (this->fields)._t_5__3 = fVar5;
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
code_?:
  if ((this->fields)._currentValue_5__2 == (this->fields).to) {
    bVar7 = MVNetworkGame::MVNetworkGame_get_IsPlaying((MVNetworkGame *)0x0,method);
    if (this_00 != (MVDoor *)0x0) {
      if (bVar7 == 0) {
        MVDoor::MVDoor_ToggleDoorColliders(this_00,1,(MethodInfo *)0x0);
      }
      else {
        if ((this_00->fields).collisionCheckRoutine != (IEnumerator *)0x0) {
          pIVar8 = (this_00->fields).collisionCheckRoutine;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__Coroutines);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar9 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
          if (pMVar9 == (MonoBehaviour *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                    (pMVar9,pIVar8,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57)
          ;
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar8 = (IEnumerator *)
                 FUN_?(
                              TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57
                              );
        iVar2 = iRam_?;
        *(undefined4 *)&pIVar8[1].klass = 0;
        pIVar8[2].klass = (IEnumerator__Class *)this_00;
        if (iVar2 != 0) {
          uVar10 = (uint)((ulonglong)(pIVar8 + 2) >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
            iVar2 = iRam_?;
          } while (!bVar14);
        }
        (this_00->fields).collisionCheckRoutine = pIVar8;
        if (iVar2 != 0) {
          uVar10 = (uint)((ulonglong)&(this_00->fields).collisionCheckRoutine >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (ulonglong)(uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        pIVar8 = (this_00->fields).collisionCheckRoutine;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Coroutines);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar9 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
        if (pMVar9 == (MonoBehaviour *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  (pMVar9,pIVar8,(MethodInfo *)0x0);
      }
      bVar14 = iRam_? != 0;
      (this_00->fields).doorAnimationRoutine = (IEnumerator *)0x0;
      if (bVar14) {
        uVar10 = (uint)((ulonglong)&(this_00->fields).doorAnimationRoutine >> 0xc);
        uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      return 0;
    }
  }
  else {
    fVar5 = (this->fields)._t_5__3;
    pcVar15 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
      pcVar15 = (code *)swi(3);
      bVar7 = (*pcVar15)();
      return bVar7;
    }
    pcRam_? = pcVar15;
    fVar6 = (float)(*pcRam_?)();
    if (this_00 != (MVDoor *)0x0) {
      fVar5 = fVar6 / (this_00->fields).doorConfig.toggleTime + fVar5;
      (this->fields)._t_5__3 = fVar5;
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      else if (fVar1 < fVar5) {
        fVar5 = fVar1;
      }
      fVar5 = fVar5 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                        ._0_4_ * fVar5 * fVar5 + fVar5 * _UNK_? * fVar5;
      fVar1 = (fVar1 - fVar5) * (this->fields).from + fVar5 * (this->fields).to;
      (this->fields)._currentValue_5__2 = fVar1;
      pMVar3 = (this_00->fields).doorObject;
      if (pMVar3 != (MVDoorObject *)0x0) {
        MVDoorObject::MVDoorObject_SetCurrentValue
                  (pMVar3,fVar1,(this_00->fields).doorConfig.doorType,(MethodInfo *)0x0);
        bVar14 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        if (bVar14) {
          uVar10 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar7 = (*pcVar15)();
  return bVar7;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<AnimationCoroutine>d__55::
     MVDoor_AnimationCoroutine_d_55_System_Collections_IEnumerator_Reset
               (MVDoor_AnimationCoroutine_d_55 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

