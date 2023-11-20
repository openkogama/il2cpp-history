
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<AnimationCoroutine>d__55::
     MVDoor_AnimationCoroutine_d_55_MoveNext
               (MVDoor_AnimationCoroutine_d_55 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (MVDoor *)0x0) goto code_?;
    MVDoor::MVDoor_ToggleDoorColliders(this_00,0,(MethodInfo *)0x0);
    pMStack_2 = (this_00->fields).doorObject;
    DStack_3 = (this_00->fields).doorConfig.doorType;
    if (pMStack_2 == (MVDoorObject *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    }
    bVar4 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_IsSliding
                      (DStack_3,(MethodInfo *)0x0);
    DStack_3 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_GetDoorAxis
                         (DStack_3,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      pMVar5 = (pMStack_2->fields).doorLogic;
      if ((pMVar5 == (MVDoor *)0x0) ||
         (fVar6 = (pMVar5->fields).doorConfig.openValue, pMVar5 == (MVDoor *)0x0))
      goto code_?;
      fVar7 = (pMVar5->fields).doorConfig.closeValue;
      pTVar8 = (pMStack_2->fields).animationRoot;
      if (pTVar8 == (Transform *)0x0) goto code_?;
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)auStack_10,pTVar8,(MethodInfo *)0x0);
      fStack_11 = pQVar9->x;
      VStack_12.x = pQVar9->y;
      VStack_12.y = pQVar9->z;
      VStack_12.z = pQVar9->w;
      puVar13 = (undefined8 *)func_?(auStack_10 + 4,&fStack_11,0);
      VStack_12._0_8_ = *puVar13;
      VStack_12.z = *(float *)(puVar13 + 1);
      fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (&VStack_12,DStack_3,(MethodInfo *)0x0);
      if (((float)((uint)fVar6 & _UNK_?) + _UNK_? < fVar14) &&
         ((float)((uint)fVar7 & _UNK_?) + _UNK_? < fVar14)) {
        fVar14 = fVar14 - _UNK_?;
      }
    }
    else {
      pTVar8 = (pMStack_2->fields).animationRoot;
      if (pTVar8 == (Transform *)0x0) goto code_?;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                          ((Vector3 *)(auStack_10 + 4),pTVar8,(MethodInfo *)0x0);
      VStack_12.x = pVVar15->x;
      VStack_12.y = pVVar15->y;
      VStack_12.z = pVVar15->z;
      fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (&VStack_12,DStack_3,(MethodInfo *)0x0);
    }
    fVar6 = (this->fields).from;
    fVar7 = (this->fields).to;
    (this->fields)._currentValue_5__2 = fVar14;
    if ((fVar6 == fVar7) || (fVar14 = (fVar14 - fVar6) / (fVar7 - fVar6), fVar14 < 0.0)) {
      fVar14 = 0.0;
    }
    else if (_UNK_? < fVar14) {
      (this->fields)._t_5__3 = _UNK_?;
      goto code_?;
    }
    (this->fields)._t_5__3 = fVar14;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
code_?:
  if ((this->fields)._currentValue_5__2 == (this->fields).to) {
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
    if (this_00 != (MVDoor *)0x0) {
      if (bVar4 == 0) {
        MVDoor::MVDoor_ToggleDoorColliders(this_00,1,(MethodInfo *)0x0);
      }
      else {
        MVDoor::MVDoor_CollisionCheck(this_00,(MethodInfo *)0x0);
      }
      (this_00->fields).doorAnimationRoutine = (IEnumerator *)0x0;
      func_?(&(this_00->fields).doorAnimationRoutine,0);
      return 0;
    }
  }
  else {
    pMStack_2 = (MVDoorObject *)(this->fields)._t_5__3;
    fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 != (MVDoor *)0x0) {
      fVar14 = fVar14 / (this_00->fields).doorConfig.toggleTime + (float)pMStack_2;
      (this->fields)._t_5__3 = fVar14;
      if (fVar14 < 0.0) {
        fVar14 = 0.0;
      }
      else if (_UNK_? < fVar14) {
        fVar14 = _UNK_?;
      }
      fVar14 = fVar14 * _UNK_? * fVar14 * fVar14 + fVar14 * _UNK_? * fVar14;
      fVar14 = (_UNK_? - fVar14) * (this->fields).from + fVar14 * (this->fields).to;
      (this->fields)._currentValue_5__2 = fVar14;
      this_01 = (this_00->fields).doorObject;
      if (this_01 != (MVDoorObject *)0x0) {
        MVDoorObject::MVDoorObject_SetCurrentValue
                  (this_01,fVar14,(this_00->fields).doorConfig.doorType,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)0x0;
        func_?(&(this->fields).__2__current,0);
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  bVar4 = (*pcVar16)();
  return bVar4;
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
  func_?(&
                  MethodInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

