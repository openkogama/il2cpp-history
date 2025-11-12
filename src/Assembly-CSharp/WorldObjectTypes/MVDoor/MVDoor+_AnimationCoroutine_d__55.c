
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<AnimationCoroutine>d__55::MVDoor_AnimationCoroutine_d_55_MoveNext(MVDoor_AnimationCoroutine_d_55 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (MVDoor *)0x0) goto code_?;
    MVDoor::MVDoor_ToggleDoorColliders(this_00,0,(MethodInfo *)0x0);
    pMVar2 = (this_00->fields).doorObject;
    if (pMVar2 == (MVDoorObject *)0x0) goto code_?;
    doorType = (this_00->fields).doorConfig.doorType;
    method = (MethodInfo *)(ulonglong)doorType;
    fVar3 = MVDoorObject::MVDoorObject_GetCurrentValue(pMVar2,doorType,(MethodInfo *)0x0);
    fVar4 = (this->fields).from;
    fVar5 = (this->fields).to;
    (this->fields)._currentValue_5__2 = fVar3;
    if ((fVar4 == fVar5) || (fVar4 = (fVar3 - fVar4) / (fVar5 - fVar4), fVar4 < 0.0)) {
      fVar4 = 0.0;
    }
    else if (1.0 < fVar4) {
      (this->fields)._t_5__3 = 1.0;
      goto code_?;
    }
    (this->fields)._t_5__3 = fVar4;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
code_?:
  if ((this->fields)._currentValue_5__2 == (this->fields).to) {
    bVar6 = MVNetworkGame::MVNetworkGame_get_IsPlaying((MVNetworkGame *)0x0,method);
    if (this_00 != (MVDoor *)0x0) {
      if (bVar6 == 0) {
        MVDoor::MVDoor_ToggleDoorColliders(this_00,1,(MethodInfo *)0x0);
      }
      else {
        if ((this_00->fields).collisionCheckRoutine != (IEnumerator *)0x0) {
          pIVar7 = (this_00->fields).collisionCheckRoutine;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__Coroutines);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar8 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
          if (pMVar8 == (MonoBehaviour *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine(pMVar8,pIVar7,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar7 = (IEnumerator *)FUN_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57);
        iVar1 = iRam_?;
        *(undefined4 *)&pIVar7[1].klass = 0;
        pIVar7[2].klass = (IEnumerator__Class *)this_00;
        if (iVar1 != 0) {
          uVar9 = (uint)((ulonglong)(pIVar7 + 2) >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
            iVar1 = iRam_?;
          } while (!bVar13);
        }
        (this_00->fields).collisionCheckRoutine = pIVar7;
        if (iVar1 != 0) {
          uVar9 = (uint)((ulonglong)&(this_00->fields).collisionCheckRoutine >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (ulonglong)(uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        pIVar7 = (this_00->fields).collisionCheckRoutine;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Coroutines);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar8 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
        if (pMVar8 == (MonoBehaviour *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2(pMVar8,pIVar7,(MethodInfo *)0x0);
      }
      bVar13 = iRam_? != 0;
      (this_00->fields).doorAnimationRoutine = (IEnumerator *)0x0;
      if (bVar13) {
        uVar9 = (uint)((ulonglong)&(this_00->fields).doorAnimationRoutine >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      return 0;
    }
  }
  else {
    fVar4 = (this->fields)._t_5__3;
    pcVar14 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar14 = (code *)swi(3);
      bVar6 = (*pcVar14)();
      return bVar6;
    }
    pcRam_? = pcVar14;
    fVar5 = (float)(*pcRam_?)();
    if (this_00 != (MVDoor *)0x0) {
      fVar4 = fVar5 / (this_00->fields).doorConfig.toggleTime + fVar4;
      (this->fields)._t_5__3 = fVar4;
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      else if (1.0 < fVar4) {
        fVar4 = 1.0;
      }
      fVar4 = fVar4 * -2.0 * fVar4 * fVar4 + fVar4 * 3.0 * fVar4;
      fVar4 = (1.0 - fVar4) * (this->fields).from + fVar4 * (this->fields).to;
      (this->fields)._currentValue_5__2 = fVar4;
      pMVar2 = (this_00->fields).doorObject;
      if (pMVar2 != (MVDoorObject *)0x0) {
        MVDoorObject::MVDoorObject_SetCurrentValue(pMVar2,fVar4,(this_00->fields).doorConfig.doorType,(MethodInfo *)0x0);
        bVar13 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        if (bVar13) {
          uVar9 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  bVar6 = (*pcVar14)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<AnimationCoroutine>d__55::MVDoor_AnimationCoroutine_d_55_System_Collections_IEnumerator_Reset(MVDoor_AnimationCoroutine_d_55 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

