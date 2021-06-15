
/* Void AddIndentedCube(ICubeModel, ICubeModel, IntVector) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_AddIndentedCube
               (ICubeModel *from,ICubeModel *to,IntVector fromPos,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_1_ = 0xff;
  uStack_1._2_1_ = 0xff;
  uStack_1._3_1_ = 0xff;
  puStack_2 = &DAT_?;
  pMStack_3 = (Material *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pMStack_3;
  puStack_4 = &stack0xffffff78;
  puVar5 = &stack0xffffff78;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pIStack_6 = (ICubeModel *)0x0;
  uStack_7 = 0;
  pLStack_8 = (List_1_UnityEngine_Vector2_ *)0x0;
  pIStack_9 = (Il2CppMethodPointer)0x0;
  pCStack_10 = (CubeBase *)0x0;
  pcStack_11 = (char *)0x0;
  func_?();
  byteCorners = (Byte__Array *)from;
  pMVar12 = (MethodInfo *)from;
  puStack_13 = (undefined4 *)&stack0xffffff78;
  puStack_4 = &stack0xffffff78;
  if (from != (ICubeModel *)0x0) {
    puStack_13 = (undefined4 *)&stack0xffffff78;
    puStack_4 = &stack0xffffff78;
    puVar14 = (ulonglong *)
             func_?(&LStack_15.ver,0,TypeInfo__MV__WorldObject__ICubeModel,from);
    uStack_7 = *puVar14;
    pIStack_6 = *(ICubeModel **)(puVar14 + 1);
    fVar16 = (float10)func_?(&uStack_7,0,0);
    pMVar12 = (MethodInfo *)(float)fVar16;
    if (to != (ICubeModel *)0x0) {
      puVar17 = (undefined8 *)
               func_?(&LStack_15.ver,0,TypeInfo__MV__WorldObject__ICubeModel,to);
      uVar18 = (undefined2)((ulonglong)*puVar17 >> 0x30);
      method_00 = (MethodInfo *)&UNK_?;
      fVar19 = (float10)func_?(&stack0xffffff98,0,0);
      pAStack_20 = (Array *)(float)fVar19;
      pMVar12 = (MethodInfo *)(int)((float)(float)fVar16 / (float)pAStack_20);
      if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
        func_?(TypeInfo__MoveCubeFromCoarseToFine);
      }
      validPoses = MoveCubeFromCoarseToFine_CreateValidPosGrid((int32_t)pMVar12,(MethodInfo *)0x0);
      method_01 = (MethodInfo *)&UNK_?;
      testPlanes = MoveCubeFromCoarseToFine_GetTestPlanes(from,fromPos,(MethodInfo *)0x0);
      MoveCubeFromCoarseToFine_SetValidPoints(testPlanes,validPoses,(MethodInfo *)0x0);
      pLStack_21 = (List_1_UnityEngine_Vector2_ *)
                   MoveCubeFromCoarseToFine_GetValidCubes
                             (validPoses,(int32_t)pMVar12,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
        uStack_7 = CONCAT44(uStack_7._4_4_,TypeInfo__MV__WorldObject__IntVector);
        func_?();
      }
      uStack_7 = uStack_7 & 0xffffffff00000000;
      IVar22.z = fromPos.x;
      IVar22._0_4_ = apLStack_23;
      IVar22 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply_1
                         (IVar22,CONCAT22(uVar18,fromPos.z),pMVar12);
      fStack_24 = *IVar22._0_4_;
      uStack_25 = *(undefined2 *)(IVar22._0_4_ + 1);
      pIStack_6 = from;
      LStack_15.l = (List_1_UnityEngine_Vector2_ *)fromPos._0_4_;
      uStack_7 = CONCAT44(TypeInfo__MV__WorldObject__ICubeModel,1);
      LStack_15.next._0_2_ = fromPos.z;
      this = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)func_?();
      if ((this != (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                    *)0x0) &&
         (pAVar26 = (Array *)System.dll::System::Collections::Generic::
                            SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                            ::Single,System::Object]::
                            SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                      (this,method_01), pAVar26 != (Array *)0x0)) {
        byteCorners = (Byte__Array *)
                      mscorlib.dll::System::Array::Array_Clone(pAVar26,(MethodInfo *)0x0);
        from = (ICubeModel *)TypeInfo__System__Byte;
        if (byteCorners == (Byte__Array *)0x0) {
          pAStack_20 = (Array *)0x0;
        }
        else {
          pAStack_20 = (Array *)func_?();
          if (pAStack_20 == (Array *)0x0) goto code_?;
        }
        pAVar26 = pAStack_20;
        pMVar12 = (MethodInfo *)from;
        if (pLStack_21 != (List_1_UnityEngine_Vector2_ *)0x0) {
          pLVar27 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                   List_1_UnityEngine_Vector2__GetEnumerator
                             (&LStack_15,pLStack_21,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                             );
          pLStack_8 = pLVar27->l;
          pIStack_9 = (Il2CppMethodPointer)pLVar27->next;
          pCStack_10 = (CubeBase *)pLVar27->ver;
          pcStack_11 = (char *)(pLVar27->current).x;
          uStack_1._0_1_ = 0;
          uStack_1._1_1_ = 0;
          uStack_1._2_1_ = 0;
          uStack_1._3_1_ = 0;
          while( true ) {
            uVar18 = (undefined2)((uint)method_00 >> 0x10);
            cVar28 = func_?();
            if (cVar28 == '\0') {
              *puStack_13 = 0xbe;
              uStack_1._0_1_ = 0xff;
              uStack_1._1_1_ = 0xff;
              uStack_1._2_1_ = 0xff;
              uStack_1._3_1_ = 0xff;
              func_?((short)&pLStack_8,
                              (short)
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                             );
              *unaff_FS_OFFSET = pMStack_3;
              return;
            }
            pMVar12 = (MethodInfo *)&pLStack_8;
            IVar22 = GUICellCursor::GUICellCursor_get_LocalPos
                               ((GUICellCursor *)&stack0xffffffc4,pMVar12);
            uVar29 = (undefined2)((uint)pMVar12 >> 0x10);
            uVar30 = *IVar22._0_4_;
            uVar31 = *(undefined2 *)(IVar22._0_4_ + 1);
            if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
              uVar18 = 0x1037;
              func_?(TypeInfo__MV__WorldObject__IntVector);
            }
            method_00 = (MethodInfo *)CONCAT22(uVar18,uVar31);
            i1.z = SUB42(fStack_24,0);
            i1._0_4_ = &LStack_15.current;
            i2.y = uVar29;
            i2.x = uStack_25;
            i2.z = (int16_t)uVar30;
            IVar22 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                               (i1,i2,method_00);
            apLStack_23[0] = (List_1_UnityEngine_Vector2_ *)*IVar22._0_4_;
            uVar18 = *(undefined2 *)(IVar22._0_4_ + 1);
            from = (ICubeModel *)CONCAT22(uVar18,from._0_2_);
            if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MV__WorldObject__CubeBase);
            }
            byteCorners = MVWorldObject.dll::MV::WorldObject::CubeBase::
                          CubeBase_get_IdentityByteCorners((MethodInfo *)0x0);
            pMVar12 = (MethodInfo *)from;
            if (pAVar26 == (Array *)0x0) break;
            pLStack_21 = (List_1_UnityEngine_Vector2_ *)
                         mscorlib.dll::System::Array::Array_Clone(pAVar26,(MethodInfo *)0x0);
            this_00 = (CubeBase *)func_?();
            faceMaterials = (Byte__Array *)func_?();
            MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                      (this_00,byteCorners,faceMaterials,(MethodInfo *)0x0);
            pLStack_8 = apLStack_23[0];
            pIStack_9 = (Il2CppMethodPointer)CONCAT22(pIStack_9._2_2_,uVar18);
            pCStack_10 = this_00;
            func_?();
            pAVar26 = pAStack_20;
          }
        }
      }
    }
  }
  from = (ICubeModel *)pMVar12;
  func_?(0);
code_?:
  func_?(byteCorners,from);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* Void AddUnindentedCube(ICubeModel, ICubeModel, IntVector) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_AddUnindentedCube
               (ICubeModel *from,ICubeModel *to,IntVector fromPos,MethodInfo *method)

{
  pIVar1 = from;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  pCStack_5 = (CubeBase *)0x0;
  if (((from != (ICubeModel *)0x0) &&
      (this = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)func_?(1,(short)TypeInfo__MV__WorldObject__ICubeModel,from,fromPos._0_4_,
                                 fromPos.z),
      this != (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)0x0)) &&
     (this_00 = (Array *)System.dll::System::Collections::Generic::
                         SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                         ::Single,System::Object]::
                         SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                   (this,(MethodInfo *)0x0), this_00 != (Array *)0x0)) {
    unaff_EDI = (MethodInfo *)mscorlib.dll::System::Array::Array_Clone(this_00,(MethodInfo *)0x0);
    pBStack_6 = TypeInfo__System__Byte;
    if (unaff_EDI == (MethodInfo *)0x0) {
      from = (ICubeModel *)0x0;
    }
    else {
      from = (ICubeModel *)func_?(unaff_EDI,TypeInfo__System__Byte);
      if (from == (ICubeModel *)0x0) goto code_?;
    }
    puVar7 = (undefined8 *)
             func_?(auStack_8,0,TypeInfo__MV__WorldObject__ICubeModel,pIVar1);
    uStack_2 = *puVar7;
    uStack_3 = *(undefined4 *)(puVar7 + 1);
    fVar9 = (float10)func_?(&uStack_2,0,0);
    fStack_10 = (float)fVar9;
    if (to != (ICubeModel *)0x0) {
      uVar11 = 0;
      puVar12 = (ulonglong *)
               func_?((short)auStack_8,0,TypeInfo__MV__WorldObject__ICubeModel,to);
      uStack_4 = *puVar12;
      pCStack_5 = *(CubeBase **)(puVar12 + 1);
      fVar9 = (float10)func_?(&uStack_4,0,0);
      fStack_13 = (float)((float10)fStack_10 / fVar9);
      unaff_EDI = (MethodInfo *)(int)((float10)fStack_10 / fVar9);
      if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      IVar14.z = fromPos.x;
      IVar14._0_4_ = &fromPos;
      IVar14 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply_1
                        (IVar14,CONCAT22(uVar11,fromPos.z),unaff_EDI);
      fStack_10 = 0.0;
      pBStack_6 = (Byte__Array__Class *)*IVar14._0_4_;
      uStack_15 = *(undefined2 *)(IVar14._0_4_ + 1);
      uStack_16 = SUB42(pBStack_6,0);
      uStack_17 = (undefined2)((uint)pBStack_6 >> 0x10);
      if (0 < (int)unaff_EDI) {
        do {
          iVar18 = 0;
          iStack_19 = (int)&(pBStack_6->_0).image + (int)fStack_10;
          do {
            iVar20 = 0;
            iStack_21 = CONCAT22(uStack_15,uStack_17) + iVar18;
            do {
              in_stack_22 = (undefined2)((uint)iVar18 >> 0x10);
              fromPos.z = (int16_t)iVar18;
              uStack_4 = uStack_4 & 0xffffffff00000000;
              uStack_23 = 0;
              uStack_24 = 0;
              func_?(&uStack_23,iStack_19,iStack_21,CONCAT22(uStack_25,uStack_15) + iVar20);
              if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000
                   ) != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MV__WorldObject__CubeBase);
              }
              pBStack_26 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                           CubeBase_get_IdentityByteCorners((MethodInfo *)0x0);
              if (from == (ICubeModel *)0x0) goto code_?;
              pOVar27 = mscorlib.dll::System::Array::Array_Clone((Array *)from,(MethodInfo *)0x0);
              this_01 = (CubeBase *)func_?(TypeInfo__MV__WorldObject__CubeBase);
              method_00 = (MethodInfo *)0x0;
              faceMaterials = (Byte__Array *)func_?(pOVar27,TypeInfo__System__Byte);
              MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                        (this_01,pBStack_26,faceMaterials,method_00);
              uStack_4._0_6_ = CONCAT24(uStack_24,uStack_23);
              pCStack_5 = this_01;
              func_?(2,TypeInfo__MV__WorldObject__ICubeModel,to);
              iVar18 = CONCAT22(in_stack_22,fromPos.z);
              unaff_EDI = (MethodInfo *)(int)fStack_13;
              iVar20 = iVar20 + 1;
            } while (iVar20 < (int)unaff_EDI);
            iVar18 = CONCAT22(in_stack_22,fromPos.z) + 1;
          } while (iVar18 < (int)unaff_EDI);
          fStack_10 = (float)((int)fStack_10 + 1);
        } while ((int)fStack_10 < (int)unaff_EDI);
      }
      return;
    }
  }
code_?:
  func_?(0);
code_?:
  func_?(unaff_EDI,pBStack_6);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* List`1[MoveCubeFromCoarseToFine+ValidPos] CreateValidPosGrid(Int32) */

List_1_MoveCubeFromCoarseToFine_ValidPos_ *
Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_CreateValidPosGrid
          (int32_t scaleFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                     ((Vector3 *)&stack0xffffffc0,*pVVar1,(float)scaleFactor,(MethodInfo *)0x0);
  uStack_2 = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                     ((Vector3 *)&stack0xffffffc0,*pVVar1,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffcc,*pVVar1,0.5,(MethodInfo *)0x0);
  fVar4 = pVVar1->x;
  this = (List_1_UnityEngine_Vector4_ *)func_?();
  puVar5 = &UNK_?;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,
             MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__List__
            );
  if (0 < scaleFactor + 1) {
    do {
      iVar6 = 0;
      do {
        pIVar7 = (IntVector__Class *)0x0;
        iVar8 = 0;
        puVar9 = &UNK_?;
        func_?();
        if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) !=
             0) && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
          pIVar7 = TypeInfo__MV__WorldObject__IntVector;
          func_?();
        }
        this = (List_1_UnityEngine_Vector4_ *)((ulonglong)uVar3 >> 0x20);
        iV.z = iVar8;
        iV._0_4_ = puVar9;
        vector3.z = (float)pIVar7;
        uVar3._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        vector3.x = (float)uStack_2;
        vector3.y = (float)uVar3._4_4_;
        pVVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply_2
                           ((Vector3 *)&stack0xffffffb4,iV,vector3,(MethodInfo *)0x0);
        uVar10._0_4_ = pVVar1->x;
        uVar10._4_4_ = pVVar1->y;
        fVar11 = pVVar1->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        scaleFactor = (int32_t)uVar10;
        uVar3 = CONCAT44(puVar5,fVar4);
        a.z = (float)pIVar7;
        a.x = fVar4;
        a.y = (float)puVar5;
        b.z = fVar11;
        b.x = (float)uVar10;
        b.y = SUB84(uVar10,4);
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffa8,a,b,(MethodInfo *)0x0);
        iVar12 = (int)uVar3;
        uVar13._0_4_ = pVVar1->x;
        uVar13._4_4_ = pVVar1->y;
        fVar11 = pVVar1->z;
        this_00 = (MoveCubeFromCoarseToFine_ValidPos *)func_?();
        fVar4 = (float)uVar13;
        puVar5 = SUB84(uVar13,4);
        pos.z = fVar11;
        pos.x = (float)uVar13;
        pos.y = SUB84(uVar13,4);
        MoveCubeFromCoarseToFine+ValidPos::MoveCubeFromCoarseToFine_ValidPos__ctor
                  (this_00,1,pos,(MethodInfo *)0x0);
        if (this == (List_1_UnityEngine_Vector4_ *)0x0) {
          func_?();
          pcVar14 = (code *)swi(3);
          pLVar15 = (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)(*pcVar14)();
          return pLVar15;
        }
        uVar3 = 0x10376d8310376cd9;
        pMVar16 = 
        MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__Add_MoveCubeFromCoarseToFine__ValidPos_
        ;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)this_00,
                   MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__Add_MoveCubeFromCoarseToFine__ValidPos_
                  );
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)pMVar16);
    } while ((iVar12 + 1 < (int)pMVar16) || (scaleFactor + 1 < (int)pMVar16));
  }
  return (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)this;
}


/* List`1[UnityEngine.Plane] GetTestPlanes(ICubeModel, IntVector) */

List_1_UnityEngine_Plane_ *
Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_GetTestPlanes
          (ICubeModel *from,IntVector fromPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVStack_1 = (Vector3__Array *)0x0;
  pVStack_2 = (Vector3__Array *)0x0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  fStack_14 = 0.0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = 0;
  fStack_18 = 0.0;
  if ((from != (ICubeModel *)0x0) &&
     (this = (CubeBase *)
             func_?(1,TypeInfo__MV__WorldObject__ICubeModel,from,fromPos._0_4_,fromPos.z),
     this != (CubeBase *)0x0)) {
    pVStack_1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                           (this,(MethodInfo *)0x0);
    pVStack_2 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
    this_00 = (List_1_UnityEngine_UILineInfo_ *)
              func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Plane>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__List__);
    if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    pFStack_19 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_FaceFlagsArray
                           ((MethodInfo *)0x0);
    uVar20 = 0;
    if (pFStack_19 != (FaceFlags__Enum__Array *)0x0) {
      do {
        if ((int)pFStack_19->max_length <= (int)uVar20) {
          return (List_1_UnityEngine_Plane_ *)this_00;
        }
        if (pFStack_19->max_length <= uVar20) goto code_?;
        bVar21 = *(byte *)((int)pFStack_19->vector + uVar20);
        bVar22 = SubscribableVariableBase`1[System::Boolean]::
                SubscribableVariableBase_1_System_Boolean__get_Value
                          ((SubscribableVariableBase_1_System_Boolean_ *)this,(MethodInfo *)0x0);
        if ((bVar21 & bVar22) == 0) {
          if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MV__WorldObject__CubeBase);
          }
          face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                           (CONCAT22(in_stack_23,CONCAT11(fromPos.z._1_1_,bVar21)),
                            (MethodInfo *)0x0);
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
                    (&pVStack_1,&pVStack_2,face,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
            func_?();
          }
          bVar22 = MoveCubeFromCoarseToFine_IsFaceIndented(face,&pVStack_2,(MethodInfo *)0x0);
          if (bVar22 != 0) {
            if (pVStack_2 == (Vector3__Array *)0x0) break;
            uStack_24 = 0;
            puVar25 = (undefined8 *)func_?();
            uStack_26 = *puVar25;
            fStack_27 = *(float *)(puVar25 + 1);
            if (pVStack_2 == (Vector3__Array *)0x0) break;
            puVar25 = (undefined8 *)func_?(3);
            uStack_28 = *puVar25;
            uVar29 = *(undefined4 *)(puVar25 + 1);
            if (pVStack_2 == (Vector3__Array *)0x0) break;
            puVar25 = (undefined8 *)func_?(2);
            func_?(&uStack_11,uStack_26,fStack_27,(int)uStack_28,
                            (int)((ulonglong)uStack_28 >> 0x20),uVar29,(int)*puVar25,
                            (int)((ulonglong)*puVar25 >> 0x20),*(undefined4 *)(puVar25 + 1),0);
            if (pVStack_2 == (Vector3__Array *)0x0) break;
            puVar25 = (undefined8 *)func_?(2);
            uStack_28 = *puVar25;
            fStack_27 = *(float *)(puVar25 + 1);
            if (pVStack_2 == (Vector3__Array *)0x0) break;
            puVar25 = (undefined8 *)func_?(1);
            uStack_26 = *puVar25;
            uVar29 = *(undefined4 *)(puVar25 + 1);
            if (pVStack_2 == (Vector3__Array *)0x0) break;
            puVar25 = (undefined8 *)func_?(0);
            func_?(&uStack_15,uStack_28,fStack_27,(int)uStack_26,
                            (int)((ulonglong)uStack_26 >> 0x20),uVar29,(int)*puVar25,
                            (int)((ulonglong)*puVar25 >> 0x20),*(undefined4 *)(puVar25 + 1),0);
            puVar25 = (undefined8 *)func_?(auStack_30,&uStack_11,0);
            uStack_28 = *puVar25;
            fVar31 = *(float *)(puVar25 + 1);
            puVar25 = (undefined8 *)func_?(auStack_32,&uStack_15,0);
            uStack_26 = *puVar25;
            fStack_27 = *(float *)(puVar25 + 1);
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            a.z = fVar31;
            a.x = (float)(undefined4)uStack_28;
            a.y = (float)uStack_28._4_4_;
            b.z = fStack_27;
            b.x = (float)(undefined4)uStack_26;
            b.y = (float)uStack_26._4_4_;
            pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               (&VStack_34,a,b,(MethodInfo *)0x0);
            uStack_3._0_4_ = pVVar33->x;
            uStack_3._4_4_ = pVVar33->y;
            fStack_4 = pVVar33->z;
            fVar35 = (float10)func_?(&uStack_3,0);
            fStack_27 = (float)fVar35;
            uStack_36 = 0;
            if (fStack_27 == 0.0) {
              puVar25 = (undefined8 *)func_?();
              uStack_5 = *puVar25;
              uStack_6 = *(undefined4 *)(puVar25 + 1);
              fVar35 = (float10)func_?(&uStack_5);
              fStack_27 = (float)fVar35;
              if (fStack_27 != 0.0) {
                uVar29 = uStack_11;
                uVar37 = uStack_12;
                uVar38 = uStack_13;
                fVar31 = fStack_14;
                if (this_00 != (List_1_UnityEngine_UILineInfo_ *)0x0) goto code_?;
                break;
              }
            }
            else {
              puVar25 = (undefined8 *)func_?();
              uStack_7 = *puVar25;
              uStack_8 = *(undefined4 *)(puVar25 + 1);
              fVar35 = (float10)func_?(&uStack_7);
              fStack_27 = (float)fVar35;
              if (fStack_27 != 0.0) {
                if (this_00 == (List_1_UnityEngine_UILineInfo_ *)0x0) break;
                item.height = uStack_12;
                item.startCharIdx = uStack_11;
                item.topY = (float)uStack_13;
                item.leading = fStack_14;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UILineInfo]::
                List_1_UnityEngine_UILineInfo__Add
                          (this_00,item,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__Add_UnityEngine__Plane_
                          );
              }
              puVar25 = (undefined8 *)func_?(&uStack_36,&uStack_15,0);
              uStack_9 = *puVar25;
              uStack_10 = *(undefined4 *)(puVar25 + 1);
              fVar35 = (float10)func_?(&uStack_9,0);
              fStack_27 = (float)fVar35;
              if (fStack_27 != 0.0) {
                uVar29 = uStack_15;
                uVar37 = uStack_16;
                uVar38 = uStack_17;
                fVar31 = fStack_18;
                if (this_00 == (List_1_UnityEngine_UILineInfo_ *)0x0) break;
code_?:
                item_00.height = uVar37;
                item_00.startCharIdx = uVar29;
                item_00.topY = (float)uVar38;
                item_00.leading = fVar31;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UILineInfo]::
                List_1_UnityEngine_UILineInfo__Add
                          (this_00,item_00,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__Add_UnityEngine__Plane_
                          );
              }
            }
          }
        }
        uVar20 = uVar20 + 1;
      } while( true );
    }
  }
  func_?(0);
code_?:
  uVar29 = func_?(0);
  func_?(uVar29);
  pcVar39 = (code *)swi(3);
  pLVar40 = (List_1_UnityEngine_Plane_ *)(*pcVar39)();
  return pLVar40;
}


/* List`1[MV.WorldObject.IntVector] GetValidCubes(List`1[MoveCubeFromCoarseToFine+ValidPos], Int32)
    */

List_1_MV_WorldObject_IntVector_ *
Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_GetValidCubes
          (List_1_MoveCubeFromCoarseToFine_ValidPos_ *validPoses,int32_t scaleFactor,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  iStack_2 = 0;
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
  pLStack_3 = this;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__
            );
  iStack_4 = 0;
  if (0 < scaleFactor) {
    do {
      iStack_5 = 0;
      do {
        iStack_6 = 0;
        do {
          func_?(&uStack_1,iStack_4,iStack_5,(short)iStack_6,0);
          cVar7 = '\x01';
          if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
            func_?(TypeInfo__MoveCubeFromCoarseToFine);
          }
          iVar8 = 0;
          pIVar9 = TypeInfo__MoveCubeFromCoarseToFine->static_fields->intCubeCorners;
code_?:
          this = pLStack_3;
          uVar10 = (undefined2)((uint)in_stack_11 >> 0x10);
          if (pIVar9 == (IntVector__Array *)0x0) {
code_?:
            func_?(0);
            pcVar12 = (code *)swi(3);
            pLVar13 = (List_1_MV_WorldObject_IntVector_ *)(*pcVar12)();
            return pLVar13;
          }
          if (iVar8 < (int)pIVar9->max_length) {
            puVar14 = (undefined4 *)func_?(iVar8);
            uVar15 = uStack_1;
            iStack_16 = iStack_2;
            uStack_17 = *puVar14;
            sStack_18 = *(short *)(puVar14 + 1);
            if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
              uVar10 = 0x1037;
              func_?(TypeInfo__MV__WorldObject__IntVector);
            }
            in_stack_11 = (MethodInfo *)CONCAT22(uVar10,sStack_18);
            i1.z = (int16_t)uVar15;
            i1._0_4_ = auStack_19;
            i2.y = in_stack_20;
            i2.x = iStack_16;
            i2.z = (int16_t)uStack_17;
            IVar21 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                              (i1,i2,in_stack_11);
            uVar15 = *IVar21._0_4_;
            sStack_18 = *(short *)(IVar21._0_4_ + 1);
            uStack_22 = uVar15;
            if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
              func_?(TypeInfo__MoveCubeFromCoarseToFine);
            }
            if (validPoses == (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)0x0)
            goto code_?;
            pIVar23 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)validPoses,
                                ((int)(short)uStack_22 * (scaleFactor + 1) +
                                (int)(short)((uint)uVar15 >> 0x10)) * (scaleFactor + 1) +
                                (int)sStack_18,
                                MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__get_Item_int_
                               );
            if (pIVar23 == (IEventSystemHandler *)0x0) goto code_?;
            cVar7 = *(char *)&pIVar23[1].klass;
            this = pLStack_3;
            if (cVar7 == '\0') goto code_?;
            iVar8 = iVar8 + 1;
            goto code_?;
          }
          if (cVar7 != '\0') {
            if (pLStack_3 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
            IVar21.z = iStack_2;
            IVar21.x = (undefined2)uStack_1;
            IVar21.y = uStack_1._2_2_;
            mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
            List_1_MV_WorldObject_IntVector__Add
                      ((List_1_MV_WorldObject_IntVector_ *)pLStack_3,IVar21,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                      );
          }
code_?:
          iStack_6 = iStack_6 + 1;
        } while (iStack_6 < scaleFactor);
        iStack_5 = iStack_5 + 1;
      } while (iStack_5 < scaleFactor);
      iStack_4 = iStack_4 + 1;
    } while (iStack_4 < scaleFactor);
  }
  return (List_1_MV_WorldObject_IntVector_ *)this;
}


/* Int32 IntVectorToValidPosIndex(IntVector, Int32) */

int32_t Assembly-CSharp.dll::MoveCubeFromCoarseToFine::
        MoveCubeFromCoarseToFine_IntVectorToValidPosIndex
                  (IntVector intVector,int32_t validPosSize,MethodInfo *method)

{
  return ((int)intVector.y + intVector.x * validPosSize) * validPosSize + (int)intVector.z;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean IsFaceIndented(Face, Vector3[] ByRef) */

bool Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_IsFaceIndented
               (Face__Enum face,Vector3__Array **faceCorners,MethodInfo *method)

{
  puVar1 = &stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  uVar2 = 0;
  fStack_3 = _UNK_?;
  switch(face) {
  case Face__Enum_Top:
    uVar2 = 1;
    break;
  case Face__Enum_Bottom:
    uVar2 = 1;
    fStack_3 = _UNK_?;
    break;
  case Face__Enum_Front:
    uVar2 = 2;
    fStack_3 = _UNK_?;
    break;
  case Face__Enum_Back:
    uVar2 = 2;
    break;
  case Face__Enum_Left:
    fStack_3 = _UNK_?;
  case Face__Enum_Right:
    uVar2 = 0;
  }
  from = (ICubeModel *)0x0;
  pVVar4 = *faceCorners;
  cVar5 = '\0';
  uVar6 = pVVar4 == (Vector3__Array *)0x0;
  if ((bool)uVar6) {
    func_?();
  }
  else {
    unaff_EDI = (MethodInfo *)pVVar4->vector;
    while( true ) {
      pIVar7 = (ICubeModel *)pVVar4->max_length;
      if ((int)pIVar7 <= (int)from) {
        return 0;
      }
      cVar5 = from < pIVar7;
      uVar6 = from == pIVar7;
      if (!(bool)cVar5) break;
      fVar8 = (float10)func_?();
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Approximately
                        ((float)fVar8,fStack_3,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        return 1;
      }
      from = (ICubeModel *)((int)&from->klass + 1);
      unaff_EDI = (MethodInfo *)&unaff_EDI->name;
    }
  }
  uVar10 = func_?();
  uVar11 = (undefined1)uVar10;
  uVar12 = (undefined2)((uint)uVar10 >> 8);
  uStack_13 = (undefined1)((uint)uVar10 >> 0x18);
  uVar10 = func_?();
  if ((bool)uVar6) {
    *(char *)(uVar2 + 0x75) = *(char *)(uVar2 + 0x75) + (char)((uint)extraout_ECX >> 8) + cVar5;
    in_AF = 9 < ((byte)uVar10 & 0xf) | in_AF;
    bVar14 = (byte)uVar10 + in_AF * '\x06' & 0xf;
    pcVar15 = (char *)((int)&unaff_EDI[2].return_type + 1);
    *pcVar15 = *pcVar15 + in_AF;
    bVar16 = 9 < bVar14 | in_AF;
    uVar17 = CONCAT31((int3)((uint)uVar10 >> 8),bVar14 + bVar16 * '\x06') & 0xffff000f;
    cVar5 = (char)uVar17;
    bVar18 = (char)((uint)uVar10 >> 8) + in_AF + bVar16;
    pcVar15 = (char *)CONCAT22((short)(uVar17 >> 0x10),CONCAT11(bVar18,cVar5));
    pbVar19 = (byte *)(uVar2 + 0x9a103775);
    bVar14 = *pbVar19;
    bVar20 = *pbVar19;
    *pbVar19 = bVar20 + extraout_DL + bVar16;
    if (*pbVar19 == 0) {
      pcVar15 = (char *)((int)&unaff_EDI[-0x114fed9].token + 1);
      *pcVar15 = *pcVar15 + bVar18 +
                 (CARRY1(bVar14,extraout_DL) || CARRY1(bVar20 + extraout_DL,bVar16));
      pcVar21 = (code *)swi(3);
      bVar9 = (*pcVar21)();
      return bVar9;
    }
    *pcVar15 = *pcVar15 + cVar5;
    *(char *)(uVar2 + 0xec83107d) = *(char *)(uVar2 + 0xec83107d) + (char)extraout_ECX;
    pbVar19 = (byte *)((int)&from[-0xf].klass + 3);
    *pbVar19 = *pbVar19 | bVar18;
    puVar1 = (undefined1 *)CONCAT13(uStack_13,CONCAT21(uVar12,uVar11));
    piVar22 = (int *)(CONCAT31((int3)((uint)pcVar15 >> 8),cVar5 + -0x75) ^ 0xADDR);
    method = unaff_EDI;
  }
  else {
    puVar23 = (uint *)(uVar2 + 0x5c604c4);
    *puVar23 = *puVar23 + 1;
    if ((POPCOUNT(*puVar23 & 0xff) & 1U) == 0) {
      (*(code *)&unaff_EDI[1].parameters_count)();
      return 1;
    }
    in(0x10);
    piVar22 = (int *)(uVar2 + 0xf6850875);
    *piVar22 = *piVar22 + extraout_ECX;
    if (*piVar22 == 0) goto code_?;
    piVar22 = (int *)&stack0xffffffcd;
    uVar2 = (uint)in_stack_24;
  }
  *piVar22 = (int)method;
  iVar25 = (int16_t)uVar2;
  *(int16_t *)(piVar22 + 1) = iVar25;
  this = (SubscribableVariableBase_1_System_Boolean_ *)func_?(1);
  if (this != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    bVar9 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value(this,(MethodInfo *)0x0);
    if (bVar9 != 0x3f) {
      if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
        func_?();
      }
      fromPos.z = iVar25;
      fromPos._0_4_ = method;
      MoveCubeFromCoarseToFine_AddIndentedCube
                (from,*(ICubeModel **)(puVar1 + 0xc),fromPos,(MethodInfo *)0x0);
      return extraout_AL;
    }
    if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
      func_?();
    }
    fromPos_00.z = iVar25;
    fromPos_00._0_4_ = method;
    MoveCubeFromCoarseToFine_AddUnindentedCube
              (from,*(ICubeModel **)(puVar1 + 0xc),fromPos_00,(MethodInfo *)0x0);
    return extraout_AL_00;
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  bVar9 = (*pcVar21)();
  return bVar9;
}


/* Void MoveCube(ICubeModel, ICubeModel, IntVector) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
               (ICubeModel *from,ICubeModel *to,IntVector fromPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  if (from != (ICubeModel *)0x0) {
    this = (SubscribableVariableBase_1_System_Boolean_ *)
           func_?(1,TypeInfo__MV__WorldObject__ICubeModel,from,fromPos._0_4_,fromPos.z);
    if (this != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
      bVar1 = SubscribableVariableBase`1[System::Boolean]::
              SubscribableVariableBase_1_System_Boolean__get_Value(this,(MethodInfo *)0x0);
      if (bVar1 != 0x3f) {
        if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
          func_?(TypeInfo__MoveCubeFromCoarseToFine);
        }
        MoveCubeFromCoarseToFine_AddIndentedCube(from,to,fromPos,(MethodInfo *)0x0);
        return;
      }
      if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
        func_?(TypeInfo__MoveCubeFromCoarseToFine);
      }
      MoveCubeFromCoarseToFine_AddUnindentedCube(from,to,fromPos,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetValidPoints(List`1[UnityEngine.Plane], List`1[MoveCubeFromCoarseToFine+ValidPos]) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_SetValidPoints
               (List_1_UnityEngine_Plane_ *testPlanes,
               List_1_MoveCubeFromCoarseToFine_ValidPos_ *validPoses,MethodInfo *method)

{
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff64;
  puVar6 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  auStack_7._24_4_ = 0.0;
  iStack_8 = 0;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  fStack_11 = 0.0;
  fStack_12 = 0.0;
  auStack_7._16_4_ = 0.0;
  auStack_7._20_4_ = 0.0;
  auStack_7._0_4_ = (TierUnlockedPopupContentBase__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = (Component_1__Fields)0x0;
  auStack_7._12_4_ = 0.0;
  CStack_13.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_13.monitor = (MonitorData *)0x0;
  CStack_13.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_13.fields.syncRoot = (Object *)0x0;
  func_?();
  iStack_14 = -1;
  puStack_15 = &stack0xffffff64;
  puStack_5 = &stack0xffffff64;
  if (testPlanes != (List_1_UnityEngine_Plane_ *)0x0) {
    puStack_15 = &stack0xffffff64;
    puStack_5 = &stack0xffffff64;
    pLVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
             List_1_UnityEngine_Vector4__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Vector4_ *)(auStack_7 + 0x1c),
                        (List_1_UnityEngine_Vector4_ *)testPlanes,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__GetEnumerator__
                       );
    auStack_7._0_4_ = pLVar16->l;
    auStack_7._4_4_ = pLVar16->next;
    auStack_7._8_4_ = pLVar16->ver;
    auStack_7._12_4_ = (pLVar16->current).x;
    auStack_7._16_4_ = (pLVar16->current).y;
    auStack_7._20_4_ = (pLVar16->current).z;
    auStack_7._24_4_ = (pLVar16->current).w;
    uStack_1 = 0;
    uStack_2 = 0;
    iVar17 = -1;
    while( true ) {
      iVar18 = iVar17;
      cVar19 = func_?();
      if (cVar19 == '\0') {
        *(undefined4 *)(puStack_15 + iVar18 * 4 + 4) = 0x8f;
        uStack_1 = 0xff;
        uStack_2 = 0xffffff;
        func_?(auStack_7,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      pCVar20 = TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_get_BackgroundColor
                         ((Color *)(auStack_21 + 0x10),(TierUnlockedPopupContentBase *)auStack_7,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__get_Current__
                         );
      fStack_9 = pCVar20->r;
      fStack_10 = pCVar20->g;
      fStack_11 = pCVar20->b;
      fStack_12 = pCVar20->a;
      if (validPoses == (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)0x0) break;
      pLVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_21,
                          (List_1_UnityEngine_Color32_ *)validPoses,
                          MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__GetEnumerator__
                         );
      CStack_13.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar22->l
      ;
      CStack_13.monitor = (MonitorData *)pLVar22->next;
      CStack_13.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar22->ver;
      CStack_13.fields.syncRoot = (Object *)(pLVar22->current).rgba;
      uStack_1 = 1;
      while (cVar19 = func_?(&CStack_13,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__MoveNext__
                                    ), cVar19 != '\0') {
        pOVar23 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_13,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__get_Current__
                           );
        if (pOVar23 == (Object *)0x0) goto code_?;
        if ((*(char *)&pOVar23[1].klass != '\0') &&
           (fVar24 = (float10)func_?(&fStack_9,*(undefined8 *)&pOVar23[1].monitor,
                                              pOVar23[2].monitor,0), _UNK_? <= (float)fVar24))
        {
          *(undefined1 *)&pOVar23[1].klass = 0;
        }
      }
      iVar25 = iVar18 + 1;
      uStack_1 = 0;
      *(undefined4 *)(puStack_15 + iVar25 * 4) = 0x70;
      iStack_14 = iVar25;
      func_?(&CStack_13);
      if (iStack_8 != 0) goto code_?;
      iVar17 = iVar25;
      if (((iVar25 != -1) && (*(int *)(puStack_15 + iVar25 * 4) == 0x70)) &&
         (iVar17 = iVar18, iStack_14 = iVar18, iVar25 < 0)) {
        iVar17 = iVar25;
        iStack_14 = iVar25;
      }
    }
  }
code_?:
  iVar25 = 0;
  func_?(0);
code_?:
  func_?();
  func_?(iVar25,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* MoveCubeFromCoarseToFine() */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,8);
  uVar2 = 0;
  if (pIVar1 == (IntVector__Array *)0x0) {
    func_?(0);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
code_?:
    uVar4 = 0;
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(uVar4,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(uVar4,uVar2);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
  }
  else {
    uStack_5 = 0;
    iStack_6 = 0;
    func_?(&uStack_5,0,0,0);
    uVar2 = 0;
    if (pIVar1->max_length == 0) goto code_?;
    pIVar1->vector[0].x = (undefined2)uStack_5;
    pIVar1->vector[0].y = uStack_5._2_2_;
    pIVar1->vector[0].z = iStack_6;
    uStack_7 = 0;
    iStack_8 = 0;
    func_?(&uStack_7,1,0,0,0);
    uVar2 = 0;
    if (pIVar1->max_length < 2) goto code_?;
    pIVar1->vector[1].x = (undefined2)uStack_7;
    pIVar1->vector[1].y = uStack_7._2_2_;
    pIVar1->vector[1].z = iStack_8;
    uStack_9 = 0;
    iStack_10 = 0;
    func_?(&uStack_9,1,0,1);
    uVar2 = 0;
    if (pIVar1->max_length < 3) goto code_?;
    pIVar1->vector[2].x = (undefined2)uStack_9;
    pIVar1->vector[2].y = uStack_9._2_2_;
    pIVar1->vector[2].z = iStack_10;
    uStack_11 = 0;
    iStack_12 = 0;
    func_?(&uStack_11,0,0,1);
    uVar2 = 0;
    uVar4 = 0;
    if (pIVar1->max_length < 4) goto code_?;
    pIVar1->vector[3].x = (undefined2)uStack_11;
    pIVar1->vector[3].y = uStack_11._2_2_;
    pIVar1->vector[3].z = iStack_12;
    uStack_13 = 0;
    iStack_14 = 0;
    func_?(&uStack_13,0,1);
    uVar2 = 0;
    uVar4 = 0;
    if (pIVar1->max_length < 5) goto code_?;
    pIVar1->vector[4].x = (undefined2)uStack_13;
    pIVar1->vector[4].y = uStack_13._2_2_;
    pIVar1->vector[4].z = iStack_14;
    uStack_15 = 0;
    iStack_16 = 0;
    func_?(&uStack_15,1,1);
    uVar2 = 0;
    if (pIVar1->max_length < 6) goto code_?;
    pIVar1->vector[5].x = (undefined2)uStack_15;
    pIVar1->vector[5].y = uStack_15._2_2_;
    pIVar1->vector[5].z = iStack_16;
    uStack_17 = 0;
    iStack_18 = 0;
    func_?(&uStack_17,1,1,1);
    uVar2 = 0;
    if (6 < pIVar1->max_length) {
      pIVar1->vector[6].x = (undefined2)uStack_17;
      pIVar1->vector[6].y = uStack_17._2_2_;
      pIVar1->vector[6].z = iStack_18;
      uStack_19 = 0;
      iStack_20 = 0;
      func_?(&uStack_19,0,1,1);
      if (7 < pIVar1->max_length) {
        pIVar1->vector[7].x = (undefined2)uStack_19;
        pIVar1->vector[7].y = uStack_19._2_2_;
        pIVar1->vector[7].z = iStack_20;
        TypeInfo__MoveCubeFromCoarseToFine->static_fields->intCubeCorners = pIVar1;
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,uVar2);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}

