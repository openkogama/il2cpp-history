
/* Single CalcRoundTripTime(Vector3[], MoverPattern, Single) */

float MVWorldObject.dll::MV::WorldObject::PathHelper::PathHelper_CalcRoundTripTime
                (Vector3__Array *waypoints,MoverPattern__Enum pattern,float moveSpeed,
                MethodInfo *method)

{
  fStack_1 = 0.0;
  uVar2 = 1;
  if (waypoints == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    pVVar3 = waypoints->vector;
    pVVar4 = waypoints->vector;
    for (; pVVar3 = pVVar3 + 1, (int)uVar2 < (int)waypoints->max_length; uVar2 = uVar2 + 1) {
      if (waypoints->max_length <= uVar2) goto code_?;
      uVar5 = pVVar3->x;
      uVar6 = pVVar3->y;
      fVar7 = pVVar3->z;
      if (waypoints->max_length <= uVar2 - 1) goto code_?;
      uVar8 = pVVar4->x;
      uVar9 = pVVar4->y;
      fVar10 = pVVar4->z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      fVar7 = fVar7 - fVar10;
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar11 = (double)(((float)uVar6 - (float)uVar9) * ((float)uVar6 - (float)uVar9) +
                        ((float)uVar5 - (float)uVar8) * ((float)uVar5 - (float)uVar8) +
                       fVar7 * fVar7);
      if (dVar11 < 0.0) {
        func_?();
      }
      else {
        dVar11 = SQRT(dVar11);
      }
      pVVar4 = pVVar4 + 1;
      fStack_1 = (float)dVar11 + fStack_1;
    }
    if (pattern == MoverPattern__Enum_Loop) {
      if ((waypoints->max_length != 0) &&
         (iVar12 = waypoints->max_length, iVar12 - 1 < waypoints->max_length)) {
        uVar13._0_4_ = waypoints->vector[iVar12 - 1].x;
        uVar13._4_4_ = waypoints->vector[iVar12 - 1].y;
        uVar14._0_4_ = waypoints->vector[0].x;
        uVar14._4_4_ = waypoints->vector[0].y;
        fVar15 = (float10)func_?(uVar14,waypoints->vector[0].z,uVar13,
                                          waypoints->vector[iVar12 - 1].z,0);
        fStack_16 = (float)(fVar15 + (float10)fStack_1);
        goto code_?;
      }
    }
    else {
      if (pattern != MoverPattern__Enum_PingPong) {
        return 0.0;
      }
      iVar12 = waypoints->max_length;
      uVar2 = iVar12 - 1;
      fStack_16 = fStack_1;
      if ((int)uVar2 < 1) {
code_?:
        return fStack_16 / moveSpeed;
      }
      uVar17 = iVar12 - 2;
      pVVar4 = waypoints->vector + (iVar12 - 1);
      while (uVar2 < waypoints->max_length) {
        uVar18 = pVVar4->x;
        uVar19 = pVVar4->y;
        fVar7 = pVVar4->z;
        if (waypoints->max_length <= uVar17) break;
        uVar13 = *(undefined8 *)(pVVar4 + -1);
        fVar10 = *(float *)((int)(pVVar4 + -1) + 8);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        fStack_20 = (float)uVar13;
        fStack_21 = (float)((ulonglong)uVar13 >> 0x20);
        fVar7 = fVar7 - fVar10;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar11 = (double)(((float)uVar19 - fStack_21) * ((float)uVar19 - fStack_21) +
                          ((float)uVar18 - fStack_20) * ((float)uVar18 - fStack_20) + fVar7 * fVar7)
        ;
        if (dVar11 < 0.0) {
          func_?();
        }
        else {
          dVar11 = SQRT(dVar11);
        }
        uVar2 = uVar2 - 1;
        uVar17 = uVar17 - 1;
        pVVar4 = pVVar4 + -1;
        fStack_1 = (float)dVar11 + fStack_1;
        if ((int)uVar2 < 1) {
          return fStack_1 / moveSpeed;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  fVar15 = (float10)(*pcVar22)();
  return (float)fVar15;
}


/* Vector3 GetPositionByTime(Vector3, Vector3[], Dictionary`2[System.Object,System.Object], Single
   ByRef, Int32 ByRef, Int32 ByRef, Boolean ByRef) */

Vector3 * MVWorldObject.dll::MV::WorldObject::PathHelper::PathHelper_GetPositionByTime
                    (Vector3 *__return_storage_ptr__,Vector3 position,Vector3__Array *waypoints,
                    Dictionary_2_System_Object_System_Object_ *data,float *pathTime,
                    int32_t *oldWayPoint,int32_t *newWayPoint,bool *shouldStop,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__MV__WorldObject__MoverPattern);
    func_?(&StringLiteral_pattern);
    cRam_? = '\x01';
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,(Object *)StringLiteral_pattern,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class ==
          (TypeInfo__MV__WorldObject__MoverPattern->_0).element_class) {
        piVar2 = (int *)func_?();
        if (*piVar2 == 0) {
          pVVar3 = PathHelper_GetPositionByTimeLoop
                             ((Vector3 *)&stack0xfffffff0,position,waypoints,data,pathTime,
                              oldWayPoint,newWayPoint,shouldStop,(MethodInfo *)0x0);
        }
        else {
          if (*piVar2 != 1) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar5 = (pVVar4->zeroVector).y;
            fVar6 = (pVVar4->zeroVector).z;
            __return_storage_ptr__->x = (pVVar4->zeroVector).x;
            __return_storage_ptr__->y = fVar5;
            __return_storage_ptr__->z = fVar6;
            return __return_storage_ptr__;
          }
          pVVar3 = PathHelper_GetPositionByTimePingPong
                             ((Vector3 *)&stack0xfffffff0,position,waypoints,data,pathTime,
                              oldWayPoint,newWayPoint,shouldStop,(MethodInfo *)0x0);
        }
        fVar5 = pVVar3->y;
        fVar6 = pVVar3->z;
        __return_storage_ptr__->x = pVVar3->x;
        __return_storage_ptr__->y = fVar5;
        __return_storage_ptr__->z = fVar6;
        return __return_storage_ptr__;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar7)();
  return pVVar3;
}


/* Vector3 GetPositionByTimeLoop(Vector3, Vector3[], Dictionary`2[System.Object,System.Object],
   Single ByRef, Int32 ByRef, Int32 ByRef, Boolean ByRef) */

Vector3 * MVWorldObject.dll::MV::WorldObject::PathHelper::PathHelper_GetPositionByTimeLoop
                    (Vector3 *__return_storage_ptr__,Vector3 position,Vector3__Array *waypoints,
                    Dictionary_2_System_Object_System_Object_ *data,float *pathTime,
                    int32_t *oldWayPoint,int32_t *newWayPoint,bool *shouldStop,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?();
    func_?(&StringLiteral_speed);
    func_?(&StringLiteral_once);
    cRam_? = '\x01';
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,(Object *)StringLiteral_speed,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar3 = (float *)func_?(pOVar1);
    fVar4 = *pfVar3;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,(Object *)StringLiteral_once,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uVar2 = CONCAT44(TypeInfo__System__Boolean,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar5 = (char *)func_?(pOVar1);
    cVar6 = *pcVar5;
    fVar7 = fVar4 * *pathTime;
    iVar8 = *oldWayPoint;
    *oldWayPoint = -1;
    *newWayPoint = -1;
    fStack_9 = 0.0;
    *shouldStop = 0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar10 = 1;
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar12 = (pVVar11->zeroVector).x;
    uVar13 = (pVVar11->zeroVector).y;
    fStack_14 = (pVVar11->zeroVector).z;
    if (waypoints == (Vector3__Array *)0x0) goto code_?;
    pVVar15 = waypoints->vector;
    pVVar16 = waypoints->vector;
    for (; pVVar15 = pVVar15 + 1, (int)uVar10 < (int)waypoints->max_length; uVar10 = uVar10 + 1) {
      if ((waypoints->max_length <= uVar10) || (waypoints->max_length <= uVar10 - 1))
      goto code_?;
      uVar2._0_4_ = pVVar16->x;
      uVar2._4_4_ = pVVar16->y;
      uVar17._0_4_ = pVVar15->x;
      uVar17._4_4_ = pVVar15->y;
      fVar18 = (float10)func_?(uVar17,pVVar15->z,uVar2,pVVar16->z,0);
      fStack_9 = (float)(fVar18 + (float10)fStack_9);
      if (fVar7 < fStack_9) {
        *oldWayPoint = uVar10 - 1;
        bVar19 = true;
        *newWayPoint = uVar10;
        goto code_?;
      }
      pVVar16 = pVVar16 + 1;
    }
    bVar19 = false;
code_?:
    fStack_20 = (float)uVar12;
    uStack_21 = uVar13;
    fStack_22 = fStack_9;
    if (cVar6 == '\0') {
      if (!bVar19) goto code_?;
code_?:
      uVar10 = *newWayPoint;
      if ((uVar10 < waypoints->max_length) &&
         (uVar23 = *oldWayPoint, uVar23 < waypoints->max_length)) {
        uVar24._0_4_ = waypoints->vector[uVar23].x;
        uVar24._4_4_ = waypoints->vector[uVar23].y;
        uVar25._0_4_ = waypoints->vector[uVar10].x;
        uVar25._4_4_ = waypoints->vector[uVar10].y;
        fVar18 = (float10)func_?(uVar25,waypoints->vector[uVar10].z,uVar24,
                                          waypoints->vector[uVar23].z,0);
        uVar10 = waypoints->max_length;
        uVar23 = *oldWayPoint;
        fVar7 = ((float)fVar18 - (fStack_22 - fVar7)) / (float)fVar18;
        if (*shouldStop == 0) {
          if (uVar23 < uVar10) {
            uVar26 = waypoints->vector[uVar23].x;
            uVar27 = waypoints->vector[uVar23].y;
            fVar4 = waypoints->vector[uVar23].z;
            uVar23 = *newWayPoint;
            if (uVar23 < uVar10) {
              uVar28 = waypoints->vector[uVar23].x;
              uVar29 = waypoints->vector[uVar23].y;
              fVar30 = waypoints->vector[uVar23].z;
              if (fVar7 < 0.0) {
                fVar7 = 0.0;
              }
              else if (_UNK_? < fVar7) {
                fVar7 = _UNK_?;
              }
              __return_storage_ptr__->x = ((float)uVar28 - (float)uVar26) * fVar7 + (float)uVar26;
              __return_storage_ptr__->y = ((float)uVar29 - (float)uVar27) * fVar7 + (float)uVar27;
              __return_storage_ptr__->z = (fVar30 - fVar4) * fVar7 + fVar4;
              return __return_storage_ptr__;
            }
          }
        }
        else if (uVar23 < uVar10) {
          uVar31 = waypoints->vector[uVar23].x;
          uVar32 = waypoints->vector[uVar23].y;
          fVar30 = waypoints->vector[uVar23].z;
          uVar23 = *newWayPoint;
          if (uVar23 < uVar10) {
            uVar33 = waypoints->vector[uVar23].x;
            uVar34 = waypoints->vector[uVar23].y;
            if (fVar7 < 0.0) {
              fVar7 = 0.0;
            }
            else if (_UNK_? < fVar7) {
              fVar7 = _UNK_?;
            }
            fVar18 = (float10)func_?(position._0_8_,position.z,
                                              CONCAT44(((float)uVar34 - (float)uVar32) * fVar7 +
                                                       (float)uVar32,
                                                       ((float)uVar33 - (float)uVar31) * fVar7 +
                                                       (float)uVar31),
                                              (waypoints->vector[uVar23].z - fVar30) * fVar7 +
                                              fVar30,0);
            fVar35 = (float10)func_?(position._0_8_,position.z,
                                              CONCAT44(uStack_21,fStack_20),fStack_14,0);
            *pathTime = *pathTime - ((float)fVar18 - (float)fVar35) / fVar4;
            __return_storage_ptr__->x = fStack_20;
            __return_storage_ptr__->y = (float)uStack_21;
            __return_storage_ptr__->z = fStack_14;
            return __return_storage_ptr__;
          }
        }
      }
    }
    else {
      if (bVar19) {
        if ((*oldWayPoint == 0) && (iVar8 == waypoints->max_length - 1)) {
          *shouldStop = 1;
          puVar36 = (undefined8 *)func_?(0);
          fStack_14 = *(float *)(puVar36 + 1);
          fStack_20 = (float)*puVar36;
          uStack_21 = (undefined4)((ulonglong)*puVar36 >> 0x20);
        }
        goto code_?;
      }
code_?:
      *oldWayPoint = waypoints->max_length - 1;
      *newWayPoint = 0;
      if ((waypoints->max_length != 0) && (uVar10 = *oldWayPoint, uVar10 < waypoints->max_length)) {
        uVar37._0_4_ = waypoints->vector[uVar10].x;
        uVar37._4_4_ = waypoints->vector[uVar10].y;
        uVar38._0_4_ = waypoints->vector[0].x;
        uVar38._4_4_ = waypoints->vector[0].y;
        fVar18 = (float10)func_?(uVar38,waypoints->vector[0].z,uVar37,
                                          waypoints->vector[uVar10].z,0);
        fStack_22 = (float)(fVar18 + (float10)fStack_9);
        goto code_?;
      }
    }
  }
code_?:
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar39 = (code *)swi(3);
  pVVar16 = (Vector3 *)(*pcVar39)();
  return pVVar16;
}


/* Vector3 GetPositionByTimePingPong(Vector3, Vector3[], Dictionary`2[System.Object,System.Object],
   Single ByRef, Int32 ByRef, Int32 ByRef, Boolean ByRef) */

Vector3 * MVWorldObject.dll::MV::WorldObject::PathHelper::PathHelper_GetPositionByTimePingPong
                    (Vector3 *__return_storage_ptr__,Vector3 position,Vector3__Array *waypoints,
                    Dictionary_2_System_Object_System_Object_ *data,float *pathTime,
                    int32_t *oldWayPoint,int32_t *newWayPoint,bool *shouldStop,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?();
    func_?(&StringLiteral_speed);
    func_?(&StringLiteral_once);
    cRam_? = '\x01';
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,(Object *)StringLiteral_speed,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar3 = (float *)func_?(pOVar1);
    fVar4 = *pfVar3;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,(Object *)StringLiteral_once,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uVar2 = CONCAT44(TypeInfo__System__Boolean,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar5 = (char *)func_?(pOVar1);
    fStack_6 = 0.0;
    cVar7 = *pcVar5;
    fVar8 = fVar4 * *pathTime;
    iVar9 = *oldWayPoint;
    *oldWayPoint = -1;
    bVar10 = false;
    *newWayPoint = -1;
    *shouldStop = 0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar11 = 1;
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13 = (pVVar12->zeroVector).x;
    uVar14 = (pVVar12->zeroVector).y;
    fStack_15 = (pVVar12->zeroVector).z;
    if (waypoints == (Vector3__Array *)0x0) goto code_?;
    pVVar16 = waypoints->vector;
    pVVar17 = waypoints->vector;
    for (; pVVar16 = pVVar16 + 1, (int)uVar11 < (int)waypoints->max_length; uVar11 = uVar11 + 1) {
      if ((waypoints->max_length <= uVar11) || (waypoints->max_length <= uVar11 - 1))
      goto code_?;
      uVar2._0_4_ = pVVar17->x;
      uVar2._4_4_ = pVVar17->y;
      uVar18._0_4_ = pVVar16->x;
      uVar18._4_4_ = pVVar16->y;
      fVar19 = (float10)func_?(uVar18,pVVar16->z,uVar2,pVVar17->z,0);
      fStack_6 = (float)(fVar19 + (float10)fStack_6);
      if (fVar8 < fStack_6) {
        bVar10 = true;
        *oldWayPoint = uVar11 - 1;
        *newWayPoint = uVar11;
        break;
      }
      pVVar17 = pVVar17 + 1;
    }
    fStack_20 = (float)uVar13;
    uStack_21 = uVar14;
    fStack_22 = fStack_6;
    if (cVar7 == '\0') {
      if (!bVar10) goto code_?;
    }
    else {
      if (bVar10) {
        if ((*oldWayPoint == 0) && (iVar9 == 1)) {
          *shouldStop = 1;
          puVar23 = (undefined8 *)func_?(0);
          fStack_15 = *(float *)(puVar23 + 1);
          fStack_20 = (float)*puVar23;
          uStack_21 = (undefined4)((ulonglong)*puVar23 >> 0x20);
        }
      }
      else {
code_?:
        uVar11 = waypoints->max_length - 1;
        if (0 < (int)uVar11) {
          pVVar17 = waypoints->vector + (waypoints->max_length - 1);
          do {
            if ((waypoints->max_length <= uVar11 - 1) || (waypoints->max_length <= uVar11))
            goto code_?;
            uVar24._0_4_ = pVVar17->x;
            uVar24._4_4_ = pVVar17->y;
            uVar25._0_4_ = waypoints->vector[uVar11 - 1].x;
            uVar25._4_4_ = waypoints->vector[uVar11 - 1].y;
            fVar19 = (float10)func_?(uVar25,waypoints->vector[uVar11 - 1].z,uVar24,pVVar17->z
                                              ,0);
            uVar26 = uVar11 - 1;
            fStack_22 = (float)(fVar19 + (float10)fStack_6);
            if (fVar8 < fStack_22) {
              *oldWayPoint = uVar11;
              *newWayPoint = uVar26;
              break;
            }
            pVVar17 = pVVar17 + -1;
            uVar11 = uVar26;
            fStack_6 = fStack_22;
          } while (0 < (int)uVar26);
        }
        if (cVar7 == '\0') goto code_?;
      }
      if ((*oldWayPoint == waypoints->max_length - 1) && (iVar9 == waypoints->max_length - 2)) {
        *shouldStop = 1;
        puVar23 = (undefined8 *)func_?(waypoints->max_length - 1);
        fStack_15 = *(float *)(puVar23 + 1);
        fStack_20 = (float)*puVar23;
        uStack_21 = (undefined4)((ulonglong)*puVar23 >> 0x20);
      }
    }
code_?:
    uVar11 = *newWayPoint;
    if ((uVar11 < waypoints->max_length) && (uVar26 = *oldWayPoint, uVar26 < waypoints->max_length))
    {
      uVar27._0_4_ = waypoints->vector[uVar26].x;
      uVar27._4_4_ = waypoints->vector[uVar26].y;
      uVar28._0_4_ = waypoints->vector[uVar11].x;
      uVar28._4_4_ = waypoints->vector[uVar11].y;
      fVar19 = (float10)func_?(uVar28,waypoints->vector[uVar11].z,uVar27,
                                        waypoints->vector[uVar26].z,0);
      uVar11 = *oldWayPoint;
      uVar26 = waypoints->max_length;
      fVar8 = ((float)fVar19 - (fStack_22 - fVar8)) / (float)fVar19;
      if (*shouldStop == 0) {
        if (uVar11 < uVar26) {
          uVar29 = waypoints->vector[uVar11].x;
          uVar30 = waypoints->vector[uVar11].y;
          fVar4 = waypoints->vector[uVar11].z;
          uVar11 = *newWayPoint;
          if (uVar11 < uVar26) {
            uVar31 = waypoints->vector[uVar11].x;
            uVar32 = waypoints->vector[uVar11].y;
            fVar33 = waypoints->vector[uVar11].z;
            if (fVar8 < 0.0) {
              fVar8 = 0.0;
            }
            else if (_UNK_? < fVar8) {
              fVar8 = _UNK_?;
            }
            __return_storage_ptr__->x = ((float)uVar31 - (float)uVar29) * fVar8 + (float)uVar29;
            __return_storage_ptr__->y = ((float)uVar32 - (float)uVar30) * fVar8 + (float)uVar30;
            __return_storage_ptr__->z = (fVar33 - fVar4) * fVar8 + fVar4;
            return __return_storage_ptr__;
          }
        }
      }
      else if (uVar11 < uVar26) {
        uVar34 = waypoints->vector[uVar11].x;
        uVar35 = waypoints->vector[uVar11].y;
        fVar33 = waypoints->vector[uVar11].z;
        uVar11 = *newWayPoint;
        if (uVar11 < uVar26) {
          uVar36 = waypoints->vector[uVar11].x;
          uVar37 = waypoints->vector[uVar11].y;
          if (fVar8 < 0.0) {
            fVar8 = 0.0;
          }
          else if (_UNK_? < fVar8) {
            fVar8 = _UNK_?;
          }
          fVar19 = (float10)func_?(position._0_8_,position.z,
                                            CONCAT44(((float)uVar37 - (float)uVar35) * fVar8 +
                                                     (float)uVar35,
                                                     ((float)uVar36 - (float)uVar34) * fVar8 +
                                                     (float)uVar34),
                                            (waypoints->vector[uVar11].z - fVar33) * fVar8 + fVar33
                                            ,0);
          fVar38 = (float10)func_?(position._0_8_,position.z,CONCAT44(uStack_21,fStack_20),
                                            fStack_15,0);
          *pathTime = *pathTime - ((float)fVar19 - (float)fVar38) / fVar4;
          __return_storage_ptr__->x = fStack_20;
          __return_storage_ptr__->y = (float)uStack_21;
          __return_storage_ptr__->z = fStack_15;
          return __return_storage_ptr__;
        }
      }
    }
  }
code_?:
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar39 = (code *)swi(3);
  pVVar17 = (Vector3 *)(*pcVar39)();
  return pVVar17;
}

