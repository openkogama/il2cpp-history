
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::
     MVCustomGunBlueprint+<MuzzleBoundCheckRoutine>d__17::
     MVCustomGunBlueprint_MuzzleBoundCheckRoutine_d_17_MoveNext
               (MVCustomGunBlueprint_MuzzleBoundCheckRoutine_d_17 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  IStack_2.x = 0;
  IStack_2.y = 0;
  this_00 = (this->fields).__4__this;
  IStack_2.z = 0;
  iVar3 = (this->fields).__1__state;
  if (iVar3 == 0) {
    (this->fields).__1__state = -1;
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    }
    pVVar4 = CustomGunData::CustomGunData_GetEditPoints
                        ((ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *)
                         &stack0xffffffc0,(MethodInfo *)0x0);
    uVar5._0_2_ = (pVVar4->Item1).x;
    uVar5._2_2_ = (pVVar4->Item1).y;
    uVar5._4_2_ = (pVVar4->Item1).z;
    uVar6 = (pVVar4->Item2).x;
    uVar7 = (pVVar4->Item2).y;
    uVar8 = (pVVar4->Item2).z;
    IStack_1._0_4_ = SUB64(uVar5,0);
    IStack_2.y = uVar7;
    IStack_2.x = uVar6;
    IStack_1.z = uVar5._4_2_;
    IStack_2.z = uVar8;
    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__IntVector);
    }
    pVVar9 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                        ((Vector3 *)&stack0xffffffc0,&IStack_2,(MethodInfo *)0x0);
    fVar10 = pVVar9->y;
    fVar11 = pVVar9->z;
    (this->fields)._max_5__2.x = pVVar9->x;
    (this->fields)._max_5__2.y = fVar10;
    (this->fields)._max_5__2.z = fVar11;
    pVVar9 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                        ((Vector3 *)&stack0xffffffc0,&IStack_1,(MethodInfo *)0x0);
    fVar10 = pVVar9->y;
    fVar11 = pVVar9->z;
    (this->fields)._min_5__3.x = pVVar9->x;
    (this->fields)._min_5__3.y = fVar10;
    (this->fields)._min_5__3.z = fVar11;
  }
  else {
    if (iVar3 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if ((this_00 != (MVCustomGunBlueprint *)0x0) &&
     (pGVar12 = (this_00->fields).muzzlePoint, pGVar12 != (GameObject *)0x0)) {
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar12,(MethodInfo *)0x0);
    if (pTVar13 != (Transform *)0x0) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                          ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
      if ((this->fields)._max_5__2.x < pVVar9->x) {
        pGVar12 = (this_00->fields).muzzlePoint;
        if (pGVar12 == (GameObject *)0x0) goto code_?;
        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar12,(MethodInfo *)0x0);
        if (pTVar13 == (Transform *)0x0) goto code_?;
        pVVar9 = (Vector3 *)&stack0xffffffc0;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                            (pVVar9,pTVar13,(MethodInfo *)0x0);
        fStack_15 = pVVar14->y;
        pGVar12 = (this_00->fields).muzzlePoint;
        if (pGVar12 == (GameObject *)0x0) goto code_?;
        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar12,(MethodInfo *)0x0);
        if (pTVar13 == (Transform *)0x0) goto code_?;
        fVar11 = (float)pVVar9 - _UNK_?;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                            ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
        pMVar16 = (MethodInfo *)pVVar9->z;
        pos.y = fStack_15;
        pos.x = fVar11;
        pos.z._0_2_ = (short)pMVar16;
        pos.z._2_2_ = (short)((uint)pMVar16 >> 0x10);
        MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition(this_00,pos,pMVar16);
      }
      pGVar12 = (this_00->fields).muzzlePoint;
      if (pGVar12 != (GameObject *)0x0) {
        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar12,(MethodInfo *)0x0);
        if (pTVar13 != (Transform *)0x0) {
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                              ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
          fVar11 = (this->fields)._min_5__3.x;
          if (pVVar9->x <= fVar11 && fVar11 != pVVar9->x) {
            pGVar12 = (this_00->fields).muzzlePoint;
            if (pGVar12 == (GameObject *)0x0) goto code_?;
            pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar12,(MethodInfo *)0x0);
            if (pTVar13 == (Transform *)0x0) goto code_?;
            pVVar9 = (Vector3 *)&stack0xffffffc0;
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localPosition(pVVar9,pTVar13,(MethodInfo *)0x0);
            fStack_15 = pVVar14->y;
            pGVar12 = (this_00->fields).muzzlePoint;
            if (pGVar12 == (GameObject *)0x0) goto code_?;
            pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar12,(MethodInfo *)0x0);
            if (pTVar13 == (Transform *)0x0) goto code_?;
            fVar11 = (float)pVVar9 + _UNK_?;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localPosition
                                ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
            pos_00.y = fStack_15;
            pos_00.x = fVar11;
            pos_00.z._0_2_ = SUB42(pVVar9->z,0);
            pos_00.z._2_2_ = (short)((uint)pVVar9->z >> 0x10);
            MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition
                      (this_00,pos_00,(MethodInfo *)0x0);
          }
          pGVar12 = (this_00->fields).muzzlePoint;
          if (pGVar12 != (GameObject *)0x0) {
            pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar12,(MethodInfo *)0x0);
            if (pTVar13 != (Transform *)0x0) {
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localPosition
                                  ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
              pfVar17 = &(this->fields)._max_5__2.y;
              if (*pfVar17 <= pVVar9->y && pVVar9->y != *pfVar17) {
                pGVar12 = (this_00->fields).muzzlePoint;
                if (pGVar12 == (GameObject *)0x0) goto code_?;
                pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
                if (pTVar13 == (Transform *)0x0) goto code_?;
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localPosition
                                    ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
                fVar11 = pVVar9->x;
                pGVar12 = (this_00->fields).muzzlePoint;
                fStack_15 = (this->fields)._max_5__2.y;
                if (pGVar12 == (GameObject *)0x0) goto code_?;
                pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
                if (pTVar13 == (Transform *)0x0) goto code_?;
                fStack_15 = fStack_15 - _UNK_?;
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localPosition
                                    ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
                pos_01.y = fStack_15;
                pos_01.x = fVar11;
                pos_01.z._0_2_ = SUB42(pVVar9->z,0);
                pos_01.z._2_2_ = (short)((uint)pVVar9->z >> 0x10);
                MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition
                          (this_00,pos_01,(MethodInfo *)0x0);
              }
              pGVar12 = (this_00->fields).muzzlePoint;
              if (pGVar12 != (GameObject *)0x0) {
                pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
                if (pTVar13 != (Transform *)0x0) {
                  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_localPosition
                                      ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
                  fVar11 = (this->fields)._min_5__3.y;
                  if (pVVar9->y <= fVar11 && fVar11 != pVVar9->y) {
                    pGVar12 = (this_00->fields).muzzlePoint;
                    if (pGVar12 == (GameObject *)0x0) goto code_?;
                    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
                    if (pTVar13 == (Transform *)0x0) goto code_?;
                    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_localPosition
                                        ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
                    fVar11 = pVVar9->x;
                    pGVar12 = (this_00->fields).muzzlePoint;
                    fStack_15 = (this->fields)._min_5__3.y;
                    if (pGVar12 == (GameObject *)0x0) goto code_?;
                    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
                    if (pTVar13 == (Transform *)0x0) goto code_?;
                    fStack_15 = fStack_15 + _UNK_?;
                    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_localPosition
                                        ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
                    pos_02.y = fStack_15;
                    pos_02.x = fVar11;
                    pos_02.z._0_2_ = SUB42(pVVar9->z,0);
                    pos_02.z._2_2_ = (short)((uint)pVVar9->z >> 0x10);
                    MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition
                              (this_00,pos_02,(MethodInfo *)0x0);
                  }
                  pGVar12 = (this_00->fields).muzzlePoint;
                  if (pGVar12 != (GameObject *)0x0) {
                    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
                    if (pTVar13 != (Transform *)0x0) {
                      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_localPosition
                                          ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
                      pfVar17 = &(this->fields)._max_5__2.z;
                      if (*pfVar17 <= pVVar9->z && pVVar9->z != *pfVar17) {
                        pGVar12 = (this_00->fields).muzzlePoint;
                        if (pGVar12 == (GameObject *)0x0) goto code_?;
                        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
                        if (pTVar13 == (Transform *)0x0) goto code_?;
                        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_localPosition
                                            ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
                        fVar11 = pVVar9->x;
                        pGVar12 = (this_00->fields).muzzlePoint;
                        if (pGVar12 == (GameObject *)0x0) goto code_?;
                        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
                        if (pTVar13 == (Transform *)0x0) goto code_?;
                        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_localPosition
                                            ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0);
                        pMVar16 = (MethodInfo *)((this->fields)._max_5__2.z - _UNK_?);
                        pos_03.y = pVVar9->y;
                        pos_03.x = fVar11;
                        pos_03.z._0_2_ = (short)pMVar16;
                        pos_03.z._2_2_ = (short)((uint)pMVar16 >> 0x10);
                        MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition
                                  (this_00,pos_03,pMVar16);
                      }
                      pGVar12 = (this_00->fields).muzzlePoint;
                      if (pGVar12 != (GameObject *)0x0) {
                        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
                        if (pTVar13 != (Transform *)0x0) {
                          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_localPosition
                                              ((Vector3 *)&stack0xffffffc0,pTVar13,(MethodInfo *)0x0
                                              );
                          fVar11 = (this->fields)._min_5__3.z;
                          if (fVar11 < pVVar9->z || fVar11 == pVVar9->z) {
code_?:
                            ppOVar18 = &(this->fields).__2__current;
                            *ppOVar18 = (Object *)0x0;
                            func_?(ppOVar18,0);
                            (this->fields).__1__state = 1;
                            return 1;
                          }
                          pGVar12 = (this_00->fields).muzzlePoint;
                          if (pGVar12 != (GameObject *)0x0) {
                            pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
                            if (pTVar13 != (Transform *)0x0) {
                              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_localPosition
                                                  ((Vector3 *)&stack0xffffffc0,pTVar13,
                                                   (MethodInfo *)0x0);
                              fVar11 = pVVar9->x;
                              pGVar12 = (this_00->fields).muzzlePoint;
                              if (pGVar12 != (GameObject *)0x0) {
                                pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
                                if (pTVar13 != (Transform *)0x0) {
                                  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_localPosition
                                                      ((Vector3 *)&stack0xffffffc0,pTVar13,
                                                       (MethodInfo *)0x0);
                                  pMVar16 = (MethodInfo *)
                                            ((this->fields)._min_5__3.z + _UNK_?);
                                  pos_04.y = pVVar9->y;
                                  pos_04.x = fVar11;
                                  pos_04.z._0_2_ = (short)pMVar16;
                                  pos_04.z._2_2_ = (short)((uint)pMVar16 >> 0x10);
                                  MVCustomGunBlueprint::MVCustomGunBlueprint_SetMuzzlePointPosition
                                            (this_00,pos_04,pMVar16);
                                  goto code_?;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  bVar20 = (*pcVar19)();
  return bVar20;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::
     MVCustomGunBlueprint+<MuzzleBoundCheckRoutine>d__17::
     MVCustomGunBlueprint_MuzzleBoundCheckRoutine_d_17_System_Collections_IEnumerator_Reset
               (MVCustomGunBlueprint_MuzzleBoundCheckRoutine_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint___MuzzleBoundCheckRoutine_d__17__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

