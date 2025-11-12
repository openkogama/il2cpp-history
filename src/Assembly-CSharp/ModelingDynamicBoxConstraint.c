
/* Vector3 CalcConstraintBoxCenter(MVCubeModelBase) */

Vector3 * Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_CalcConstraintBoxCenter(Vector3 *__return_storage_ptr__,ModelingDynamicBoxConstraint *this,MVCubeModelBase *model,MethodInfo *method)

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
    BStack_5.m_Extents.y = (pBVar3->m_Extents).y;
    BStack_5.m_Extents.z = (pBVar3->m_Extents).z;
    VStack_6.x = (pBVar3->m_Center).x;
    VStack_6.y = (pBVar3->m_Center).y;
    index = 0;
    VStack_6.z = (float)*(undefined8 *)&(pBVar3->m_Center).z;
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
        uVar7 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar8 = (IndexOutOfRangeException *)func_?(uVar7);
        message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1(pIVar8,message,(MethodInfo *)0x0);
        uVar7 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
        FUN_?(pIVar8,uVar7);
        pcVar9 = (code *)swi(3);
        pVVar10 = (Vector3 *)(*pcVar9)();
        return pVVar10;
      }
      fVar11 = (float)FUN_?();
      if (fVar11 == 0.0) {
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item(&VStack_6,index,method_00);
        fVar11 = (float)FUN_?();
        if (fVar11 != 0.0) {
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item(&VStack_6,index,method_00);
          fVar11 = (float)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item(&VStack_6,index,fVar11 - 0.5,method);
        }
      }
      else {
        IStack_1.x = 0;
        IStack_1.y = 0;
        IStack_1.z = 0;
        IStack_2.x = 0;
        IStack_2.y = 0;
        IStack_2.z = 0;
        pBVar3 = MVCubeModelBase::MVCubeModelBase_GetBounds(&BStack_5,model,(MethodInfo *)0x0);
        uVar12._0_4_ = (pBVar3->m_Center).x;
        uVar12._4_4_ = (pBVar3->m_Center).y;
        uVar13 = *(undefined8 *)&(pBVar3->m_Center).z;
        uVar7._0_4_ = (pBVar3->m_Extents).y;
        uVar7._4_4_ = (pBVar3->m_Extents).z;
        if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        method = (MethodInfo *)0x0;
        BStack_5.m_Center._0_8_ = uVar12;
        BStack_5._8_8_ = uVar13;
        BStack_5.m_Extents._4_8_ = uVar7;
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds(&IStack_1,&IStack_2,&BStack_5,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        iVar14 = IStack_1.z;
        iVar15 = IStack_2.z;
        iVar16 = IStack_2.x;
        iVar17 = IStack_1.x;
        iVar18 = IStack_1.y;
        method_00 = (MethodInfo *)(ulonglong)(ushort)(IStack_2.y - IStack_1.y);
        uVar19 = IStack_2.x - IStack_1.x;
        if (((index != 0) && (uVar19 = IStack_2.y - IStack_1.y, index != 1)) && (uVar19 = IStack_2.z - IStack_1.z, index != 2)) {
          uVar7 = func_?(&TypeInfo__System__IndexOutOfRangeException);
          pIVar8 = (IndexOutOfRangeException *)func_?(uVar7);
          mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor(pIVar8,(MethodInfo *)0x0);
          uVar7 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
          FUN_?(pIVar8,uVar7);
          pcVar9 = (code *)swi(3);
          pVVar10 = (Vector3 *)(*pcVar9)();
          return pVVar10;
        }
        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar10 = SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3(&VStack_20,(MethodInfo *)0x0);
        VStack_21.x = pVVar10->x;
        VStack_21.y = pVVar10->y;
        VStack_21.z = pVVar10->z;
        fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item(&VStack_21,index,method_00);
        if ((int)(short)(uVar19 + 1) == (int)fVar11) {
          if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (index != 0) {
            if (index == 1) {
              iVar16 = IStack_2.y;
              iVar17 = iVar18;
            }
            else {
              iVar16 = iVar15;
              iVar17 = iVar14;
              if (index != 2) {
                uVar7 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                pIVar8 = (IndexOutOfRangeException *)func_?(uVar7);
                mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor(pIVar8,(MethodInfo *)0x0);
                uVar7 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
                FUN_?(pIVar8,uVar7);
                pcVar9 = (code *)swi(3);
                pVVar10 = (Vector3 *)(*pcVar9)();
                return pVVar10;
              }
            }
          }
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item(&VStack_6,index,(float)(((int)iVar16 - (int)iVar17) / 2 + (int)iVar17),method);
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
    pSVar22 = TypeInfo__SharedCubeFunctions->static_fields;
    sVar23 = (pSVar22->constraint).x;
    sVar24 = (pSVar22->constraint).y;
    sVar25 = (pSVar22->constraint).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_20.x = (pVVar26->oneVector).x;
    VStack_20.y = (pVVar26->oneVector).y;
    fVar27 = ((float)(int)sVar25 - (pVVar26->oneVector).z) * 0.5;
    fVar28 = ((float)(int)sVar23 - VStack_20.x) * 0.5;
    fVar29 = ((float)(int)sVar24 - VStack_20.y) * 0.5;
    fVar30 = -fVar28;
    fVar31 = -fVar29;
    fVar11 = -fVar27;
    if ((fVar30 <= VStack_6.x) && (fVar30 = VStack_6.x, fVar28 < VStack_6.x)) {
      fVar30 = fVar28;
    }
    if ((fVar31 <= VStack_6.y) && (fVar31 = VStack_6.y, fVar29 < VStack_6.y)) {
      fVar31 = fVar29;
    }
    if ((fVar11 <= VStack_6.z) && (fVar11 = VStack_6.z, fVar27 < VStack_6.z)) {
      fVar11 = fVar27;
    }
    obj = (model->fields)._.transform;
    if (obj != (Transform *)0x0) {
      VStack_21.y = fVar31;
      VStack_21.x = fVar30;
      VStack_21.z = fVar11;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_6.x = 0.0;
      VStack_6.y = 0.0;
      VStack_6.z = 0.0;
      pvVar32 = (obj->fields)._._.m_CachedPtr;
      if (pvVar32 != (void *)0x0) {
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar9 = (code *)swi(3);
          pVVar10 = (Vector3 *)(*pcVar9)();
          return pVVar10;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar32,&VStack_21,&VStack_6);
        __return_storage_ptr__->x = VStack_6.x;
        __return_storage_ptr__->y = VStack_6.y;
        __return_storage_ptr__->z = VStack_6.z;
        return __return_storage_ptr__;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar9)();
      return pVVar10;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pVVar10 = (Vector3 *)(*pcVar9)();
  return pVVar10;
}


/* Boolean CanAddCubeAt(IntVector) */

bool Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_CanAddCubeAt(ModelingDynamicBoxConstraint *this,IntVector *pos,MethodInfo *method)

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
  sVar3 = pos->x;
  sVar4 = pos->y;
  sVar5 = pos->z;
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
  iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  if (ABS((float)(int)sVar3) <= (float)(iVar7 + -1)) {
    OVar6 = (this->fields)._Size_k__BackingField.y;
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
    iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    if (ABS((float)(int)sVar4) <= (float)(iVar7 + -1)) {
      OVar6 = (this->fields)._Size_k__BackingField.z;
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
      iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
      if (ABS((float)(int)sVar5) <= (float)(iVar7 + -1)) {
        this_00 = (this->fields).cubeModel;
        if (this_00 == (MVCubeModelBase *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        method_00 = (MethodInfo *)0x0;
        pBVar10 = MVCubeModelBase::MVCubeModelBase_GetBounds(aBStack_11,this_00,(MethodInfo *)0x0);
        VStack_12.x = (pBVar10->m_Center).x;
        VStack_12.y = (pBVar10->m_Center).y;
        uVar13 = *(undefined8 *)&(pBVar10->m_Center).z;
        fVar14 = (pBVar10->m_Extents).y;
        fVar15 = (pBVar10->m_Extents).z;
        VStack_12.z = (float)uVar13;
        fStack_16 = (float)((ulonglong)uVar13 >> 0x20);
        fVar17 = (float)(int)pos->x - 0.5;
        fVar18 = (float)(int)pos->y - 0.5;
        index = 0;
        VStack_1.z = (float)(int)pos->z - 0.5;
        VStack_1.y = fVar18;
        VStack_1.x = fVar17;
        OStackX_8._0_4_ = VStack_1.z;
        aBStack_11[0].m_Center.z = (float)(int)pos->z + 0.5;
        aBStack_11[0].m_Center.y = (float)(int)pos->y + 0.5;
        aBStack_11[0].m_Center.x = (float)(int)pos->x + 0.5;
        fVar19 = fStack_16;
        fVar20 = VStack_1.z;
        fStack_21 = fVar14;
        fStack_22 = fVar15;
        fVar23 = VStack_12.z;
        fVar24 = VStack_12.y;
        fVar25 = VStack_12.x;
        while( true ) {
          fVar26 = fVar17;
          if (((index != 0) && (fVar26 = fVar18, index != 1)) && (fVar26 = fVar20, index != 2)) {
            uVar13 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            pIVar27 = (IndexOutOfRangeException *)func_?(uVar13);
            pSVar28 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1(pIVar27,pSVar28,(MethodInfo *)0x0);
            uVar13 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
            FUN_?(pIVar27,uVar13);
            pcVar8 = (code *)swi(3);
            bVar9 = (*pcVar8)();
            return bVar9;
          }
          VStack_2.z = fVar23 - fVar15;
          VStack_2.y = fVar24 - fVar14;
          VStack_2.x = fVar25 - fVar19;
          fVar20 = fVar25 - fVar19;
          if (((index != 0) && (fVar20 = fVar24 - fVar14, index != 1)) && (fVar20 = VStack_2.z, index != 2)) {
            uVar13 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            pIVar27 = (IndexOutOfRangeException *)func_?(uVar13);
            pSVar28 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1(pIVar27,pSVar28,(MethodInfo *)0x0);
            uVar13 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
            FUN_?(pIVar27,uVar13);
            pcVar8 = (code *)swi(3);
            bVar9 = (*pcVar8)();
            return bVar9;
          }
          if (fVar26 < fVar20) {
            VStack_29.x = fVar25 - fVar19;
            VStack_29.z = fVar23 - fVar15;
            VStack_29.y = fVar24 - fVar14;
            fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item(&VStack_1,index,method_00);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item(&VStack_29,index,fVar20,in_R9);
            fVar19 = ((fVar25 + fVar19) - VStack_29.x) * 0.5;
            fVar14 = ((fVar24 + fVar14) - VStack_29.y) * 0.5;
            fVar15 = ((fVar23 + fVar15) - VStack_29.z) * 0.5;
            fVar25 = fVar19 + VStack_29.x;
            fVar24 = fVar14 + VStack_29.y;
            VStack_12.z = fVar15 + VStack_29.z;
            VStack_12.y = fVar24;
            VStack_12.x = fVar25;
            fStack_16 = fVar19;
            fStack_21 = fVar14;
            fStack_22 = fVar15;
            fVar23 = VStack_12.z;
          }
          fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item(&aBStack_11[0].m_Center,index,method_00);
          VStack_2.z = fVar23 + fVar15;
          VStack_2.y = fVar24 + fVar14;
          VStack_2.x = fVar25 + fVar19;
          fVar26 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item(&VStack_2,index,method_00);
          if (fVar26 < fVar20) {
            aVStack_30[0].x = fVar25 + fVar19;
            aVStack_30[0].z = fVar23 + fVar15;
            aVStack_30[0].y = fVar24 + fVar14;
            fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item(&aBStack_11[0].m_Center,index,method_00);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item(aVStack_30,index,fVar20,in_R9);
            fVar25 = fVar25 - fVar19;
            fVar24 = fVar24 - fVar14;
            fVar23 = fVar23 - fVar15;
            fVar19 = (aVStack_30[0].x - fVar25) * 0.5;
            fVar14 = (aVStack_30[0].y - fVar24) * 0.5;
            fVar15 = (aVStack_30[0].z - fVar23) * 0.5;
            fVar25 = fVar19 + fVar25;
            fVar24 = fVar14 + fVar24;
            VStack_12.z = fVar15 + fVar23;
            VStack_12.y = fVar24;
            VStack_12.x = fVar25;
            fStack_16 = fVar19;
            fStack_21 = fVar14;
            fStack_22 = fVar15;
            fVar23 = VStack_12.z;
          }
          index = index + 1;
          if (2 < index) break;
          fVar20 = (float)OStackX_8._0_4_;
        }
        IStackX_10.x = 0;
        IStackX_10.y = 0;
        IStackX_10.z = 0;
        OStackX_8 = (ObscuredShort)((ulonglong)OStackX_8 & 0xffff000000000000);
        if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        aBStack_11[0].m_Extents.x = fStack_16;
        aBStack_11[0].m_Center.z = VStack_12.z;
        aBStack_11[0].m_Extents.z = fStack_22;
        aBStack_11[0].m_Extents.y = fStack_21;
        aBStack_11[0].m_Center.x = VStack_12.x;
        aBStack_11[0].m_Center.y = VStack_12.y;
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds(&IStackX_10,(IntVector *)&OStackX_8,aBStack_11,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        sVar3 = OStackX_8.currentCryptoKey - IStackX_10.x;
        sVar4 = OStackX_8.hiddenValue - IStackX_10.y;
        sVar5 = OStackX_8.fakeValue - IStackX_10.z;
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
        iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
        if ((short)(sVar3 + 1) <= iVar7) {
          OVar6 = (this->fields)._Size_k__BackingField.y;
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
          iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
          if ((short)(sVar4 + 1) <= iVar7) {
            OVar6 = (this->fields)._Size_k__BackingField.z;
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
            iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
            if ((short)(sVar5 + 1) <= iVar7) {
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

void Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_CubeModel_Changed(ModelingDynamicBoxConstraint *this,CubeModelChangedEventArgs *e,MethodInfo *method)

{
  pVVar1 = ModelingDynamicBoxConstraint_CalcConstraintBoxCenter(&VStack_2,this,(this->fields).cubeModel,(MethodInfo *)0x0);
  VStack_3.x = pVVar1->x;
  VStack_3.y = pVVar1->y;
  VStack_3.z = pVVar1->z;
  ModelingBoxConstraint::ModelingBoxConstraint_set_Center((ModelingBoxConstraint *)this,&VStack_3,(MethodInfo *)0x0);
  return;
}


/* Void DetachFromCubeModel() */

void Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_DetachFromCubeModel(ModelingDynamicBoxConstraint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_);
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
  this_00 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::UnityAction_1_System_Object___ctor(this_00,(Object *)this,MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_,(MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar5 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
  if (pDVar4 == (Delegate *)0x0) {
    (pMVar1->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
  }
  else {
    pAVar3 = (Action_1_CubeModelChangedEventArgs_ *)FUN_?(pDVar4,TypeInfo__System__Action<CubeModelChangedEventArgs>);
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

void Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint__ctor(ModelingDynamicBoxConstraint *this,MVCubeModelBase *cubeModel,IntVector *constraintSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_);
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
  ModelingBoxConstraint::ModelingBoxConstraint__ctor_1((ModelingBoxConstraint *)this,&IStackX_18,&IStackX_8,(MethodInfo *)0x0);
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
  pSVar7 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString(&IStackX_8,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_Size_parameter_fields_shouldn_t_,pSVar7,(MethodInfo *)0x0);
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
  this_00 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::UnityAction_1_System_Object___ctor(this_00,(Object *)this,MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_,(MethodInfo *)0x0);
  pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar14,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar16 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
  if (pDVar15 == (Delegate *)0x0) {
    (pMVar12->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
  }
  else {
    pAVar14 = (Action_1_CubeModelChangedEventArgs_ *)FUN_?(pDVar15,TypeInfo__System__Action<CubeModelChangedEventArgs>);
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
  OStack_18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_op_Implicit(constraintSize->x,(MethodInfo *)0x0);
  IStackX_8.x = constraintSize->x;
  IStackX_8.y = constraintSize->y;
  OStack_19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_op_Implicit(IStackX_8.y,(MethodInfo *)0x0);
  OStack_20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_op_Implicit(constraintSize->z,(MethodInfo *)0x0);
  (this->fields)._Size_k__BackingField.x = OStack_18;
  (this->fields)._Size_k__BackingField.y = OStack_19;
  (this->fields)._Size_k__BackingField.z = OStack_20;
  pVVar21 = ModelingDynamicBoxConstraint_CalcConstraintBoxCenter((Vector3 *)&OStack_18,this,cubeModel,(MethodInfo *)0x0);
  VStack_22.x = pVVar21->x;
  VStack_22.y = pVVar21->y;
  VStack_22.z = pVVar21->z;
  ModelingBoxConstraint::ModelingBoxConstraint_set_Center((ModelingBoxConstraint *)this,&VStack_22,(MethodInfo *)0x0);
  return;
}


/* ObscuredIntVector get_Size() */

ObscuredIntVector * Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_get_Size(ObscuredIntVector *__return_storage_ptr__,ModelingDynamicBoxConstraint *this,MethodInfo *method)

{
  OVar1 = (this->fields)._Size_k__BackingField.y;
  OVar2 = (this->fields)._Size_k__BackingField.z;
  __return_storage_ptr__->x = (this->fields)._Size_k__BackingField.x;
  __return_storage_ptr__->y = OVar1;
  __return_storage_ptr__->z = OVar2;
  return __return_storage_ptr__;
}


/* Void set_Size(ObscuredIntVector) */

void Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_set_Size(ModelingDynamicBoxConstraint *this,ObscuredIntVector *value,MethodInfo *method)

{
  OVar1 = value->y;
  OVar2 = value->z;
  (this->fields)._Size_k__BackingField.x = value->x;
  (this->fields)._Size_k__BackingField.y = OVar1;
  (this->fields)._Size_k__BackingField.z = OVar2;
  return;
}

