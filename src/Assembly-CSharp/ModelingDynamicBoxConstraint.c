
/* Vector3 CalcConstraintBoxCenter(MVCubeModelBase) */

Vector3 * Assembly-CSharp.dll::ModelingDynamicBoxConstraint::
          ModelingDynamicBoxConstraint_CalcConstraintBoxCenter
                    (Vector3 *__return_storage_ptr__,ModelingDynamicBoxConstraint *this,
                    MVCubeModelBase *model,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  IStack_2.x = 0;
  IStack_2.y = 0;
  IStack_2.z = 0;
  if (model != (MVCubeModelBase *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pBVar3 = MVCubeModelBase::MVCubeModelBase_GetBounds(aBStack_4,model,(MethodInfo *)0x0);
    fVar5 = _UNK_?;
    BStack_6.m_Extents.y = (pBVar3->m_Extents).y;
    BStack_6.m_Extents.z = (pBVar3->m_Extents).z;
    VStack_7.x = (pBVar3->m_Center).x;
    VStack_7.y = (pBVar3->m_Center).y;
    index = 0;
    VStack_7.z = (float)*(undefined8 *)&(pBVar3->m_Center).z;
    do {
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SharedCubeFunctions);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__SharedCubeFunctions);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SharedCubeFunctions);
      }
      if (((index != 0) && (index != 1)) && (index != 2)) {
        uVar8 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar9 = (IndexOutOfRangeException *)func_?(uVar8);
        message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                  (pIVar9,message,(MethodInfo *)0x0);
        uVar8 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
        FUN_?(pIVar9,uVar8);
        pcVar10 = (code *)swi(3);
        pVVar11 = (Vector3 *)(*pcVar10)();
        return pVVar11;
      }
      fVar12 = (float)FUN_?();
      if (fVar12 == 0.0) {
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                  (&VStack_7,index,method_00);
        fVar12 = (float)FUN_?();
        if (fVar12 != 0.0) {
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                    (&VStack_7,index,method_00);
          fVar12 = (float)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (&VStack_7,index,fVar12 - fVar5,method);
        }
      }
      else {
        IStack_1.x = 0;
        IStack_1.y = 0;
        IStack_1.z = 0;
        IStack_2.x = 0;
        IStack_2.y = 0;
        IStack_2.z = 0;
        pBVar3 = MVCubeModelBase::MVCubeModelBase_GetBounds(&BStack_6,model,(MethodInfo *)0x0);
        uVar13._0_4_ = (pBVar3->m_Center).x;
        uVar13._4_4_ = (pBVar3->m_Center).y;
        uVar14 = *(undefined8 *)&(pBVar3->m_Center).z;
        uVar8._0_4_ = (pBVar3->m_Extents).y;
        uVar8._4_4_ = (pBVar3->m_Extents).z;
        if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        method = (MethodInfo *)0x0;
        BStack_6.m_Center._0_8_ = uVar13;
        BStack_6._8_8_ = uVar14;
        BStack_6.m_Extents._4_8_ = uVar8;
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  (&IStack_1,&IStack_2,&BStack_6,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        iVar15 = IStack_1.z;
        iVar16 = IStack_2.z;
        iVar17 = IStack_2.x;
        iVar18 = IStack_1.x;
        iVar19 = IStack_1.y;
        method_00 = (MethodInfo *)(ulonglong)(ushort)(IStack_2.y - IStack_1.y);
        uVar20 = IStack_2.x - IStack_1.x;
        if (((index != 0) && (uVar20 = IStack_2.y - IStack_1.y, index != 1)) &&
           (uVar20 = IStack_2.z - IStack_1.z, index != 2)) {
          uVar8 = func_?(&TypeInfo__System__IndexOutOfRangeException);
          pIVar9 = (IndexOutOfRangeException *)func_?(uVar8);
          mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                    (pIVar9,(MethodInfo *)0x0);
          uVar8 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
          FUN_?(pIVar9,uVar8);
          pcVar10 = (code *)swi(3);
          pVVar11 = (Vector3 *)(*pcVar10)();
          return pVVar11;
        }
        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar11 = SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3
                            (&VStack_21,(MethodInfo *)0x0);
        VStack_22.x = pVVar11->x;
        VStack_22.y = pVVar11->y;
        VStack_22.z = pVVar11->z;
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (&VStack_22,index,method_00);
        if ((int)(short)(uVar20 + 1) == (int)fVar12) {
          if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (index != 0) {
            if (index == 1) {
              iVar17 = IStack_2.y;
              iVar18 = iVar19;
            }
            else {
              iVar17 = iVar16;
              iVar18 = iVar15;
              if (index != 2) {
                uVar8 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                pIVar9 = (IndexOutOfRangeException *)func_?(uVar8);
                mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                          (pIVar9,(MethodInfo *)0x0);
                uVar8 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_)
                ;
                FUN_?(pIVar9,uVar8);
                pcVar10 = (code *)swi(3);
                pVVar11 = (Vector3 *)(*pcVar10)();
                return pVVar11;
              }
            }
          }
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (&VStack_7,index,(float)(((int)iVar17 - (int)iVar18) / 2 + (int)iVar18),method
                    );
        }
      }
      index = index + 1;
    } while (index < 3);
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SharedCubeFunctions);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__SharedCubeFunctions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SharedCubeFunctions);
    }
    pSVar23 = TypeInfo__SharedCubeFunctions->static_fields;
    sVar24 = (pSVar23->constraint).x;
    sVar25 = (pSVar23->constraint).y;
    sVar26 = (pSVar23->constraint).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_21.x = (pVVar27->oneVector).x;
    VStack_21.y = (pVVar27->oneVector).y;
    fVar28 = ((float)(int)sVar26 - (pVVar27->oneVector).z) * fVar5;
    fVar29 = ((float)(int)sVar24 - VStack_21.x) * fVar5;
    fVar5 = ((float)(int)sVar25 - VStack_21.y) * fVar5;
    fVar30 = (float)((uint)fVar29 ^ _UNK_?);
    fVar31 = (float)((uint)fVar5 ^ _UNK_?);
    fVar12 = (float)((uint)fVar28 ^ _UNK_?);
    if ((fVar30 <= VStack_7.x) && (fVar30 = VStack_7.x, fVar29 < VStack_7.x)) {
      fVar30 = fVar29;
    }
    if ((fVar31 <= VStack_7.y) && (fVar31 = VStack_7.y, fVar5 < VStack_7.y)) {
      fVar31 = fVar5;
    }
    if ((fVar12 <= VStack_7.z) && (fVar12 = VStack_7.z, fVar28 < VStack_7.z)) {
      fVar12 = fVar28;
    }
    obj = (model->fields)._.transform;
    if (obj != (Transform *)0x0) {
      VStack_22.y = fVar31;
      VStack_22.x = fVar30;
      VStack_22.z = fVar12;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_7.x = 0.0;
      VStack_7.y = 0.0;
      VStack_7.z = 0.0;
      pvVar32 = (obj->fields)._._.m_CachedPtr;
      if (pvVar32 != (void *)0x0) {
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar10 = (code *)swi(3);
          pVVar11 = (Vector3 *)(*pcVar10)();
          return pVVar11;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar32,&VStack_22,&VStack_7);
        __return_storage_ptr__->x = VStack_7.x;
        __return_storage_ptr__->y = VStack_7.y;
        __return_storage_ptr__->z = VStack_7.z;
        return __return_storage_ptr__;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      pVVar11 = (Vector3 *)(*pcVar10)();
      return pVVar11;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pVVar11 = (Vector3 *)(*pcVar10)();
  return pVVar11;
}


/* Boolean CanAddCubeAt(IntVector) */

bool Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_CanAddCubeAt
               (ModelingDynamicBoxConstraint *this,IntVector *pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  fVar3 = (float)((uint)(float)(int)pos->x & _UNK_?);
  fVar4 = (float)((uint)(float)(int)pos->y & _UNK_?);
  fVar5 = (float)((uint)(float)(int)pos->z & _UNK_?);
  OVar6 = (this->fields)._Size_k__BackingField.x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar6;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  if (fVar3 <= (float)(iVar7 + -1)) {
    OVar6 = (this->fields)._Size_k__BackingField.y;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    OStackX_8 = OVar6;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    if (fVar4 <= (float)(iVar7 + -1)) {
      OVar6 = (this->fields)._Size_k__BackingField.z;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      OStackX_8 = OVar6;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
              ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
      if (fVar5 <= (float)(iVar7 + -1)) {
        this_00 = (this->fields).cubeModel;
        if (this_00 == (MVCubeModelBase *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        method_00 = (MethodInfo *)0x0;
        pBVar10 = MVCubeModelBase::MVCubeModelBase_GetBounds(aBStack_11,this_00,(MethodInfo *)0x0);
        fVar12 = _UNK_?;
        VStack_13.x = (pBVar10->m_Center).x;
        VStack_13.y = (pBVar10->m_Center).y;
        uVar14 = *(undefined8 *)&(pBVar10->m_Center).z;
        fVar3 = (pBVar10->m_Extents).y;
        fVar4 = (pBVar10->m_Extents).z;
        VStack_13.z = (float)uVar14;
        fStack_15 = (float)((ulonglong)uVar14 >> 0x20);
        fVar16 = (float)(int)pos->x - _UNK_?;
        fVar17 = (float)(int)pos->y - _UNK_?;
        index = 0;
        VStack_1.z = (float)(int)pos->z - _UNK_?;
        VStack_1.y = fVar17;
        VStack_1.x = fVar16;
        OStackX_8._0_4_ = VStack_1.z;
        aBStack_11[0].m_Center.z = (float)(int)pos->z + _UNK_?;
        aBStack_11[0].m_Center.y = (float)(int)pos->y + _UNK_?;
        aBStack_11[0].m_Center.x = (float)(int)pos->x + _UNK_?;
        fVar18 = fStack_15;
        fVar5 = VStack_1.z;
        fStack_19 = fVar3;
        fStack_20 = fVar4;
        fVar21 = VStack_13.z;
        fVar22 = VStack_13.y;
        fVar23 = VStack_13.x;
        while( true ) {
          fVar24 = fVar16;
          if (((index != 0) && (fVar24 = fVar17, index != 1)) && (fVar24 = fVar5, index != 2)) {
            uVar14 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            pIVar25 = (IndexOutOfRangeException *)func_?(uVar14);
            pSVar26 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                      (pIVar25,pSVar26,(MethodInfo *)0x0);
            uVar14 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
            FUN_?(pIVar25,uVar14);
            pcVar8 = (code *)swi(3);
            bVar9 = (*pcVar8)();
            return bVar9;
          }
          VStack_2.z = fVar21 - fVar4;
          VStack_2.y = fVar22 - fVar3;
          VStack_2.x = fVar23 - fVar18;
          fVar5 = fVar23 - fVar18;
          if (((index != 0) && (fVar5 = fVar22 - fVar3, index != 1)) &&
             (fVar5 = VStack_2.z, index != 2)) {
            uVar14 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            pIVar25 = (IndexOutOfRangeException *)func_?(uVar14);
            pSVar26 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                      (pIVar25,pSVar26,(MethodInfo *)0x0);
            uVar14 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
            FUN_?(pIVar25,uVar14);
            pcVar8 = (code *)swi(3);
            bVar9 = (*pcVar8)();
            return bVar9;
          }
          if (fVar24 < fVar5) {
            VStack_27.x = fVar23 - fVar18;
            VStack_27.z = fVar21 - fVar4;
            VStack_27.y = fVar22 - fVar3;
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (&VStack_1,index,method_00);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      (&VStack_27,index,fVar5,in_R9);
            fVar18 = ((fVar23 + fVar18) - VStack_27.x) * fVar12;
            fVar3 = ((fVar22 + fVar3) - VStack_27.y) * fVar12;
            fVar4 = ((fVar21 + fVar4) - VStack_27.z) * fVar12;
            fVar23 = fVar18 + VStack_27.x;
            fVar22 = fVar3 + VStack_27.y;
            VStack_13.z = fVar4 + VStack_27.z;
            VStack_13.y = fVar22;
            VStack_13.x = fVar23;
            fStack_15 = fVar18;
            fStack_19 = fVar3;
            fStack_20 = fVar4;
            fVar21 = VStack_13.z;
          }
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&aBStack_11[0].m_Center,index,method_00);
          VStack_2.z = fVar21 + fVar4;
          VStack_2.y = fVar22 + fVar3;
          VStack_2.x = fVar23 + fVar18;
          fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_2,index,method_00);
          if (fVar24 < fVar5) {
            aVStack_28[0].x = fVar23 + fVar18;
            aVStack_28[0].z = fVar21 + fVar4;
            aVStack_28[0].y = fVar22 + fVar3;
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (&aBStack_11[0].m_Center,index,method_00);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      (aVStack_28,index,fVar5,in_R9);
            fVar23 = fVar23 - fVar18;
            fVar22 = fVar22 - fVar3;
            fVar21 = fVar21 - fVar4;
            fVar18 = (aVStack_28[0].x - fVar23) * fVar12;
            fVar3 = (aVStack_28[0].y - fVar22) * fVar12;
            fVar4 = (aVStack_28[0].z - fVar21) * fVar12;
            fVar23 = fVar18 + fVar23;
            fVar22 = fVar3 + fVar22;
            VStack_13.z = fVar4 + fVar21;
            VStack_13.y = fVar22;
            VStack_13.x = fVar23;
            fStack_15 = fVar18;
            fStack_19 = fVar3;
            fStack_20 = fVar4;
            fVar21 = VStack_13.z;
          }
          index = index + 1;
          if (2 < index) break;
          fVar5 = (float)OStackX_8._0_4_;
        }
        IStackX_10.x = 0;
        IStackX_10.y = 0;
        IStackX_10.z = 0;
        OStackX_8 = (ObscuredShort)((ulonglong)OStackX_8 & 0xffff000000000000);
        if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        aBStack_11[0].m_Extents.x = fStack_15;
        aBStack_11[0].m_Center.z = VStack_13.z;
        aBStack_11[0].m_Extents.z = fStack_20;
        aBStack_11[0].m_Extents.y = fStack_19;
        aBStack_11[0].m_Center.x = VStack_13.x;
        aBStack_11[0].m_Center.y = VStack_13.y;
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  (&IStackX_10,(IntVector *)&OStackX_8,aBStack_11,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        sVar29 = OStackX_8.currentCryptoKey - IStackX_10.x;
        sVar30 = OStackX_8.hiddenValue - IStackX_10.y;
        sVar31 = OStackX_8.fakeValue - IStackX_10.z;
        OVar6 = (this->fields)._Size_k__BackingField.x;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        OStackX_8 = OVar6;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
                ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
        if ((short)(sVar29 + 1) <= iVar7) {
          OVar6 = (this->fields)._Size_k__BackingField.y;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          OStackX_8 = OVar6;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort
                  ::ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
          if ((short)(sVar30 + 1) <= iVar7) {
            OVar6 = (this->fields)._Size_k__BackingField.z;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            OStackX_8 = OVar6;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
            if ((short)(sVar31 + 1) <= iVar7) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


/* Void CubeModel_Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::ModelingDynamicBoxConstraint::
     ModelingDynamicBoxConstraint_CubeModel_Changed
               (ModelingDynamicBoxConstraint *this,CubeModelChangedEventArgs *e,MethodInfo *method)

{
  pVVar1 = ModelingDynamicBoxConstraint_CalcConstraintBoxCenter
                     (&VStack_2,this,(this->fields).cubeModel,(MethodInfo *)0x0);
  VStack_3.x = pVVar1->x;
  VStack_3.y = pVVar1->y;
  VStack_3.z = pVVar1->z;
  ModelingBoxConstraint::ModelingBoxConstraint_set_Center
            ((ModelingBoxConstraint *)this,&VStack_3,(MethodInfo *)0x0);
  return;
}


/* Void DetachFromCubeModel() */

void Assembly-CSharp.dll::ModelingDynamicBoxConstraint::
     ModelingDynamicBoxConstraint_DetachFromCubeModel
               (ModelingDynamicBoxConstraint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cubeModel;
  if (pMVar1 == (MVCubeModelBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (pMVar1->fields).Changed;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_,
             (MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar5 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
  if (pDVar4 == (Delegate *)0x0) {
    (pMVar1->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
  }
  else {
    pAVar3 = (Action_1_CubeModelChangedEventArgs_ *)
             FUN_?(pDVar4,TypeInfo__System__Action<CubeModelChangedEventArgs>);
    if (pAVar3 == (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      FUN_?(pDVar4,pAVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pMVar1->fields).Changed = pAVar3;
    pAVar5 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
    lVar6 = FUN_?(pDVar4,TypeInfo__System__Action<CubeModelChangedEventArgs>);
    if (lVar6 == 0) {
      FUN_?(pDVar4,pAVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(pMVar1->fields).Changed >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return;
}


/* ModelingDynamicBoxConstraint(MVCubeModelBase, IntVector) */

void Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint__ctor
               (ModelingDynamicBoxConstraint *this,MVCubeModelBase *cubeModel,
               IntVector *constraintSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Size_parameter_fields_shouldn_t_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = constraintSize->x;
  uVar2 = constraintSize->y;
  IStackX_18.y = (short)-uVar2 / 2;
  IStackX_18.x = (short)-uVar1 / 2;
  IStackX_18.z = -constraintSize->z / 2;
  uVar3 = constraintSize->y;
  uVar4 = constraintSize->x;
  IStackX_10.y = (short)uVar3 / 2;
  IStackX_10.x = (short)uVar4 / 2;
  IStackX_8.x = (short)uVar4 / 2;
  IStackX_8.y = (short)uVar3 / 2;
  IStackX_8.z = constraintSize->z / 2;
  ModelingBoxConstraint::ModelingBoxConstraint__ctor_1
            ((ModelingBoxConstraint *)this,&IStackX_18,&IStackX_8,(MethodInfo *)0x0);
  uVar5 = (int)constraintSize->x & 0x80000001;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
  }
  if (uVar5 != 1) {
    uVar6 = constraintSize->y;
    IStackX_8.z = constraintSize->z;
    uVar5 = (int)(short)uVar6 & 0x80000001;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    if (uVar5 != 1) {
      IStackX_8.x = constraintSize->x;
      IStackX_8.y = constraintSize->y;
      uVar5 = (int)constraintSize->z & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      if (uVar5 != 1) goto code_?;
    }
  }
  IStackX_8.x = constraintSize->x;
  IStackX_8.y = constraintSize->y;
  IStackX_8.z = constraintSize->z;
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar7 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                      (&IStackX_8,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_Size_parameter_fields_shouldn_t_,pSVar7,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar7,(MethodInfo *)0x0);
code_?:
  bVar8 = iRam_? != 0;
  (this->fields).cubeModel = cubeModel;
  if (bVar8) {
    uVar5 = (uint)((ulonglong)&(this->fields).cubeModel >> 0xc);
    lVar9 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar8 = uVar10 == *puVar11;
      if (bVar8) {
        *puVar11 = uVar10 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pMVar12 = (this->fields).cubeModel;
  if (pMVar12 == (MVCubeModelBase *)0x0) {
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pAVar14 = (pMVar12->fields).Changed;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_,
             (MethodInfo *)0x0);
  pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar14,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar16 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
  if (pDVar15 == (Delegate *)0x0) {
    (pMVar12->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
  }
  else {
    pAVar14 = (Action_1_CubeModelChangedEventArgs_ *)
              FUN_?(pDVar15,TypeInfo__System__Action<CubeModelChangedEventArgs>);
    if (pAVar14 == (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      FUN_?(pDVar15,pAVar16);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    (pMVar12->fields).Changed = pAVar14;
    pAVar16 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
    lVar9 = FUN_?();
    if (lVar9 == 0) {
      FUN_?(pDVar15,pAVar16);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(pMVar12->fields).Changed >> 0xc);
    uVar10 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar17 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar17 == *puVar11;
      if (bVar8) {
        *puVar11 = uVar17 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
              ObscuredShort_op_Implicit(constraintSize->x,(MethodInfo *)0x0);
  IStackX_8.x = constraintSize->x;
  IStackX_8.y = constraintSize->y;
  OStack_19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
              ObscuredShort_op_Implicit(IStackX_8.y,(MethodInfo *)0x0);
  OStack_20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
              ObscuredShort_op_Implicit(constraintSize->z,(MethodInfo *)0x0);
  (this->fields)._Size_k__BackingField.x = OStack_18;
  (this->fields)._Size_k__BackingField.y = OStack_19;
  (this->fields)._Size_k__BackingField.z = OStack_20;
  pVVar21 = ModelingDynamicBoxConstraint_CalcConstraintBoxCenter
                      ((Vector3 *)&OStack_18,this,cubeModel,(MethodInfo *)0x0);
  VStack_22.x = pVVar21->x;
  VStack_22.y = pVVar21->y;
  VStack_22.z = pVVar21->z;
  ModelingBoxConstraint::ModelingBoxConstraint_set_Center
            ((ModelingBoxConstraint *)this,&VStack_22,(MethodInfo *)0x0);
  return;
}


/* ObscuredIntVector get_Size() */

ObscuredIntVector *
Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_get_Size
          (ObscuredIntVector *__return_storage_ptr__,ModelingDynamicBoxConstraint *this,
          MethodInfo *method)

{
  OVar1 = (this->fields)._Size_k__BackingField.y;
  OVar2 = (this->fields)._Size_k__BackingField.z;
  __return_storage_ptr__->x = (this->fields)._Size_k__BackingField.x;
  __return_storage_ptr__->y = OVar1;
  __return_storage_ptr__->z = OVar2;
  return __return_storage_ptr__;
}


/* Void set_Size(ObscuredIntVector) */

void Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_set_Size
               (ModelingDynamicBoxConstraint *this,ObscuredIntVector *value,MethodInfo *method)

{
  OVar1 = value->y;
  OVar2 = value->z;
  (this->fields)._Size_k__BackingField.x = value->x;
  (this->fields)._Size_k__BackingField.y = OVar1;
  (this->fields)._Size_k__BackingField.z = OVar2;
  return;
}

