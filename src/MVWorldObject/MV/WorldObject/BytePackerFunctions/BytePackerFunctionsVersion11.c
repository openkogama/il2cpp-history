
/* Dictionary`2[System.Object,System.Object] GetDataParameters(BytePacker, KogamaDataType, Boolean)
    */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetDataParameters
          (BytePacker *bp,KogamaDataType__Enum kogamaDataType,bool readRuntimeData,
          MethodInfo *method)

{
  uVar1 = 0;
  if ((char)kogamaDataType == '\0') {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__WorldObject__PrototypeDataParameters);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (bp != (BytePacker *)0x0) {
      fVar2 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      fVar3 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
      fVar4 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      iVar5 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      value = BytePacker::BytePacker_ReadBytes(bp,iVar5,(MethodInfo *)0x0);
      pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      fVar7 = fStackX_8;
      pPVar8 = TypeInfo__MV__WorldObject__PrototypeDataParameters;
      fStackX_8 = (float)((uint)fStackX_8 & 0xffffff00);
      iVar9._0_2_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.attrs;
      iVar9._2_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.type;
      iVar9._3_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.field_0xb;
      if (iVar9 < 0) {
        if (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).generic_class ==
             (Il2CppGenericClass *)0x0) ||
           (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_1).field_0x6d & 8) == 0)) {
          pOVar10 = (Object *)FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters);
          FUN_?(pOVar10 + 1,&fStackX_8,(longlong)(int)(pPVar8->_1).instance_size + -0x10);
          if (iRam_? != 0) {
            uVar1 = 0xADDR;
            uVar11 = (uint)((ulonglong)(pOVar10 + 1) >> 0xc);
            uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
              LOCK();
              bVar15 = uVar13 == *puVar14;
              if (bVar15) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
        }
        else {
          pOVar10 = (Object *)0x0;
        }
      }
      else {
        pOVar10 = (Object *)(CONCAT44(uStackX_c,fVar7) & 0xffffffffffffff00);
      }
      fStackX_8 = fVar2;
      pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
      if (pDVar6 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,1);
        pOVar10 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&fStackX_8);
        fStackX_8 = fVar3;
        pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        fStackX_8._0_1_ = 2;
        pOVar10 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&fStackX_8);
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar10,(Object *)value,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,3);
        pOVar10 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&fStackX_8);
        fStackX_8 = fVar4;
        pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        return (Dictionary_2_System_Object_System_Object_ *)pDVar6;
      }
    }
    FUN_?();
    pcVar17 = (code *)swi(3);
    pDVar18 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar17)();
    return pDVar18;
  }
  if ((kogamaDataType & 0xff) == KogamaDataType__Enum_WorldObjects) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    ,readRuntimeData,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (bp != (BytePacker *)0x0) {
      fVar2 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      fVar4 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      fVar3 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      fVar19 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      fVar20 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
      fVar21 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
      fVar22 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
      fVar23 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
      fVar24 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
      fVar25 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
      fVar26 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
      fVar27 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
      fVar28 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
      fVar29 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
      pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      iVar5 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      uVar1 = 0;
      BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                (bp,(Dictionary_2_System_Object_System_Object_ *)pDVar6,iVar5,(MethodInfo *)0x0);
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      fVar7 = fStackX_8;
      pWVar30 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
      fStackX_8 = (float)((uint)fStackX_8 & 0xffffff00);
      iVar31._0_2_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.attrs;
      iVar31._2_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.type;
      iVar31._3_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.field_0xb;
      if (iVar31 < 0) {
        if (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).generic_class ==
             (Il2CppGenericClass *)0x0) ||
           (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_1).field_0x6d & 8) == 0)) {
          pOVar10 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
          FUN_?(pOVar10 + 1,&fStackX_8,(longlong)(int)(pWVar30->_1).instance_size + -0x10);
          if (iRam_? != 0) {
            uVar1 = 0xADDR;
            uVar11 = (uint)((ulonglong)(pOVar10 + 1) >> 0xc);
            uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
              LOCK();
              bVar15 = uVar13 == *puVar14;
              if (bVar15) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
        }
        else {
          pOVar10 = (Object *)0x0;
        }
      }
      else {
        pOVar10 = (Object *)(CONCAT44(uStackX_c,fVar7) & 0xffffffffffffff00);
      }
      fStackX_8 = fVar2;
      pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
      if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,1);
        pOVar10 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
        fStackX_8 = fVar4;
        pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,2);
        pOVar10 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
        fStackX_8 = fVar3;
        pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,3);
        pOVar10 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
        fStackX_8 = fVar19;
        pOVar16 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectType,&fStackX_8);
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        fStackX_8._0_1_ = 4;
        pOVar10 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
        uStack_32 = CONCAT44(fVar21,fVar20);
        fStack_33 = fVar22;
        pOVar16 = (Object *)FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_32);
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        fStackX_8._0_1_ = 5;
        pOVar10 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
        uStack_32 = CONCAT44(fVar24,fVar23);
        fStack_33 = fVar25;
        fStack_34 = fVar26;
        pOVar16 = (Object *)FUN_?(TypeInfo__UnityEngine__Quaternion,&uStack_32);
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        fStackX_8._0_1_ = 6;
        pOVar10 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
        uStack_32 = CONCAT44(fVar28,fVar27);
        fStack_33 = fVar29;
        pOVar16 = (Object *)FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_32);
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,7);
        pOVar10 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar10,(Object *)pDVar6,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (readRuntimeData != 0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uVar35 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
          if ((uVar35 & 1) != 0) {
            fVar7 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
            fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,9);
            pOVar10 = (Object *)
                      FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8)
            ;
            fStackX_8 = fVar7;
            pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
            uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this,pOVar10,pOVar16,
                       (InsertionBehavior__Enum)uVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          if ((uVar35 & 2) != 0) {
            fVar7 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
            fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,10);
            pOVar10 = (Object *)
                      FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8)
            ;
            fStackX_8 = fVar7;
            pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this,pOVar10,pOVar16,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          iVar5 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (pDVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          uVar1 = 0;
          BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                    (bp,(Dictionary_2_System_Object_System_Object_ *)pDVar6,iVar5,
                     (MethodInfo *)0x0);
          fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,8);
          pOVar10 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this,pOVar10,(Object *)pDVar6,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        return (Dictionary_2_System_Object_System_Object_ *)this;
      }
    }
    FUN_?();
    pcVar17 = (code *)swi(3);
    pDVar18 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar17)();
    return pDVar18;
  }
  uVar11 = (kogamaDataType & 0xff) - KogamaDataType__Enum_Links;
  uVar12 = (ulonglong)uVar11;
  if (uVar11 != 0) {
    if (uVar11 != 1) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (bp != (BytePacker *)0x0) {
      fVar2 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      fVar4 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      fVar3 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      fVar7 = fStackX_8;
      pOVar36 = TypeInfo__MV__WorldObject__ObjectLinkDataParameter;
      fStackX_8 = (float)((uint)fStackX_8 & 0xffffff00);
      iVar37._0_2_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.attrs;
      iVar37._2_1_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.type;
      iVar37._3_1_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.field_0xb;
      if (iVar37 < 0) {
        if (((TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).generic_class ==
             (Il2CppGenericClass *)0x0) ||
           (((TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_1).field_0x6d & 8) == 0)) {
          pOVar10 = (Object *)FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
          FUN_?(pOVar10 + 1,&fStackX_8,(longlong)(int)(pOVar36->_1).instance_size + -0x10);
          if (iRam_? != 0) {
            uVar12 = 0xADDR;
            uVar11 = (uint)((ulonglong)(pOVar10 + 1) >> 0xc);
            uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar38 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar13 * 8 + 0xADDR);
              LOCK();
              bVar15 = uVar38 == *puVar14;
              if (bVar15) {
                *puVar14 = uVar38 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
        }
        else {
          pOVar10 = (Object *)0x0;
        }
      }
      else {
        pOVar10 = (Object *)(CONCAT44(uStackX_c,fVar7) & 0xffffffffffffff00);
      }
      fStackX_8 = fVar2;
      pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
      if (pDVar6 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        uVar1 = CONCAT71((int7)(uVar12 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,1);
        pOVar10 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&fStackX_8);
        fStackX_8 = fVar4;
        pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,2);
        pOVar10 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&fStackX_8);
        fStackX_8 = fVar3;
        pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar10,pOVar16,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        return (Dictionary_2_System_Object_System_Object_ *)pDVar6;
      }
    }
    FUN_?();
    pcVar17 = (code *)swi(3);
    pDVar18 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar17)();
    return pDVar18;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__LinkDataParameter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    fVar2 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    fVar4 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    fVar3 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (pDVar6,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    fVar7 = fStackX_8;
    pLVar39 = TypeInfo__MV__WorldObject__LinkDataParameter;
    fStackX_8 = (float)((uint)fStackX_8 & 0xffffff00);
    iVar40._0_2_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.attrs;
    iVar40._2_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.type;
    iVar40._3_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.field_0xb;
    if (iVar40 < 0) {
      if (((TypeInfo__MV__WorldObject__LinkDataParameter->_0).generic_class ==
           (Il2CppGenericClass *)0x0) ||
         (((TypeInfo__MV__WorldObject__LinkDataParameter->_1).field_0x6d & 8) == 0)) {
        pOVar10 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter);
        FUN_?(pOVar10 + 1,&fStackX_8,(longlong)(int)(pLVar39->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          uVar12 = 0xADDR;
          uVar11 = (uint)((ulonglong)(pOVar10 + 1) >> 0xc);
          uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar38 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar38 == *puVar14;
            if (bVar15) {
              *puVar14 = uVar38 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar15);
        }
      }
      else {
        pOVar10 = (Object *)0x0;
      }
    }
    else {
      pOVar10 = (Object *)(CONCAT44(uStackX_c,fVar7) & 0xffffffffffffff00);
    }
    fStackX_8 = fVar2;
    pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
    if (pDVar6 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      uVar1 = CONCAT71((int7)(uVar12 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar10,pOVar16,
                 (InsertionBehavior__Enum)uVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,1);
      pOVar10 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&fStackX_8);
      fStackX_8 = fVar4;
      pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
      uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar10,pOVar16,
                 (InsertionBehavior__Enum)uVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,2);
      pOVar10 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&fStackX_8);
      fStackX_8 = fVar3;
      pOVar16 = (Object *)FUN_?(uRam_?,&fStackX_8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar10,pOVar16,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      return (Dictionary_2_System_Object_System_Object_ *)pDVar6;
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  pDVar18 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar17)();
  return pDVar18;
}


/* Void GetHashTableFromBytePacker(BytePacker, Dictionary`2[System.Object,System.Object], Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
     BytePackerFunctionsVersion11_GetHashTableFromBytePacker
               (BytePacker *bp,Dictionary_2_System_Object_System_Object_ *data,
               int32_t numNameValuePairs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int64);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (numNameValuePairs < 1) {
    return;
  }
  iVar1 = 0;
  uStack_2 = (ulonglong)uStack_2._4_4_ << 0x20;
  if (bp == (BytePacker *)0x0) {
DAT_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
code_?:
  pSVar4 = BytePacker::BytePacker_ReadString(bp,(MethodInfo *)0x0);
  auStack_5[0] = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
  if (auStack_5[0] == 0) {
    iVar6 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    puVar7 = (uint8_t *)&uStack_2;
    uStack_2 = CONCAT44(uStack_2._4_4_,iVar6);
    uVar8 = uRam_?;
  }
  else {
    if (auStack_5[0] == 1) {
      iVar6 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      pOVar9 = (Object *)FUN_?(TypeInfo__System__Int32);
      uVar10 = 0;
      lVar11 = 0;
      if (0 < iVar6) {
        pOVar12 = pOVar9 + 2;
        do {
          iVar13 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          if (pOVar9 == (Object *)0x0) goto DAT_?;
          if (*(uint *)&pOVar9[1].monitor <= uVar10) goto code_?;
          *(int32_t *)&pOVar12->klass = iVar13;
          uVar10 = uVar10 + 1;
          pOVar12 = (Object *)((longlong)&pOVar12->klass + 4);
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar6);
        iVar1 = (int)uStack_2;
      }
      if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        method = (MethodInfo *)CONCAT71((int7)((ulonglong)method >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (data,(Object *)pSVar4,pOVar9,(InsertionBehavior__Enum)method,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        goto code_?;
      }
      goto DAT_?;
    }
    if (auStack_5[0] == 2) {
      fVar14 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
      puVar7 = (uint8_t *)&uStack_2;
      uStack_2 = CONCAT44(uStack_2._4_4_,fVar14);
      uVar8 = uRam_?;
      goto code_?;
    }
    if (auStack_5[0] == 3) {
      iVar6 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      pOVar9 = (Object *)FUN_?(TypeInfo__System__Single);
      uVar10 = 0;
      lVar11 = 0;
      if (0 < iVar6) {
        pOVar12 = pOVar9 + 2;
        do {
          fVar14 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
          if (pOVar9 == (Object *)0x0) goto DAT_?;
          if (*(uint *)&pOVar9[1].monitor <= uVar10) goto code_?;
          *(float *)&pOVar12->klass = fVar14;
          uVar10 = uVar10 + 1;
          pOVar12 = (Object *)((longlong)&pOVar12->klass + 4);
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar6);
        iVar1 = (int)uStack_2;
      }
      if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        method = (MethodInfo *)CONCAT71((int7)((ulonglong)method >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (data,(Object *)pSVar4,pOVar9,(InsertionBehavior__Enum)method,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        goto code_?;
      }
      goto DAT_?;
    }
    if (auStack_5[0] == 4) {
      iVar6 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      pDVar15 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar15,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      iVar16 = 0;
      if (0 < iVar6) {
        do {
          iVar13 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          uStack_2 = CONCAT44(uStack_2._4_4_,iVar13);
          pOVar9 = (Object *)FUN_?(uRam_?,&uStack_2);
          auStack_5[0] = 0;
          pOVar12 = (Object *)FUN_?(uRam_?,auStack_5);
          if (pDVar15 == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                         *)0x0) goto DAT_?;
          method = (MethodInfo *)CONCAT71((int7)((ulonglong)method >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar15,pOVar9,pOVar12,
                     (InsertionBehavior__Enum)method,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar6);
      }
      if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    ->klass->rgctx_data[0x22].method;
        goto code_?;
      }
      goto DAT_?;
    }
    if (auStack_5[0] == 5) {
      uVar17 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      puVar7 = auStack_5;
      auStack_5[0] = uVar17 != 0;
      uVar8 = uRam_?;
      goto code_?;
    }
    if (auStack_5[0] == 6) {
      iVar6 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      pOVar9 = (Object *)FUN_?(TypeInfo__System__Boolean);
      uVar10 = 0;
      lVar11 = 0;
      if (0 < iVar6) {
        do {
          uVar17 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
          if (pOVar9 == (Object *)0x0) goto DAT_?;
          if (*(uint *)&pOVar9[1].monitor <= uVar10) goto code_?;
          uVar10 = uVar10 + 1;
          *(bool *)((longlong)&pOVar9[2].klass + lVar11) = uVar17 != 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar6);
      }
      if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto DAT_?;
      method = (MethodInfo *)CONCAT71((int7)((ulonglong)method >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (data,(Object *)pSVar4,pOVar9,(InsertionBehavior__Enum)method,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      goto code_?;
    }
    if (auStack_5[0] == 7) {
      pDVar15 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)BytePacker::BytePacker_ReadString(bp,(MethodInfo *)0x0);
      goto code_?;
    }
    if (auStack_5[0] == 8) {
      pDVar15 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar15,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (data,(Object *)pSVar4,(Object *)pDVar15,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      iVar6 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                (bp,(Dictionary_2_System_Object_System_Object_ *)pDVar15,iVar6,(MethodInfo *)0x0);
      goto code_?;
    }
    if (auStack_5[0] != 9) {
      if (auStack_5[0] == 10) {
        uStack_2 = BytePacker::BytePacker_ReadUInt64(bp,(MethodInfo *)0x0);
        puVar7 = (uint8_t *)&uStack_2;
        uVar8 = uRam_?;
        goto code_?;
      }
      if (auStack_5[0] != 0xb) {
        uVar8 = func_?(&TypeInfo__MV__Common__HashtableDataType);
        func_?(aEStack_18,uVar8,auStack_5);
        pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(aEStack_18,(MethodInfo *)0x0);
        str2 = (String *)func_?(&StringLiteral__from_WriteDataToBytePacker_);
        str0 = (String *)func_?(&StringLiteral_Trying_to_read_unsupported_type_);
        pSVar4 = mscorlib.dll::System::String::String_Concat_5(str0,pSVar4,str2,(MethodInfo *)0x0);
        uVar8 = func_?(&TypeInfo__System__Exception);
        this = (Exception *)func_?(uVar8);
        mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar4,(MethodInfo *)0x0);
        uVar8 = func_?(&
                                     MethodInfo__MV__WorldObject__BytePackerFunctions__BytePackerFunctionsVersion11__GetHashTableFromBytePacker_MV__WorldObject__BytePacker__System__Collections__Generic__Dictionary<System::Object,_System::Object>__int_
                                    );
        FUN_?(this,uVar8);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      pOVar9 = (Object *)FUN_?(TypeInfo__System__Int64);
      uVar10 = 0;
      lVar11 = 0;
      if (0 < iVar6) {
        pOVar12 = pOVar9 + 2;
        do {
          pOVar19 = (Object__Class *)BytePacker::BytePacker_ReadUInt64(bp,(MethodInfo *)0x0);
          if (pOVar9 == (Object *)0x0) goto DAT_?;
          if (*(uint *)&pOVar9[1].monitor <= uVar10) {
code_?:
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pOVar12->klass = pOVar19;
          uVar10 = uVar10 + 1;
          pOVar12 = (Object *)&pOVar12->monitor;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar6);
        iVar1 = (int)uStack_2;
      }
      if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        method = (MethodInfo *)CONCAT71((int7)((ulonglong)method >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (data,(Object *)pSVar4,pOVar9,(InsertionBehavior__Enum)method,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        goto code_?;
      }
      goto DAT_?;
    }
    auStack_5[0] = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
    puVar7 = auStack_5;
    uVar8 = uRam_?;
  }
code_?:
  pDVar15 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(uVar8,puVar7);
code_?:
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto DAT_?;
  method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              ->klass->rgctx_data[0x22].method;
code_?:
  method = (MethodInfo *)CONCAT71((int7)((ulonglong)method >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)pSVar4,(Object *)pDVar15,(InsertionBehavior__Enum)method,method_00);
code_?:
  iVar1 = iVar1 + 1;
  uStack_2 = CONCAT44(uStack_2._4_4_,iVar1);
  if (numNameValuePairs <= iVar1) {
    return;
  }
  goto code_?;
}


/* Dictionary`2[System.Object,System.Object] GetLinkDataParameters(BytePacker) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetLinkDataParameters(BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__LinkDataParameter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    uVar1 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    uVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    uVar3 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uVar4 = uStackX_8;
    pLVar5 = TypeInfo__MV__WorldObject__LinkDataParameter;
    uStackX_8 = uStackX_8 & 0xffffff00;
    iVar6._0_2_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.attrs;
    iVar6._2_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.type;
    iVar6._3_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.field_0xb;
    if (iVar6 < 0) {
      if (((TypeInfo__MV__WorldObject__LinkDataParameter->_0).generic_class ==
           (Il2CppGenericClass *)0x0) ||
         (((TypeInfo__MV__WorldObject__LinkDataParameter->_1).field_0x6d & 8) == 0)) {
        pOVar7 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter);
        FUN_?(pOVar7 + 1,&uStackX_8,(longlong)(int)(pLVar5->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          in_R9 = 0xADDR;
          uVar4 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
          uVar8 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
      }
      else {
        pOVar7 = (Object *)0x0;
      }
    }
    else {
      pOVar7 = (Object *)(CONCAT44(uStackX_c,uVar4) & 0xffffffffffffff00);
    }
    uStackX_8 = uVar1;
    pOVar12 = (Object *)FUN_?(uRam_?,&uStackX_8);
    if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
      uVar13 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar7,pOVar12,
                 (InsertionBehavior__Enum)uVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8 = CONCAT31(uStackX_8._1_3_,1);
      pOVar7 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStackX_8);
      uStackX_8 = uVar2;
      pOVar12 = (Object *)FUN_?(uRam_?,&uStackX_8);
      uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar7,pOVar12,
                 (InsertionBehavior__Enum)uVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8 = CONCAT31(uStackX_8._1_3_,2);
      pOVar7 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStackX_8);
      uStackX_8 = uVar3;
      pOVar12 = (Object *)FUN_?(uRam_?,&uStackX_8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar7,pOVar12,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar13 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      return (Dictionary_2_System_Object_System_Object_ *)this;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pDVar15 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar14)();
  return pDVar15;
}


/* Dictionary`2[System.Object,System.Object] GetObjectLinkDataParameters(BytePacker) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetObjectLinkDataParameters(BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    uVar1 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    uVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    uVar3 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uVar4 = uStackX_8;
    pOVar5 = TypeInfo__MV__WorldObject__ObjectLinkDataParameter;
    uStackX_8 = uStackX_8 & 0xffffff00;
    iVar6._0_2_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.attrs;
    iVar6._2_1_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.type;
    iVar6._3_1_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.field_0xb;
    if (iVar6 < 0) {
      if (((TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).generic_class ==
           (Il2CppGenericClass *)0x0) ||
         (((TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_1).field_0x6d & 8) == 0)) {
        pOVar7 = (Object *)FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
        FUN_?(pOVar7 + 1,&uStackX_8,(longlong)(int)(pOVar5->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          in_R9 = 0xADDR;
          uVar4 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
          uVar8 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
      }
      else {
        pOVar7 = (Object *)0x0;
      }
    }
    else {
      pOVar7 = (Object *)(CONCAT44(uStackX_c,uVar4) & 0xffffffffffffff00);
    }
    uStackX_8 = uVar1;
    pOVar12 = (Object *)FUN_?(uRam_?,&uStackX_8);
    if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
      uVar13 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar7,pOVar12,
                 (InsertionBehavior__Enum)uVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8 = CONCAT31(uStackX_8._1_3_,1);
      pOVar7 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStackX_8);
      uStackX_8 = uVar2;
      pOVar12 = (Object *)FUN_?(uRam_?,&uStackX_8);
      uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar7,pOVar12,
                 (InsertionBehavior__Enum)uVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8 = CONCAT31(uStackX_8._1_3_,2);
      pOVar7 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStackX_8);
      uStackX_8 = uVar3;
      pOVar12 = (Object *)FUN_?(uRam_?,&uStackX_8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar7,pOVar12,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar13 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      return (Dictionary_2_System_Object_System_Object_ *)this;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pDVar15 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar14)();
  return pDVar15;
}


/* Dictionary`2[System.Object,System.Object] GetPrototypeDataParameters(BytePacker) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetPrototypeDataParameters(BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__PrototypeDataParameters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    fVar1 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    fVar2 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fVar3 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    count = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    value = BytePacker::BytePacker_ReadBytes(bp,count,(MethodInfo *)0x0);
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    fVar4 = fStackX_8;
    pPVar5 = TypeInfo__MV__WorldObject__PrototypeDataParameters;
    fStackX_8 = (float)((uint)fStackX_8 & 0xffffff00);
    iVar6._0_2_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.attrs;
    iVar6._2_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.type;
    iVar6._3_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.field_0xb;
    if (iVar6 < 0) {
      if (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).generic_class ==
           (Il2CppGenericClass *)0x0) ||
         (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_1).field_0x6d & 8) == 0)) {
        pOVar7 = (Object *)FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters);
        FUN_?(pOVar7 + 1,&fStackX_8,(longlong)(int)(pPVar5->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          in_R9 = 0xADDR;
          uVar8 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
      }
      else {
        pOVar7 = (Object *)0x0;
      }
    }
    else {
      pOVar7 = (Object *)(CONCAT44(uStackX_c,fVar4) & 0xffffffffffffff00);
    }
    fStackX_8 = fVar1;
    pOVar13 = (Object *)FUN_?(uRam_?,&fStackX_8);
    if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
      uVar14 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar7,pOVar13,
                 (InsertionBehavior__Enum)uVar14,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,1);
      pOVar7 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&fStackX_8);
      fStackX_8 = fVar2;
      pOVar13 = (Object *)FUN_?(uRam_?,&fStackX_8);
      uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar7,pOVar13,
                 (InsertionBehavior__Enum)uVar14,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      fStackX_8._0_1_ = 2;
      pOVar7 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&fStackX_8);
      uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar7,(Object *)value,
                 (InsertionBehavior__Enum)uVar14,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,3);
      pOVar7 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&fStackX_8);
      fStackX_8 = fVar3;
      pOVar13 = (Object *)FUN_?(uRam_?,&fStackX_8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar7,pOVar13,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar14 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      return (Dictionary_2_System_Object_System_Object_ *)this;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  pDVar16 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar15)();
  return pDVar16;
}


/* Dictionary`2[System.Object,System.Object] GetWorldObjectDataParameters(BytePacker, Boolean) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetWorldObjectDataParameters
          (BytePacker *bp,bool readRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    uVar1 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    uVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    uVar3 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    uVar4 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    fVar5 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fVar6 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fVar7 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fVar8 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fVar9 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fVar10 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fVar11 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fVar12 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fVar13 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fVar14 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    pDVar15 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (pDVar15,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    iVar16 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    uVar17 = 0;
    BytePackerFunctionsVersion11_GetHashTableFromBytePacker
              (bp,(Dictionary_2_System_Object_System_Object_ *)pDVar15,iVar16,(MethodInfo *)0x0);
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uVar18 = uStackX_8;
    pWVar19 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
    uStackX_8 = uStackX_8 & 0xffffff00;
    iVar20._0_2_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.attrs;
    iVar20._2_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.type;
    iVar20._3_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.field_0xb;
    if (iVar20 < 0) {
      if (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).generic_class ==
           (Il2CppGenericClass *)0x0) ||
         (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_1).field_0x6d & 8) == 0)) {
        pOVar21 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
        FUN_?(pOVar21 + 1,&uStackX_8,(longlong)(int)(pWVar19->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          uVar17 = 0xADDR;
          uVar18 = (uint)((ulonglong)(pOVar21 + 1) >> 0xc);
          uVar22 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
          do {
            uVar23 = *(ulonglong *)(uVar22 * 8 + 0xADDR);
            puVar24 = (ulonglong *)(uVar22 * 8 + 0xADDR);
            LOCK();
            bVar25 = uVar23 == *puVar24;
            if (bVar25) {
              *puVar24 = uVar23 | 1L << (uVar18 & 0x3f);
            }
            UNLOCK();
          } while (!bVar25);
        }
      }
      else {
        pOVar21 = (Object *)0x0;
      }
    }
    else {
      pOVar21 = (Object *)(CONCAT44(uStackX_c,uVar18) & 0xffffffffffffff00);
    }
    uStackX_8 = uVar1;
    pOVar26 = (Object *)FUN_?(uRam_?,&uStackX_8);
    if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
      uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar21,pOVar26,
                 (InsertionBehavior__Enum)uVar17,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8 = CONCAT31(uStackX_8._1_3_,1);
      pOVar21 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
      uStackX_8 = uVar2;
      pOVar26 = (Object *)FUN_?(uRam_?,&uStackX_8);
      uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar21,pOVar26,
                 (InsertionBehavior__Enum)uVar17,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8 = CONCAT31(uStackX_8._1_3_,2);
      pOVar21 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
      uStackX_8 = uVar3;
      pOVar26 = (Object *)FUN_?(uRam_?,&uStackX_8);
      uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar21,pOVar26,
                 (InsertionBehavior__Enum)uVar17,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8 = CONCAT31(uStackX_8._1_3_,3);
      pOVar21 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
      uStackX_8 = uVar4;
      pOVar26 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectType,&uStackX_8);
      uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar21,pOVar26,
                 (InsertionBehavior__Enum)uVar17,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8._0_1_ = 4;
      pOVar21 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
      uStack_27 = CONCAT44(fVar6,fVar5);
      fStack_28 = fVar7;
      pOVar26 = (Object *)FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_27);
      uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar21,pOVar26,
                 (InsertionBehavior__Enum)uVar17,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8._0_1_ = 5;
      pOVar21 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
      uStack_27 = CONCAT44(fVar9,fVar8);
      fStack_28 = fVar10;
      fStack_29 = fVar11;
      pOVar26 = (Object *)FUN_?(TypeInfo__UnityEngine__Quaternion,&uStack_27);
      uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar21,pOVar26,
                 (InsertionBehavior__Enum)uVar17,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8._0_1_ = 6;
      pOVar21 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
      uStack_27 = CONCAT44(fVar13,fVar12);
      fStack_28 = fVar14;
      pOVar26 = (Object *)FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_27);
      uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar21,pOVar26,
                 (InsertionBehavior__Enum)uVar17,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8 = CONCAT31(uStackX_8._1_3_,7);
      pOVar21 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
      uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar21,(Object *)pDVar15,
                 (InsertionBehavior__Enum)uVar17,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (readRuntimeData != 0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uVar30 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
        if ((uVar30 & 1) != 0) {
          uVar18 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          uStackX_8 = CONCAT31(uStackX_8._1_3_,9);
          pOVar21 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
          uStackX_8 = uVar18;
          pOVar26 = (Object *)FUN_?(uRam_?,&uStackX_8);
          uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this,pOVar21,pOVar26,
                     (InsertionBehavior__Enum)uVar17,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        if ((uVar30 & 2) != 0) {
          uVar18 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          uStackX_8 = CONCAT31(uStackX_8._1_3_,10);
          pOVar21 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
          uStackX_8 = uVar18;
          pOVar26 = (Object *)FUN_?(uRam_?,&uStackX_8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this,pOVar21,pOVar26,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar17 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        iVar16 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        pDVar15 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (pDVar15,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        uVar17 = 0;
        BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                  (bp,(Dictionary_2_System_Object_System_Object_ *)pDVar15,iVar16,(MethodInfo *)0x0)
        ;
        uStackX_8 = CONCAT31(uStackX_8._1_3_,8);
        pOVar21 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar21,(Object *)pDVar15,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar17 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      return (Dictionary_2_System_Object_System_Object_ *)this;
    }
  }
  FUN_?();
  pcVar31 = (code *)swi(3);
  pDVar32 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar31)();
  return pDVar32;
}


/* Void ReadWorldObjectOwnerState(BytePacker, Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
     BytePackerFunctionsVersion11_ReadWorldObjectOwnerState
               (BytePacker *bp,Dictionary_2_System_Object_System_Object_ *worldObjectData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    uVar1 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
    if ((uVar1 & 1) != 0) {
      iVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,9);
      pOVar3 = (Object *)
               FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,aiStackX_8);
      aiStackX_8[0] = iVar2;
      pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_8);
      if (worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0)
      goto code_?;
      in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (worldObjectData,pOVar3,pOVar4,in_R9D,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    if ((uVar1 & 2) != 0) {
      iVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,10);
      pOVar3 = (Object *)
               FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,aiStackX_8);
      aiStackX_8[0] = iVar2;
      pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_8);
      if (worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (worldObjectData,pOVar3,pOVar4,CONCAT31((int3)(in_R9D >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

