
/* Mesh CreateTriangularPrism(Vector3, Single, Single, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PrismMesh::PrismMesh_CreateTriangularPrism
                 (Vector3 *baseCenter,float baseWidth,float baseDepth,float topWidth,float topDepth,
                 float height,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&_905D214FE6019886C36969B7BE09762E54A832D5F0E88FB06B774CE42A8DC642_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (uint)_UNK_?;
  fVar2 = (float)((uint)baseWidth & uVar1);
  if ((float)((uint)baseWidth & uVar1) <= _UNK_?) {
    fVar2 = _UNK_?;
  }
  fVar3 = (float)((uint)baseDepth & uVar1);
  if ((float)((uint)baseDepth & uVar1) <= _UNK_?) {
    fVar3 = _UNK_?;
  }
  fVar4 = (float)((uint)topWidth & uVar1);
  if ((float)((uint)topWidth & uVar1) <= _UNK_?) {
    fVar4 = _UNK_?;
  }
  fVar5 = (float)((uint)topDepth & uVar1);
  if ((float)((uint)topDepth & uVar1) <= _UNK_?) {
    fVar5 = _UNK_?;
  }
  fVar6 = (float)((uint)height & uVar1);
  if ((float)((uint)height & uVar1) <= _UNK_?) {
    fVar6 = _UNK_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAStack_7 = *(Array__Class **)baseCenter;
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fStack_9 = baseCenter->z;
  aQStack_10[0].x = (pQVar8->identityQuaternion).x;
  aQStack_10[0].y = (pQVar8->identityQuaternion).y;
  aQStack_10[0].z = (pQVar8->identityQuaternion).z;
  aQStack_10[0].w = (pQVar8->identityQuaternion).w;
  pLVar11 = PrismMath::PrismMath_CalcTriangPrismCornerPoints
                      ((Vector3 *)&pAStack_7,fVar2,fVar3,fVar4,fVar5,fVar6,aQStack_10,
                       (MethodInfo *)0x0);
  if (pLVar11 != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((pLVar11->fields)._size == 0) goto code_?;
    pVVar12 = (pLVar11->fields)._items;
    if (pVVar12 != (Vector3__Array *)0x0) {
      if ((int)pVVar12->max_length != 0) {
        pMVar13 = *(MonitorData **)pVVar12->vector;
        fVar2 = pVVar12->vector[0].z;
        if ((uint)(pLVar11->fields)._size < 2) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar14 = (code *)swi(3);
          pMVar15 = (Mesh *)(*pcVar14)();
          return pMVar15;
        }
        if (1 < (uint)pVVar12->max_length) {
          pAVar16 = *(Array__Class **)(pVVar12->vector + 1);
          fVar3 = pVVar12->vector[1].z;
          if ((uint)(pLVar11->fields)._size < 3) goto code_?;
          if (2 < (uint)pVVar12->max_length) {
            uVar17._0_4_ = pVVar12->vector[2].x;
            uVar17._4_4_ = pVVar12->vector[2].y;
            fVar4 = pVVar12->vector[2].z;
            if ((uint)(pLVar11->fields)._size < 4) goto code_?;
            if (3 < (uint)pVVar12->max_length) {
              pAVar18 = *(Array__Class **)(pVVar12->vector + 3);
              fVar5 = pVVar12->vector[3].z;
              if ((uint)(pLVar11->fields)._size < 6) goto code_?;
              if (5 < (uint)pVVar12->max_length) {
                pAVar19 = *(Array__Class **)(pVVar12->vector + 5);
                fVar6 = pVVar12->vector[5].z;
                pAVar20 = *(Array__Class **)(pVVar12->vector + 4);
                fVar21 = pVVar12->vector[4].z;
                pAVar22 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0x12);
                if (pAVar22 == (Array *)0x0) goto code_?;
                if (*(int *)&pAVar22[1].monitor != 0) {
                  pAVar22[2].klass = pAVar18;
                  *(float *)&pAVar22[2].monitor = fVar5;
                  if (1 < *(uint *)&pAVar22[1].monitor) {
                    *(Array__Class **)((longlong)&pAVar22[2].monitor + 4) = pAVar20;
                    *(float *)((longlong)&pAVar22[3].klass + 4) = fVar21;
                    if (2 < *(uint *)&pAVar22[1].monitor) {
                      pAVar22[3].monitor = (MonitorData *)pAVar19;
                      *(float *)&pAVar22[4].klass = fVar6;
                      if (3 < *(uint *)&pAVar22[1].monitor) {
                        *(MonitorData **)((longlong)&pAVar22[4].klass + 4) = pMVar13;
                        *(float *)((longlong)&pAVar22[4].monitor + 4) = fVar2;
                        if (4 < *(uint *)&pAVar22[1].monitor) {
                          pAVar22[5].klass = pAVar16;
                          *(float *)&pAVar22[5].monitor = fVar3;
                          if (5 < *(uint *)&pAVar22[1].monitor) {
                            *(undefined8 *)((longlong)&pAVar22[5].monitor + 4) = uVar17;
                            *(float *)((longlong)&pAVar22[6].klass + 4) = fVar4;
                            if (6 < *(uint *)&pAVar22[1].monitor) {
                              pAVar22[6].monitor = pMVar13;
                              *(float *)&pAVar22[7].klass = fVar2;
                              if (7 < *(uint *)&pAVar22[1].monitor) {
                                *(Array__Class **)((longlong)&pAVar22[7].klass + 4) = pAVar18;
                                *(float *)((longlong)&pAVar22[7].monitor + 4) = fVar5;
                                if (8 < *(uint *)&pAVar22[1].monitor) {
                                  pAVar22[8].klass = pAVar19;
                                  *(float *)&pAVar22[8].monitor = fVar6;
                                  if (9 < *(uint *)&pAVar22[1].monitor) {
                                    *(Array__Class **)((longlong)&pAVar22[8].monitor + 4) = pAVar16;
                                    *(float *)((longlong)&pAVar22[9].klass + 4) = fVar3;
                                    if (10 < *(uint *)&pAVar22[1].monitor) {
                                      pAVar22[9].monitor = pMVar13;
                                      *(float *)&pAVar22[10].klass = fVar2;
                                      if (0xb < *(uint *)&pAVar22[1].monitor) {
                                        *(undefined8 *)((longlong)&pAVar22[10].klass + 4) = uVar17;
                                        *(float *)((longlong)&pAVar22[10].monitor + 4) = fVar4;
                                        if (0xc < *(uint *)&pAVar22[1].monitor) {
                                          pAVar22[0xb].klass = pAVar20;
                                          *(float *)&pAVar22[0xb].monitor = fVar21;
                                          if (0xd < *(uint *)&pAVar22[1].monitor) {
                                            *(Array__Class **)((longlong)&pAVar22[0xb].monitor + 4)
                                                 = pAVar18;
                                            *(float *)((longlong)&pAVar22[0xc].klass + 4) = fVar5;
                                            if (0xe < *(uint *)&pAVar22[1].monitor) {
                                              pAVar22[0xc].monitor = (MonitorData *)pAVar16;
                                              *(float *)&pAVar22[0xd].klass = fVar3;
                                              if (0xf < *(uint *)&pAVar22[1].monitor) {
                                                *(Array__Class **)
                                                 ((longlong)&pAVar22[0xd].klass + 4) = pAVar19;
                                                *(float *)((longlong)&pAVar22[0xd].monitor + 4) =
                                                     fVar6;
                                                if (0x10 < *(uint *)&pAVar22[1].monitor) {
                                                  pAVar22[0xe].klass = pAVar20;
                                                  *(float *)&pAVar22[0xe].monitor = fVar21;
                                                  if (0x11 < *(uint *)&pAVar22[1].monitor) {
                                                    *(undefined8 *)
                                                     ((longlong)&pAVar22[0xe].monitor + 4) = uVar17;
                                                    *(float *)((longlong)&pAVar22[0xf].klass + 4) =
                                                         fVar4;
                                                    indices = (Int32__Array *)
                                                              FUN_?(TypeInfo__System__Int32,
                                                                            0x18);
                                                    mscorlib.dll::System::Runtime::CompilerServices
                                                    ::RuntimeHelpers::
                                                    RuntimeHelpers_InitializeArray_1
                                                              ((Array *)indices,
                                                                                                                              
                                                  __905D214FE6019886C36969B7BE09762E54A832D5F0E88FB06B774CE42A8DC642_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (0xb < *(uint *)&pAVar22[1].monitor) {
                                                    uVar17 = *(undefined8 *)
                                                              ((longlong)&pAVar22[10].klass + 4);
                                                    pAStack_7 = (Array__Class *)pAVar22[9].monitor;
                                                    fVar4 = (float)uVar17 - SUB84(pAStack_7,0);
                                                    fVar5 = *(float *)((longlong)
                                                                        &pAVar22[10].monitor + 4) -
                                                             *(float *)&pAVar22[10].klass;
                                                    fVar2 = (float)((ulonglong)pAStack_7 >> 0x20);
                                                    fVar3 = (float)((ulonglong)uVar17 >> 0x20) -
                                                             fVar2;
                                                    if (0xd < *(uint *)&pAVar22[1].monitor) {
                                                      uVar17 = *(undefined8 *)
                                                                ((longlong)&pAVar22[0xb].monitor + 4
                                                                );
                                                      fVar21 = (float)uVar17 - SUB84(pAStack_7,0);
                                                      fVar2 = (float)((ulonglong)uVar17 >> 0x20) -
                                                               fVar2;
                                                      fVar6 = *(float *)((longlong)
                                                                          &pAVar22[0xc].klass + 4) -
                                                               *(float *)&pAVar22[10].klass;
                                                      fVar23 = fVar6 * fVar3 - fVar2 * fVar5;
                                                      fVar5 = fVar21 * fVar5 - fVar6 * fVar4;
                                                      fVar2 = fVar2 * fVar4 - fVar21 * fVar3;
                                                      pAStack_7 = (Array__Class *)
                                                                   CONCAT44(fVar5,fVar23);
                                                      fStack_9 = fVar2;
                                                      fVar4 = (float)FUN_?(&pAStack_7);
                                                      fVar3 = _UNK_?;
                                                      if (_UNK_? < fVar4) {
                                                        fVar2 = fVar2 / fVar4;
                                                        pAStack_24 = (Array__Class *)
                                                                     CONCAT44(fVar5 / fVar4,
                                                                              fVar23 / fVar4);
                                                      }
                                                      else {
                                                        if (cRam_? == '\0') {
                                                          FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pAStack_24 = *(Array__Class **)
                                                                &TypeInfo__UnityEngine__Vector3->
                                                                 static_fields->zeroVector;
                                                  fVar2 = (TypeInfo__UnityEngine__Vector3->
                                                            static_fields->zeroVector).z;
                                                  }
                                                  if (0xf < *(uint *)&pAVar22[1].monitor) {
                                                    uVar17 = *(undefined8 *)
                                                              ((longlong)&pAVar22[0xd].klass + 4);
                                                    pAStack_7 = (Array__Class *)
                                                                 pAVar22[0xc].monitor;
                                                    fVar6 = (float)uVar17 - SUB84(pAStack_7,0);
                                                    fVar21 = *(float *)((longlong)
                                                                        &pAVar22[0xd].monitor + 4) -
                                                             *(float *)&pAVar22[0xd].klass;
                                                    fVar4 = (float)((ulonglong)pAStack_7 >> 0x20);
                                                    fVar5 = (float)((ulonglong)uVar17 >> 0x20) -
                                                             fVar4;
                                                    if (0x11 < *(uint *)&pAVar22[1].monitor) {
                                                      uVar17 = *(undefined8 *)
                                                                ((longlong)&pAVar22[0xe].monitor + 4
                                                                );
                                                      fVar25 = (float)uVar17 - SUB84(pAStack_7,0);
                                                      fVar4 = (float)((ulonglong)uVar17 >> 0x20) -
                                                               fVar4;
                                                      fVar23 = *(float *)((longlong)
                                                                          &pAVar22[0xf].klass + 4) -
                                                               *(float *)&pAVar22[0xd].klass;
                                                      fVar26 = fVar23 * fVar5 - fVar4 * fVar21;
                                                      fVar21 = fVar25 * fVar21 - fVar23 * fVar6;
                                                      fVar4 = fVar4 * fVar6 - fVar25 * fVar5;
                                                      pAStack_7 = (Array__Class *)
                                                                   CONCAT44(fVar21,fVar26);
                                                      fStack_9 = fVar4;
                                                      fVar5 = (float)FUN_?(&pAStack_7);
                                                      if (fVar3 < fVar5) {
                                                        fVar4 = fVar4 / fVar5;
                                                        pAStack_7 = (Array__Class *)
                                                                     CONCAT44(fVar21 / fVar5,
                                                                              fVar26 / fVar5);
                                                      }
                                                      else {
                                                        if (cRam_? == '\0') {
                                                          FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pAStack_7 = *(Array__Class **)
                                                                &TypeInfo__UnityEngine__Vector3->
                                                                 static_fields->zeroVector;
                                                  fVar4 = (TypeInfo__UnityEngine__Vector3->
                                                            static_fields->zeroVector).z;
                                                  }
                                                  this = (Array *)FUN_?(
                                                  TypeInfo__UnityEngine__Vector3,0x12);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  cVar27 = cRam_?;
                                                  pVVar28 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (this == (Array *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&this[1].monitor != 0) {
                                                    this[2].klass =
                                                         *(Array__Class **)&pVVar28->upVector;
                                                    *(float *)&this[2].monitor =
                                                         (pVVar28->upVector).z;
                                                    if (cVar27 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar27 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar28 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    if (1 < *(uint *)&this[1].monitor) {
                                                      *(undefined8 *)
                                                       ((longlong)&this[2].monitor + 4) =
                                                           *(undefined8 *)&pVVar28->upVector;
                                                      *(float *)((longlong)&this[3].klass + 4) =
                                                           (pVVar28->upVector).z;
                                                      if (cVar27 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar27 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar28 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (2 < *(uint *)&this[1].monitor) {
                                                    this[3].monitor =
                                                         *(MonitorData **)&pVVar28->upVector;
                                                    *(float *)&this[4].klass = (pVVar28->upVector).z
                                                    ;
                                                    if (cVar27 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar27 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    uVar1 = _UNK_?;
                                                    pVVar28 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar29 = (pVVar28->upVector).x;
                                                    uVar30 = (uint)(pVVar28->upVector).z ^
                                                             _UNK_?;
                                                    if (3 < *(uint *)&this[1].monitor) {
                                                      *(ulonglong *)((longlong)&this[4].klass + 4) =
                                                           CONCAT44((uint)(pVVar28->upVector).y ^
                                                                    _UNK_?,
                                                                    uVar29 ^ _UNK_?);
                                                      *(uint *)((longlong)&this[4].monitor + 4) =
                                                           uVar30;
                                                      if (cVar27 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar27 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar28 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar31 = (pVVar28->upVector).x;
                                                  fVar3 = (pVVar28->upVector).z;
                                                  if (4 < *(uint *)&this[1].monitor) {
                                                    this[5].klass =
                                                         (Array__Class *)
                                                         CONCAT44((uint)(pVVar28->upVector).y ^
                                                                  uVar1,uVar31 ^ uVar1);
                                                    *(uint *)&this[5].monitor =
                                                         (uint)fVar3 ^ uVar1;
                                                    if (cVar27 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    cVar27 = cRam_?;
                                                    pVVar28 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar32 = (pVVar28->upVector).x;
                                                    fVar3 = (pVVar28->upVector).z;
                                                    if (5 < *(uint *)&this[1].monitor) {
                                                      *(ulonglong *)((longlong)&this[5].monitor + 4)
                                                           = CONCAT44((uint)(pVVar28->upVector).y ^
                                                                      uVar1,uVar32 ^ uVar1);
                                                      *(uint *)((longlong)&this[6].klass + 4) =
                                                           (uint)fVar3 ^ uVar1;
                                                      if (cVar27 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar27 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar28 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar33 = (pVVar28->forwardVector).x;
                                                  fVar3 = (pVVar28->forwardVector).z;
                                                  if (6 < *(uint *)&this[1].monitor) {
                                                    this[6].monitor =
                                                         (MonitorData *)
                                                         CONCAT44((uint)(pVVar28->forwardVector).y ^
                                                                  uVar1,uVar33 ^ uVar1);
                                                    *(uint *)&this[7].klass = (uint)fVar3 ^ uVar1;
                                                    if (cVar27 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cVar27 = '\x01';
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar28 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar34 = (pVVar28->forwardVector).x;
                                                    fVar3 = (pVVar28->forwardVector).z;
                                                    if (7 < *(uint *)&this[1].monitor) {
                                                      *(ulonglong *)((longlong)&this[7].klass + 4) =
                                                           CONCAT44((uint)(pVVar28->forwardVector).y
                                                                    ^ uVar1,uVar34 ^ uVar1);
                                                      *(uint *)((longlong)&this[7].monitor + 4) =
                                                           (uint)fVar3 ^ uVar1;
                                                      if (cVar27 == '\0') {
                                                        FUN_?(&
                                                  TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cVar27 = '\x01';
                                                  cRam_? = '\x01';
                                                  }
                                                  pVVar28 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar35 = (pVVar28->forwardVector).x;
                                                  fVar3 = (pVVar28->forwardVector).z;
                                                  if (8 < *(uint *)&this[1].monitor) {
                                                    this[8].klass =
                                                         (Array__Class *)
                                                         CONCAT44((uint)(pVVar28->forwardVector).y ^
                                                                  uVar1,uVar35 ^ uVar1);
                                                    *(uint *)&this[8].monitor =
                                                         (uint)fVar3 ^ uVar1;
                                                    if (cVar27 == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar28 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar36 = (pVVar28->forwardVector).x;
                                                    fVar3 = (pVVar28->forwardVector).z;
                                                    if (9 < *(uint *)&this[1].monitor) {
                                                      *(ulonglong *)((longlong)&this[8].monitor + 4)
                                                           = CONCAT44((uint)(pVVar28->forwardVector)
                                                                            .y ^ uVar1,
                                                                      uVar36 ^ uVar1);
                                                      *(uint *)((longlong)&this[9].klass + 4) =
                                                           (uint)fVar3 ^ uVar1;
                                                      if (10 < *(uint *)&this[1].monitor) {
                                                        this[9].monitor = (MonitorData *)pAStack_24;
                                                        *(float *)&this[10].klass = fVar2;
                                                        if (0xb < *(uint *)&this[1].monitor) {
                                                          *(Array__Class **)
                                                           ((longlong)&this[10].klass + 4) =
                                                               pAStack_24;
                                                          *(float *)((longlong)&this[10].monitor + 4
                                                                    ) = fVar2;
                                                          if (0xc < *(uint *)&this[1].monitor) {
                                                            this[0xb].klass = pAStack_24;
                                                            *(float *)&this[0xb].monitor = fVar2;
                                                            if (0xd < *(uint *)&this[1].monitor) {
                                                              *(Array__Class **)
                                                               ((longlong)&this[0xb].monitor + 4) =
                                                                   pAStack_24;
                                                              *(float *)((longlong)&this[0xc].klass
                                                                        + 4) = fVar2;
                                                              if (0xe < *(uint *)&this[1].monitor) {
                                                                this[0xc].monitor =
                                                                     (MonitorData *)pAStack_7;
                                                                *(float *)&this[0xd].klass = fVar4;
                                                                if (0xf < *(uint *)&this[1].monitor)
                                                                {
                                                                  *(Array__Class **)
                                                                   ((longlong)&this[0xd].klass + 4)
                                                                       = pAStack_7;
                                                                  *(float *)((longlong)
                                                                             &this[0xd].monitor + 4)
                                                                       = fVar4;
                                                                  if (0x10 < *(uint *)&this[1].
                                                  monitor) {
                                                    this[0xe].klass = pAStack_7;
                                                    *(float *)&this[0xe].monitor = fVar4;
                                                    if (0x11 < *(uint *)&this[1].monitor) {
                                                      *(Array__Class **)
                                                       ((longlong)&this[0xe].monitor + 4) =
                                                           pAStack_7;
                                                      *(float *)((longlong)&this[0xf].klass + 4) =
                                                           fVar4;
                                                      pMVar15 = (Mesh *)FUN_?(
                                                  TypeInfo__UnityEngine__Mesh);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                  Mesh__ctor(pMVar15,(MethodInfo *)0x0);
                                                  if (pMVar15 != (Mesh *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  iVar37 = mscorlib.dll::System::Array::
                                                           Array_get_Length(pAVar22,(MethodInfo *)
                                                                                    0x0);
                                                  uVar1 = 0;
                                                  lVar38 = 0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                  Mesh_SetSizedArrayForChannel
                                                            (pMVar15,VertexAttribute__Enum_Position,
                                                             VertexAttributeFormat__Enum_Float32,3,
                                                             pAVar22,iVar37,0,iVar37,
                                                             MeshUpdateFlags__Enum_Default,
                                                             (MethodInfo *)0x0);
                                                  iVar39 = *(int *)&pAVar22[1].monitor;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__UnityEngine__Color);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pAVar22 = (Array *)FUN_?(
                                                  TypeInfo__UnityEngine__Color);
                                                  if (0 < iVar39) {
                                                    pAVar40 = pAVar22 + 2;
                                                    uVar30 = uVar1;
                                                    if (pAVar22 == (Array *)0x0)
                                                    goto code_?;
                                                    do {
                                                      if (*(uint *)&pAVar22[1].monitor <= uVar30)
                                                      goto code_?;
                                                      fVar2 = color->g;
                                                      fVar3 = color->b;
                                                      fVar4 = color->a;
                                                      lVar38 = lVar38 + 1;
                                                      *(float *)&pAVar40->klass = color->r;
                                                      *(float *)((longlong)&pAVar40->klass + 4) =
                                                           fVar2;
                                                      *(float *)&pAVar40->monitor = fVar3;
                                                      *(float *)((longlong)&pAVar40->monitor + 4) =
                                                           fVar4;
                                                      pAVar40 = pAVar40 + 1;
                                                      uVar30 = uVar30 + 1;
                                                    } while (lVar38 < iVar39);
                                                  }
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  if (pAVar22 != (Array *)0x0) {
                                                    uVar1 = mscorlib.dll::System::Array::
                                                             Array_get_Length(pAVar22,(MethodInfo *)
                                                                                      0x0);
                                                  }
                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                  Mesh_SetSizedArrayForChannel
                                                            (pMVar15,VertexAttribute__Enum_Color,
                                                             VertexAttributeFormat__Enum_Float32,4,
                                                             pAVar22,uVar1,0,uVar1,
                                                             MeshUpdateFlags__Enum_Default,
                                                             (MethodInfo *)0x0);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  iVar37 = mscorlib.dll::System::Array::
                                                           Array_get_Length(this,(MethodInfo *)0x0);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                  Mesh_SetSizedArrayForChannel
                                                            (pMVar15,VertexAttribute__Enum_Normal,
                                                             VertexAttributeFormat__Enum_Float32,3,
                                                             this,iVar37,0,iVar37,
                                                             MeshUpdateFlags__Enum_Default,
                                                             (MethodInfo *)0x0);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                  Mesh_SetIndices(pMVar15,indices,
                                                                  MeshTopology__Enum_Triangles,0,
                                                                  (MethodInfo *)0x0);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                  Mesh_UploadMeshData(pMVar15,0,(MethodInfo *)0x0);
                                                  return pMVar15;
                                                  }
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
      FUN_?();
      pcVar14 = (code *)swi(3);
      pMVar15 = (Mesh *)(*pcVar14)();
      return pMVar15;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  pMVar15 = (Mesh *)(*pcVar14)();
  return pMVar15;
}


/* Mesh CreateWireTriangularPrism(Vector3, Single, Single, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PrismMesh::PrismMesh_CreateWireTriangularPrism
                 (Vector3 *baseCenter,float baseWidth,float baseDepth,float topWidth,float topDepth,
                 float height,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&_6F9C6EAE4AB4A7A9E05892CCFB9A9F1510EE5178EF8924458107895A1468FE0B_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (uint)_UNK_?;
  fVar2 = (float)((uint)baseWidth & uVar1);
  if ((float)((uint)baseWidth & uVar1) <= _UNK_?) {
    fVar2 = _UNK_?;
  }
  fVar3 = (float)((uint)baseDepth & uVar1);
  if ((float)((uint)baseDepth & uVar1) <= _UNK_?) {
    fVar3 = _UNK_?;
  }
  fVar4 = (float)((uint)topWidth & uVar1);
  if ((float)((uint)topWidth & uVar1) <= _UNK_?) {
    fVar4 = _UNK_?;
  }
  fVar5 = (float)((uint)topDepth & uVar1);
  if ((float)((uint)topDepth & uVar1) <= _UNK_?) {
    fVar5 = _UNK_?;
  }
  fVar6 = (float)((uint)height & uVar1);
  if ((float)((uint)height & uVar1) <= _UNK_?) {
    fVar6 = _UNK_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar7 = 0;
  VStack_8.x = baseCenter->x;
  VStack_8.y = baseCenter->y;
  pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
  VStack_8.z = baseCenter->z;
  aQStack_10[0].x = (pQVar9->identityQuaternion).x;
  aQStack_10[0].y = (pQVar9->identityQuaternion).y;
  aQStack_10[0].z = (pQVar9->identityQuaternion).z;
  aQStack_10[0].w = (pQVar9->identityQuaternion).w;
  pLVar11 = PrismMath::PrismMath_CalcTriangPrismCornerPoints
                      (&VStack_8,fVar2,fVar3,fVar4,fVar5,fVar6,aQStack_10,(MethodInfo *)0x0);
  if (pLVar11 != (List_1_UnityEngine_Vector3_ *)0x0) {
    valuesArrayLength_00 = 0;
    if ((pLVar11->fields)._size == 0) goto code_?;
    pVVar12 = (pLVar11->fields)._items;
    if (pVVar12 != (Vector3__Array *)0x0) {
      if ((int)pVVar12->max_length != 0) {
        pAVar13 = *(Array__Class **)pVVar12->vector;
        fVar2 = pVVar12->vector[0].z;
        if ((uint)(pLVar11->fields)._size < 2) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar14 = (code *)swi(3);
          pMVar15 = (Mesh *)(*pcVar14)();
          return pMVar15;
        }
        if (1 < (uint)pVVar12->max_length) {
          pMVar16 = *(MonitorData **)(pVVar12->vector + 1);
          fVar3 = pVVar12->vector[1].z;
          if ((uint)(pLVar11->fields)._size < 3) goto code_?;
          if (2 < (uint)pVVar12->max_length) {
            uVar17 = *(undefined8 *)(pVVar12->vector + 2);
            fVar4 = pVVar12->vector[2].z;
            if ((uint)(pLVar11->fields)._size < 4) goto code_?;
            if (3 < (uint)pVVar12->max_length) {
              uVar18 = *(undefined8 *)(pVVar12->vector + 3);
              fVar5 = pVVar12->vector[3].z;
              if ((uint)(pLVar11->fields)._size < 6) goto code_?;
              if (5 < (uint)pVVar12->max_length) {
                uVar19 = *(undefined8 *)(pVVar12->vector + 5);
                fVar6 = pVVar12->vector[5].z;
                pAVar20 = *(Array__Class **)(pVVar12->vector + 4);
                fVar21 = pVVar12->vector[4].z;
                pAVar22 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,6);
                if (pAVar22 == (Array *)0x0) goto code_?;
                if (*(int *)&pAVar22[1].monitor != 0) {
                  pAVar22[2].klass = pAVar13;
                  *(float *)&pAVar22[2].monitor = fVar2;
                  if (1 < *(uint *)&pAVar22[1].monitor) {
                    *(undefined8 *)((longlong)&pAVar22[2].monitor + 4) = uVar17;
                    *(float *)((longlong)&pAVar22[3].klass + 4) = fVar4;
                    if (2 < *(uint *)&pAVar22[1].monitor) {
                      pAVar22[3].monitor = pMVar16;
                      *(float *)&pAVar22[4].klass = fVar3;
                      if (3 < *(uint *)&pAVar22[1].monitor) {
                        *(undefined8 *)((longlong)&pAVar22[4].klass + 4) = uVar18;
                        *(float *)((longlong)&pAVar22[4].monitor + 4) = fVar5;
                        if (4 < *(uint *)&pAVar22[1].monitor) {
                          pAVar22[5].klass = pAVar20;
                          *(float *)&pAVar22[5].monitor = fVar21;
                          if (5 < *(uint *)&pAVar22[1].monitor) {
                            *(undefined8 *)((longlong)&pAVar22[5].monitor + 4) = uVar19;
                            *(float *)((longlong)&pAVar22[6].klass + 4) = fVar6;
                            indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,0x12);
                            mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
                            RuntimeHelpers_InitializeArray_1
                                      ((Array *)indices,
                                       __6F9C6EAE4AB4A7A9E05892CCFB9A9F1510EE5178EF8924458107895A1468FE0B_Field
                                       ,(MethodInfo *)0x0);
                            pMVar15 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor
                                      (pMVar15,(MethodInfo *)0x0);
                            if (pMVar15 != (Mesh *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              valuesArrayLength =
                                   mscorlib.dll::System::Array::Array_get_Length
                                             (pAVar22,(MethodInfo *)0x0);
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                              Mesh_SetSizedArrayForChannel
                                        (pMVar15,VertexAttribute__Enum_Position,
                                         VertexAttributeFormat__Enum_Float32,3,pAVar22,
                                         valuesArrayLength,0,valuesArrayLength,
                                         MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                              iVar23 = *(int *)&pAVar22[1].monitor;
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__UnityEngine__Color);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pAVar22 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
                              if (0 < iVar23) {
                                pAVar24 = pAVar22 + 2;
                                uVar25 = uVar7;
                                if (pAVar22 == (Array *)0x0) goto code_?;
                                do {
                                  if (*(uint *)&pAVar22[1].monitor <= (uint)uVar7)
                                  goto code_?;
                                  fVar2 = color->g;
                                  fVar3 = color->b;
                                  fVar4 = color->a;
                                  uVar7 = (ulonglong)((uint)uVar7 + 1);
                                  uVar25 = uVar25 + 1;
                                  *(float *)&pAVar24->klass = color->r;
                                  *(float *)((longlong)&pAVar24->klass + 4) = fVar2;
                                  *(float *)&pAVar24->monitor = fVar3;
                                  *(float *)((longlong)&pAVar24->monitor + 4) = fVar4;
                                  pAVar24 = pAVar24 + 1;
                                } while ((longlong)uVar25 < (longlong)iVar23);
                              }
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              if (pAVar22 != (Array *)0x0) {
                                valuesArrayLength_00 =
                                     mscorlib.dll::System::Array::Array_get_Length
                                               (pAVar22,(MethodInfo *)0x0);
                              }
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                              Mesh_SetSizedArrayForChannel
                                        (pMVar15,VertexAttribute__Enum_Color,
                                         VertexAttributeFormat__Enum_Float32,4,pAVar22,
                                         valuesArrayLength_00,0,valuesArrayLength_00,
                                         MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                                        (pMVar15,indices,MeshTopology__Enum_Lines,0,
                                         (MethodInfo *)0x0);
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                                        (pMVar15,0,(MethodInfo *)0x0);
                              return pMVar15;
                            }
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
code_?:
      FUN_?();
      pcVar14 = (code *)swi(3);
      pMVar15 = (Mesh *)(*pcVar14)();
      return pMVar15;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  pMVar15 = (Mesh *)(*pcVar14)();
  return pMVar15;
}

