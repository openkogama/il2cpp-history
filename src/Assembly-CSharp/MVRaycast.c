
/* Boolean GetCellOnRay(Ray, VoxelHit ByRef, GameObject, ICubeModelCollider, Vector3, Single,
   Vector3) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_GetCellOnRay
               (Ray ray,VoxelHit *vHit,GameObject *chunk,ICubeModelCollider *cmb,Vector3 hitPoint,
               float distance,Vector3 scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  uStack_1 = 0.0;
  iStack_2 = 0;
  uVar3 = 0;
  puStack_4 = (undefined *)0x0;
  if (chunk != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (chunk,(MethodInfo *)0x0);
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pRVar5 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                        (&RStack_6,
                         (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)&ray,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      direction.z._2_2_ = (short)((uint)pRVar5->_pattern >> 0x10);
      direction._0_10_ = *(unkbyte10 *)pRVar5;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                Transform_InverseTransformDirection
                          ((Vector3 *)&RStack_6,this,direction,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_set_direction
                (&TypeInfo__MVRaycast->static_fields->intersectRay,*pVVar7,(MethodInfo *)0x0);
      pRVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          (&RStack_6,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&ray,(MethodInfo *)0x0);
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                          ((Vector3 *)&RStack_6,this,(Vector3)*pRVar5,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
      ParticleSystem_Particle_set_position
                ((ParticleSystem_Particle *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                 *pVVar7,(MethodInfo *)0x0);
      VStack_8.z = 0.0;
      VStack_8.x = 0.0;
      VStack_8.y = 0.0;
      if (distance != (float)_UNK_?) {
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          uVar9 = uVar3 >> 0x20;
          uVar3 = CONCAT44((float)uVar9,TypeInfo__MVRaycast);
          func_?();
        }
        uVar3 = uVar3 & 0xffffffff00000000;
        pRVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_6,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        uVar3 = uVar3 & 0xffffffff00000000;
        VStack_8.x = distance * (float)pRVar5->_options;
        pRVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_6,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        uVar3 = uVar3 & 0xffffffff00000000;
        VStack_8.y = distance * (float)pRVar5->_cultureKey;
        pRVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_6,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        uVar3 = uVar3 & 0xffffffff00000000;
        VStack_8.z = distance * (float)pRVar5->_pattern;
        MathFunctions::MathFunctions_DivideVector
                  ((Vector3 *)&RStack_6,&VStack_8,&scale,(MethodInfo *)0x0);
        uVar3 = uVar3 & 0xffffffff00000000;
        fVar10 = (float10)func_?();
        distance = (float)fVar10;
        pSStack_11 = (String *)distance;
      }
      uVar3 = uVar3 & 0xffffffff00000000;
      pRVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          (&RStack_6,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&ray,(MethodInfo *)0x0);
      uVar3 = uVar3 & 0xffffffff00000000;
      RStack_12._options = (int32_t)((float)pRVar5->_options - hitPoint.x);
      pRVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          (&RStack_6,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&ray,(MethodInfo *)0x0);
      uVar3 = uVar3 & 0xffffffff00000000;
      RStack_12._cultureKey = (String *)((float)pRVar5->_cultureKey - hitPoint.y);
      pSVar13 = (String *)&UNK_?;
      pRVar14 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          (&RStack_6,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&ray,(MethodInfo *)0x0);
      uVar3 = uVar3 & 0xffffffff00000000;
      pRVar5 = &RStack_12;
      RStack_12._pattern = (String *)((float)pRVar14->_pattern - hitPoint.z);
      pSVar15 = (String *)&UNK_?;
      fVar10 = (float10)func_?();
      pMStack_16 = (MethodInfo *)(float)fVar10;
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pRVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                          (&RStack_6,
                           (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      VStack_8.x = (float)pMStack_16 * (float)pRVar14->_options;
      pRVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                          (&RStack_6,
                           (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      VStack_8.y = (float)pMStack_16 * (float)pRVar14->_cultureKey;
      pRVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                          (&RStack_6,
                           (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      VStack_8.z = (float)pMStack_16 * (float)pRVar14->_pattern;
      MathFunctions::MathFunctions_DivideVector
                ((Vector3 *)&RStack_6,&VStack_8,&scale,(MethodInfo *)0x0);
      fVar10 = (float10)func_?();
      pMStack_16 = (MethodInfo *)(float)fVar10;
      pRVar14 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          (&RStack_6,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      pSStack_11 = (String *)pRVar14->_options;
      pRVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                          (&RStack_6,
                           (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      pMStack_17 = (MethodInfo *)((float)pMStack_16 * (float)pRVar14->_options + (float)pSStack_11);
      pRVar14 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          (&RStack_6,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      pSStack_11 = pRVar14->_cultureKey;
      pRVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                          (&RStack_6,
                           (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      pMStack_18 = (MethodInfo *)
                   ((float)pMStack_16 * (float)pRVar14->_cultureKey + (float)pSStack_11);
      pRVar14 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          (&RStack_6,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      pSStack_11 = pRVar14->_pattern;
      pRVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                          (&RStack_6,
                           (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
      RStack_6._pattern =
           (String *)((float)pMStack_16 * (float)pRVar14->_pattern + (float)pSStack_11);
      localPos.y = (float)pMStack_17;
      localPos.x = (float)&uStack_19;
      localPos.z = (float)pMStack_18;
      pMVar20 = pMStack_17;
      pMVar21 = pMStack_18;
      pMStack_16 = (MethodInfo *)RStack_6._pattern;
      IVar22 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector(localPos,(MethodInfo *)RStack_6._pattern)
      ;
      uStack_1 = *IVar22._0_4_;
      iStack_2 = *(int16_t *)(IVar22._0_4_ + 1);
      IStack_23.x = 0;
      IStack_23.y = 0;
      IStack_23.z = 0;
      IStack_24.x = 0;
      IStack_24.y = 0;
      IStack_24.z = 0;
      this_00 = (BoxCollider *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (chunk,
                           UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::BoxCollider>__
                          );
      if (this_00 != (BoxCollider *)0x0) {
        pVVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                            ((Vector3 *)&RStack_12,this_00,(MethodInfo *)0x0);
        uStack_19._0_4_ = pVVar7->x;
        uStack_19._4_4_ = pVVar7->y;
        fVar25 = pVVar7->z;
        pVVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                            ((Vector3 *)&RStack_12,this_00,(MethodInfo *)0x0);
        center.z = fVar25;
        center.x = (float)(undefined4)uStack_19;
        center.y = (float)uStack_19._4_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
                  ((Bounds *)&puStack_4,center,*pVVar7,(MethodInfo *)0x0);
        RStack_26._options = (int32_t)puStack_4;
        RStack_26._cultureKey = pSVar13;
        RStack_26._pattern = pSVar15;
        pRStack_27 = pRVar5;
        uStack_19 = uVar3;
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCollisionFunctions);
        }
        localSpaceBounds.m_Center.y = (float)RStack_26._cultureKey;
        localSpaceBounds.m_Center.x = (float)RStack_26._options;
        localSpaceBounds.m_Center.z = (float)RStack_26._pattern;
        localSpaceBounds.m_Extents.x = (float)pRStack_27;
        localSpaceBounds.m_Extents.y = (float)(int)uStack_19;
        localSpaceBounds.m_Extents.z = (float)(uStack_19 >> 0x20);
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  (&IStack_23,&IStack_24,localSpaceBounds,(MethodInfo *)0x0);
        IVar22.z = IStack_23.z;
        IVar22.x = IStack_23.x;
        IVar22.y = IStack_23.y;
        max.z = IStack_24.z;
        max.x = IStack_24.x;
        max.y = IStack_24.y;
        MathFunctions::MathFunctions_ClampIntVector
                  ((IntVector *)&uStack_1,IVar22,max,(MethodInfo *)0x0);
        pRVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_12,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        pSStack_11 = (String *)pRVar5->_options;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        pSVar13 = (String *)
                  mscorlib.dll::System::Math::Math_Sign_2((float)pSStack_11,(MethodInfo *)0x0);
        pSStack_11 = pSVar13;
        pRVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_12,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        iStack_28 = mscorlib.dll::System::Math::Math_Sign_2
                              ((float)pRVar5->_cultureKey,(MethodInfo *)0x0);
        pRVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_12,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        iVar29 = mscorlib.dll::System::Math::Math_Sign_2((float)pRVar5->_pattern,(MethodInfo *)0x0)
        ;
        uStack_19 = CONCAT44(iVar29,(undefined4)uStack_19);
        pMStack_30 = (MethodInfo *)(float)(int)((uint)(0 < (int)pSVar13) + (int)(short)uStack_1);
        pMStack_31 = (MethodInfo *)(float)(int)((uint)(0 < iStack_28) + (int)uStack_1._2_2_);
        pMStack_32 = (MethodInfo *)(float)(int)((int)iStack_2 + (uint)(0 < iVar29));
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVRaycast);
        }
        pRVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_12,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        pMStack_30 = (MethodInfo *)
                     ((((float)pMStack_30 - (float)pMStack_17) - _UNK_?) /
                     (float)pRVar5->_options);
        pMStack_31 = (MethodInfo *)(((float)pMStack_31 - (float)pMStack_18) - _UNK_?);
        pRVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_12,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        pMStack_31 = (MethodInfo *)((float)pMStack_31 / (float)pRVar5->_cultureKey);
        pMStack_32 = (MethodInfo *)(((float)pMStack_32 - (float)pMStack_16) - _UNK_?);
        pRVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_12,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        pMStack_32 = (MethodInfo *)((float)pMStack_32 / (float)pRVar5->_pattern);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__BitConverter);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__BitConverter);
        }
        pMStack_17 = pMStack_30;
        if ((0x7f800000 < ((uint)pMStack_30 & 0x7fffffff)) || ((float)pMStack_30 == _UNK_?))
        {
          pMStack_30 = _UNK_?;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__BitConverter);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__BitConverter);
        }
        pMStack_17 = pMStack_31;
        if ((0x7f800000 < ((uint)pMStack_31 & 0x7fffffff)) || ((float)pMStack_31 == _UNK_?))
        {
          pMStack_31 = _UNK_?;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__BitConverter);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__BitConverter);
        }
        pMStack_17 = pMStack_32;
        if ((0x7f800000 < ((uint)pMStack_32 & 0x7fffffff)) || ((float)pMStack_32 == _UNK_?))
        {
          pMStack_32 = _UNK_?;
        }
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVRaycast);
        }
        pRVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_12,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        pMStack_17 = (MethodInfo *)((float)(int)pSStack_11 / (float)pRVar5->_options);
        pMStack_16 = (MethodInfo *)(float)iStack_28;
        pRVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_12,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        pMStack_16 = (MethodInfo *)((float)pMStack_16 / (float)pRVar5->_cultureKey);
        pMStack_18 = (MethodInfo *)(float)iVar29;
        pRVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_12,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        pMStack_18 = (MethodInfo *)((float)pMStack_18 / (float)pRVar5->_pattern);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        uStack_33 = pMStack_17;
        if (0x7f800000 < (uint)ABS((float)pMStack_17)) {
          pMStack_17 = _UNK_?;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        uStack_33 = pMStack_16;
        if (0x7f800000 < (uint)ABS((float)pMStack_16)) {
          pMStack_16 = _UNK_?;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        uStack_33 = pMStack_18;
        if (0x7f800000 < (uint)ABS((float)pMStack_18)) {
          pMStack_18 = _UNK_?;
        }
        while( true ) {
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pRVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                              ((Regex_CachedCodeEntryKey *)&stack0xfffffee0,
                               (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                               (MethodInfo *)0x0);
          voxelPos_00.z = iStack_2;
          voxelPos_00._0_4_ = uStack_1;
          bVar34 = MVRaycast_IsWithinDistance
                             (distance,(Vector3)*pRVar5,voxelPos_00,(MethodInfo *)0x0);
          if (bVar34 == 0) {
            return 0;
          }
          fStack_35 = uStack_1;
          uStack_33 = (MethodInfo *)CONCAT22(iStack_2,(undefined2)uStack_33);
          if (cmb == (ICubeModelCollider *)0x0) break;
          uVar36 = 0;
          uVar37 = (cmb->klass->_1).interface_offsets_count;
          if (uVar37 != 0) {
            do {
              if (cmb->klass->interfaceOffsets[uVar36].interfaceType ==
                  (Il2CppClass *)TypeInfo__ICubeModelCollider) {
                ppIVar38 = &(&(cmb->klass->vtable).GetCube)
                            [cmb->klass->interfaceOffsets[uVar36].offset].methodPtr;
                goto code_?;
              }
              uVar36 = uVar36 + 1;
            } while (uVar36 < uVar37);
          }
          ppIVar38 = (Il2CppMethodPointer *)func_?();
code_?:
          cube = (Cube *)(**ppIVar38)();
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MV__WorldObject__CubeBase);
          }
          bVar34 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                             ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
          fVar25 = uStack_1;
          uVar39 = scale._0_8_;
          uVar40 = ray.m_Direction._4_8_;
          if (bVar34 != 0) {
            uStack_33 = (MethodInfo *)CONCAT22(iStack_2,(undefined2)uStack_33);
            fStack_35 = scale.z;
            fVar41 = ray.m_Origin.x;
            fVar42 = ray.m_Origin.y;
            fVar43 = ray.m_Origin.z;
            fVar44 = ray.m_Direction.x;
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            uVar45 = scale._0_8_;
            uVar46 = ray.m_Direction._4_8_;
            ray_00.m_Origin.y._0_2_ = SUB42(fVar42,0);
            ray_00.m_Origin.x = fVar41;
            ray_00.m_Origin.y._2_2_ = (short)((uint)fVar42 >> 0x10);
            ray_00.m_Origin.z = fVar43;
            ray_00.m_Direction.x = fVar44;
            ray.m_Direction.y = (float)uVar40;
            ray.m_Direction.z = SUB84(uVar40,4);
            ray_00.m_Direction.y = ray.m_Direction.y;
            ray_00.m_Direction.z = ray.m_Direction.z;
            voxelPos.z = uStack_33._2_2_;
            voxelPos._0_4_ = fVar25;
            localBoundsHitPoint.y = (float)pMVar21;
            localBoundsHitPoint.x = (float)pMVar20;
            localBoundsHitPoint.z = (float)RStack_6._pattern;
            scale_00.z = fStack_35;
            scale.x = (float)uVar39;
            scale.y = SUB84(uVar39,4);
            scale_00.x = scale.x;
            scale_00.y = scale.y;
            ray.m_Direction._4_8_ = uVar46;
            scale._0_8_ = uVar45;
            bVar34 = MVRaycast_GetHitPoint
                               (ray_00,cube,vHit,voxelPos,localBoundsHitPoint,scale_00,distance,
                                (MethodInfo *)0x0);
            if (bVar34 != 0) {
              fVar25 = (vHit->point).z;
              uVar47 = (vHit->point).x;
              uVar48 = (vHit->point).y;
              pRVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                  ((Regex_CachedCodeEntryKey *)&stack0xfffffed0,
                                   (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                    *)&ray,(MethodInfo *)0x0);
              uVar49 = pRVar5->_options;
              uVar50 = pRVar5->_cultureKey;
              pSVar13 = pRVar5->_pattern;
              uStack_33 = (MethodInfo *)((float)uVar47 - (float)uVar49);
              fStack_35 = (float)uVar48 - (float)uVar50;
              pRVar5 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text
                        ::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                  (&RStack_26,
                                   (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                    *)&ray,(MethodInfo *)0x0);
              RStack_12._options = pRVar5->_options;
              RStack_12._cultureKey = pRVar5->_cultureKey;
              RStack_12._pattern = pRVar5->_pattern;
              if (0.0 < (float)RStack_12._cultureKey * fStack_35 +
                        (float)RStack_12._options * (float)uStack_33 +
                        (float)RStack_12._pattern * (fVar25 - (float)pSVar13)) {
                pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_TransformDirection
                                    ((Vector3 *)&RStack_26,this,vHit->normal,(MethodInfo *)0x0);
                fVar41 = pVVar7->y;
                fVar25 = pVVar7->z;
                (vHit->normal).x = pVVar7->x;
                (vHit->normal).y = fVar41;
                (vHit->normal).z = fVar25;
                *(float *)&vHit->cubePos = uStack_1;
                (vHit->cubePos).z = iStack_2;
                vHit->cube = cube;
                func_?();
                return 1;
              }
            }
          }
          if (((float)pMStack_31 <= (float)pMStack_30) || ((float)pMStack_32 <= (float)pMStack_30))
          {
            if ((float)pMStack_31 < (float)pMStack_32) {
              uStack_1._2_2_ = uStack_1._2_2_ + (short)iStack_28;
              if (uStack_1._2_2_ < IStack_23.y) {
                return 0;
              }
              if (IStack_24.y < uStack_1._2_2_) {
                return 0;
              }
              pMStack_31 = (MethodInfo *)((float)pMStack_16 + (float)pMStack_31);
            }
            else {
              iStack_2 = iStack_2 + (short)(uStack_19 >> 0x20);
              if (iStack_2 < IStack_23.z) {
                return 0;
              }
              if (IStack_24.z < iStack_2) {
                return 0;
              }
              pMStack_32 = (MethodInfo *)((float)pMStack_32 + (float)pMStack_18);
            }
          }
          else {
            uStack_1._0_2_ = (short)uStack_1 + (short)pSStack_11;
            if ((short)uStack_1 < IStack_23.x) {
              return 0;
            }
            if (IStack_24.x < (short)uStack_1) {
              return 0;
            }
            pMStack_30 = (MethodInfo *)((float)pMStack_17 + (float)pMStack_30);
          }
        }
      }
    }
  }
  func_?();
  pcVar51 = (code *)swi(3);
  bVar34 = (*pcVar51)();
  return bVar34;
}


/* Boolean GetHitPoint(Ray, Cube, VoxelHit ByRef, IntVector, Vector3, Vector3, Single) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_GetHitPoint
               (Ray ray,Cube *cube,VoxelHit *vHit,IntVector voxelPos,Vector3 localBoundsHitPoint,
               Vector3 scale,float scaledDistance,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffea8;
  puVar5 = &stack0xfffffea8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeRef__MV__WorldObject__FaceFlags);
    func_?(&TypeInfo__MV__WorldObject__FaceFlags);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__MVRaycast);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  fStack_6 = 0.0;
  VStack_7.x = 0.0;
  VStack_7.y = 0.0;
  VStack_7.z = 0.0;
  pIStack_8 = (IEnumerator *)0x0;
  iStack_9 = 0;
  if (cube == (Cube *)0x0) {
code_?:
    uVar10 = func_?();
code_?:
    func_?(uVar10);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  if ((cube->fields).hiddenSides != 0x3f) {
    if ((cube->fields)._.unIndentedSides != 0x3f) {
      pVStack_13 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                             ((CubeBase *)cube,(MethodInfo *)0x0);
      fVar14 = 0.0;
      uVar15 = 0;
      uVar16._0_4_ = 0.0;
      uVar16._4_4_ = 0.0;
      if (pVStack_13 != (Vector3__Array *)0x0) {
        pVVar17 = pVStack_13->vector;
        for (; handle = TypeRef__MV__WorldObject__FaceFlags,
            (int)uVar15 < (int)pVStack_13->max_length; uVar15 = uVar15 + 1) {
          if (pVStack_13->max_length <= uVar15) {
            func_?();
            goto code_?;
          }
          uStack_18._0_4_ = pVVar17->x;
          uStack_18._4_4_ = pVVar17->y;
          piStack_19 = (int *)pVVar17->z;
          fStack_20 = (float)piStack_19 + (float)(int)voxelPos.z;
          pVVar17->x = (float)(undefined4)uStack_18 + (float)(int)voxelPos.x;
          pVVar17->y = (float)uStack_18._4_4_ + (float)(int)voxelPos.y;
          pVVar17->z = fStack_20;
          pVVar17 = pVVar17 + 1;
        }
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Enum);
        }
        this_00 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
        if (this_00 != (Array *)0x0) {
          pIStack_8 = mscorlib.dll::System::Array::Array_GetEnumerator(this_00,(MethodInfo *)0x0);
          uStack_18 = ZEXT48(&pIStack_8) << 0x20;
          piStack_19 = &iStack_9;
          uStack_1 = 1;
          do {
            do {
              pIVar21 = pIStack_8;
              pIStack_22 = pIStack_8;
              if (pIStack_8 == (IEnumerator *)0x0) goto code_?;
              pIStack_23 = pIStack_8->klass;
              uVar24 = 0;
              uVar25 = (pIStack_23->_1).interface_offsets_count;
              fStack_26 = (float)(uint)uVar25;
              if (uVar25 != 0) {
                do {
                  if (pIStack_23->interfaceOffsets[uVar24].interfaceType ==
                      (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                    pVVar27 = &(pIStack_8->klass->vtable).MoveNext +
                              pIStack_8->klass->interfaceOffsets[uVar24].offset;
                    goto code_?;
                  }
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar25);
              }
              pVVar27 = (VirtualInvokeData *)
                        func_?(pIStack_8,TypeInfo__System__Collections__IEnumerator,0);
code_?:
              cVar28 = (*pVVar27->methodPtr)(pIVar21,pVVar27->method);
              if (cVar28 == '\0') {
                uStack_1 = 0xffffffff;
                iStack_9 = func_?(pIStack_8,TypeInfo__System__IDisposable);
                if (iStack_9 != 0) {
                  func_?(0,TypeInfo__System__IDisposable,iStack_9);
                }
                goto code_?;
              }
              if (pIStack_8 == (IEnumerator *)0x0) goto code_?;
              piVar29 = (int *)func_?(1,TypeInfo__System__Collections__IEnumerator,
                                               pIStack_8);
              uVar10 = CONCAT44(TypeInfo__MV__WorldObject__FaceFlags,piVar29);
              if (piVar29 == (int *)0x0) goto code_?;
              if (*(Il2CppClass **)(*piVar29 + 0x20) !=
                  (TypeInfo__MV__WorldObject__FaceFlags->_0).element_class) goto code_?;
              pbVar30 = (byte *)func_?(piVar29);
              fStack_31 = (float)CONCAT31(fStack_31._1_3_,*pbVar30);
            } while (((cube->fields).hiddenSides & *pbVar30) != 0);
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MV__WorldObject__CubeBase);
            }
            fVar32 = fStack_31;
            pIStack_22 = (IEnumerator *)
                         MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                                   ((FaceFlags__Enum)fStack_31,(MethodInfo *)0x0);
            FVar33 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                               ((FaceFlags__Enum)fVar32,(MethodInfo *)0x0);
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Cube);
            }
            pVVar34 = Cube::Cube_GetFace_1(pVStack_13,FVar33,(MethodInfo *)0x0);
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVRaycast);
            }
            pRVar35 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                ((Regex_CachedCodeEntryKey *)&puStack_36,
                                 (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                                 (MethodInfo *)0x0);
            uVar37 = pRVar35->_options;
            uVar38 = pRVar35->_cultureKey;
            pSVar39 = pRVar35->_pattern;
            fStack_40 = (float)uVar37;
            fStack_26 = (float)uVar38;
            pRVar35 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                (&RStack_41,
                                 (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                                 (MethodInfo *)0x0);
            uVar42 = pRVar35->_options;
            uVar43 = pRVar35->_cultureKey;
            fVar44 = (float)pRVar35->_pattern * _UNK_?;
            fVar32 = (float)uVar43 * _UNK_?;
            fVar45 = (float)uVar42 * _UNK_?;
            if (pVVar34 == (Vector3__Array *)0x0) goto code_?;
            func_?(&stack0xffffff14,0);
            func_?(&stack0xffffff20,3);
            func_?(&stack0xffffff2c,2);
            pRVar35 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                ((Regex_CachedCodeEntryKey *)&stack0xfffffed8,
                                 (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                                 (MethodInfo *)0x0);
            pc.y = (float)in_stack_46;
            pc.x = (float)in_stack_47;
            pb.y = (float)uStack_48;
            pb.x = (float)in_stack_49;
            p2.y = localBoundsHitPoint.y + fVar32;
            p2.x = localBoundsHitPoint.x + fVar45;
            p1.y = fStack_26;
            p1.x = fStack_40;
            p1.z = (float)pSVar39;
            p2.z = localBoundsHitPoint.z + fVar44;
            pa.z = in_stack_50;
            pa.x = (float)(int)in_stack_51;
            pa.y = (float)(int)((ulonglong)in_stack_51 >> 0x20);
            pb.z = in_stack_52;
            pc.z = in_stack_53;
            bVar12 = MathFunctions::MathFunctions_LineFacetCollision
                               (p1,p2,pa,pb,pc,(Vector3)*pRVar35,(Vector3 *)&stack0xffffff74,
                                &vHit->normal,(MethodInfo *)0x0);
            if (bVar12 != 0) break;
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVRaycast);
            }
            pRVar35 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                ((Regex_CachedCodeEntryKey *)&stack0xfffffecc,
                                 (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                                 (MethodInfo *)0x0);
            uVar54 = pRVar35->_options;
            uVar55 = pRVar35->_cultureKey;
            pSVar39 = pRVar35->_pattern;
            fStack_40 = (float)uVar54;
            fStack_26 = (float)uVar55;
            pRVar35 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                ((Regex_CachedCodeEntryKey *)&stack0xfffffec0,
                                 (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                                 (MethodInfo *)0x0);
            uStack_56._0_4_ = (float)pRVar35->_options;
            uStack_56._4_4_ = (float)pRVar35->_cultureKey;
            pSStack_57 = pRVar35->_pattern;
            pRVar35 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                ((Regex_CachedCodeEntryKey *)&stack0xfffffeb4,
                                 (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                                 (MethodInfo *)0x0);
            uVar58 = pRVar35->_options;
            uVar59 = pRVar35->_cultureKey;
            pSStack_60 = (String *)((float)pSStack_57 + (float)pRVar35->_pattern * _UNK_?);
            uStack_61 = CONCAT44(uStack_56._4_4_ + (float)uVar59 * _UNK_?,
                                 (float)uStack_56 + (float)uVar58 * _UNK_?);
            func_?();
            func_?();
            func_?();
            pRVar35 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                (&RStack_62,
                                 (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                                 (MethodInfo *)0x0);
            pb_00.y = (float)uStack_63;
            pb_00.x = (float)in_stack_64;
            p1_00.y = fStack_26;
            p1_00.x = fStack_40;
            p1_00.z = (float)pSVar39;
            p2_00.z = (float)pSStack_60;
            p2_00.x = (float)(undefined4)uStack_61;
            p2_00.y = (float)uStack_61._4_4_;
            pa_00.z = fStack_20;
            pa_00.x = (float)(undefined4)uStack_65;
            pa_00.y = (float)uStack_65._4_4_;
            pb_00.z = fStack_66;
            pc_00.z = fStack_67;
            pc_00._0_8_ = uStack_68;
            bVar12 = MathFunctions::MathFunctions_LineFacetCollision
                               (p1_00,p2_00,pa_00,pb_00,pc_00,(Vector3)*pRVar35,
                                (Vector3 *)&stack0xffffff74,&vHit->normal,(MethodInfo *)0x0);
          } while (bVar12 == 0);
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVRaycast);
          }
          pRVar35 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                              (&RStack_62,
                               (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                               (MethodInfo *)0x0);
          uStack_61._0_4_ = pRVar35->_options;
          uStack_61._4_4_ = pRVar35->_cultureKey;
          pSStack_60 = pRVar35->_pattern;
          fStack_40 = (float)uStack_61._4_4_ - SUB84(uVar16,4);
          fStack_69 = (float)(undefined4)uStack_61 - (float)uVar16;
          fStack_20 = (float)pSStack_60 - fVar14;
          fStack_26 = fStack_20;
          fVar70 = (float10)func_?();
          if (scaledDistance < (float)fVar70) {
            cube._3_1_ = 0;
          }
          else {
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                      (&RStack_62,
                       (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
            mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                      (&RStack_62,
                       (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
            mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                      (&RStack_62,
                       (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
            pVVar17 = MathFunctions::MathFunctions_MultiplyVector
                                ((Vector3 *)&RStack_62,(Vector3 *)&stack0xffffff80,&scale,
                                 (MethodInfo *)0x0);
            uVar71 = pVVar17->x;
            uVar72 = pVVar17->y;
            fStack_26 = pVVar17->z;
            RStack_41._options = 0;
            fStack_69 = (float)uVar71;
            fStack_40 = (float)uVar72;
            fVar70 = (float10)func_?();
            vHit->distance = (float)fVar70;
            pRVar35 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                (&RStack_62,
                                 (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&ray,(MethodInfo *)0x0);
            uStack_56._0_4_ = (float)pRVar35->_options;
            uStack_56._4_4_ = (float)pRVar35->_cultureKey;
            pSStack_57 = pRVar35->_pattern;
            pRVar35 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                (&RStack_62,
                                 (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&ray,(MethodInfo *)0x0);
            uStack_61._0_4_ = pRVar35->_options;
            uStack_61._4_4_ = pRVar35->_cultureKey;
            pSStack_60 = pRVar35->_pattern;
            fVar14 = vHit->distance;
            fStack_20 = (float)pSStack_57 + (float)pSStack_60 * fVar14;
            (vHit->point).x = (float)uStack_56 + (float)(undefined4)uStack_61 * fVar14;
            (vHit->point).y = uStack_56._4_4_ + (float)uStack_61._4_4_ * fVar14;
            (vHit->point).z = fStack_20;
            vHit->face = (int32_t)pIStack_22;
            cube._3_1_ = 1;
          }
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return cube._3_1_;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVRaycast);
    }
    fStack_20 = (float)(int)voxelPos.z;
    value.y = (float)(int)voxelPos.y;
    value.x = (float)(int)voxelPos.x;
    value.z = fStack_20;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
    ParticleSystem_Particle_set_position
              ((ParticleSystem_Particle *)TypeInfo__MVRaycast->static_fields,value,(MethodInfo *)0x0
              );
    pRVar35 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                        (&RStack_62,
                         (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0);
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Contains
                       (&TypeInfo__MVRaycast->static_fields->cubeBounds,(Vector3)*pRVar35,
                        (MethodInfo *)0x0);
    if (bVar12 == 0) {
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this = TypeInfo__MVRaycast->static_fields;
      uVar73 = (this->intersectRay).m_Direction.z;
      uVar74 = (this->intersectRay).m_Origin.x;
      uVar75 = (this->intersectRay).m_Origin.y;
      uVar76 = (this->intersectRay).m_Origin.z;
      ray_00.m_Origin.z = (float)uVar76;
      ray_00.m_Origin.y = (float)uVar75;
      ray_00.m_Origin.x = (float)uVar74;
      uVar77 = (this->intersectRay).m_Direction.x;
      uVar78 = (this->intersectRay).m_Direction.y;
      ray_00.m_Direction.y = (float)uVar78;
      ray_00.m_Direction.x = (float)uVar77;
      ray_00.m_Direction.z = (float)uVar73;
      bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_IntersectRay
                         (&this->cubeBounds,ray_00,&fStack_6,(MethodInfo *)0x0);
      if (bVar12 != 0) {
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pRVar35 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                            (&RStack_62,
                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        uStack_56._0_4_ = (float)pRVar35->_options;
        uStack_56._4_4_ = (float)pRVar35->_cultureKey;
        pSStack_57 = pRVar35->_pattern;
        pRVar35 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_62,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&TypeInfo__MVRaycast->static_fields->intersectRay,(MethodInfo *)0x0)
        ;
        uStack_61._0_4_ = pRVar35->_options;
        uStack_61._4_4_ = pRVar35->_cultureKey;
        pSStack_60 = pRVar35->_pattern;
        fVar14 = (float)uStack_56 + (float)(undefined4)uStack_61 * fStack_6;
        pVStack_13 = (Vector3__Array *)(uStack_56._4_4_ + (float)uStack_61._4_4_ * fStack_6);
        fStack_31 = (float)pSStack_57 + (float)pSStack_60 * fStack_6;
        pRVar35 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                            (&RStack_62,
                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)TypeInfo__MVRaycast->static_fields,(MethodInfo *)0x0);
        uStack_61._0_4_ = pRVar35->_options;
        uStack_61._4_4_ = pRVar35->_cultureKey;
        pSStack_60 = pRVar35->_pattern;
        uStack_56 = CONCAT44((float)pVStack_13 - (float)uStack_61._4_4_,
                             fVar14 - (float)(undefined4)uStack_61);
        pSStack_57 = (String *)(fStack_31 - (float)pSStack_60);
        if (fStack_6 <= scaledDistance) {
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          localDir.z = (float)pSStack_57;
          localDir.x = (float)uStack_56;
          localDir.y = uStack_56._4_4_;
          FVar33 = Cube::Cube_GetFaceIdentityFromLocalDir(localDir,(MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          FVar79 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceToFaceFlag
                             (FVar33,(MethodInfo *)0x0);
          if (((cube->fields).hiddenSides & (byte)FVar79) == 0) {
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pRVar35 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                (&RStack_62,
                                 (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                                 (MethodInfo *)0x0);
            VStack_7.x = (float)pRVar35->_options * fStack_6;
            pRVar35 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                (&RStack_62,
                                 (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                                 (MethodInfo *)0x0);
            VStack_7.y = (float)pRVar35->_cultureKey * fStack_6;
            pRVar35 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                (&RStack_62,
                                 (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&TypeInfo__MVRaycast->static_fields->intersectRay,
                                 (MethodInfo *)0x0);
            VStack_7.z = (float)pRVar35->_pattern * fStack_6;
            pVVar17 = MathFunctions::MathFunctions_MultiplyVector
                                ((Vector3 *)&RStack_62,&VStack_7,&scale,(MethodInfo *)0x0);
            uVar80 = pVVar17->x;
            uVar81 = pVVar17->y;
            fStack_26 = pVVar17->z;
            fStack_69 = (float)uVar80;
            fStack_40 = (float)uVar81;
            fVar70 = (float10)func_?();
            vHit->distance = (float)fVar70;
            pRVar35 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                (&RStack_62,
                                 (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&ray,(MethodInfo *)0x0);
            uStack_56._0_4_ = (float)pRVar35->_options;
            uStack_56._4_4_ = (float)pRVar35->_cultureKey;
            pSStack_57 = pRVar35->_pattern;
            pRVar35 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                (&RStack_62,
                                 (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&ray,(MethodInfo *)0x0);
            uStack_61._0_4_ = pRVar35->_options;
            uStack_61._4_4_ = pRVar35->_cultureKey;
            pSStack_60 = pRVar35->_pattern;
            fVar14 = vHit->distance;
            fStack_20 = (float)pSStack_57 + (float)pSStack_60 * fVar14;
            (vHit->point).x = (float)uStack_56 + (float)(undefined4)uStack_61 * fVar14;
            (vHit->point).y = uStack_56._4_4_ + (float)uStack_61._4_4_ * fVar14;
            (vHit->point).z = fStack_20;
            vHit->face = FVar33;
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVVar17 = Cube::Cube_GetFaceAxis((Vector3 *)&RStack_62,FVar33,(MethodInfo *)0x0);
            fVar32 = pVVar17->y;
            fVar14 = pVVar17->z;
            (vHit->normal).x = pVVar17->x;
            (vHit->normal).y = fVar32;
            (vHit->normal).z = fVar14;
            *unaff_FS_OFFSET = uStack_3;
            return 1;
          }
        }
      }
    }
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return 0;
}


/* Void HandleObjectsInsideBoxCollider(Ray, Int32, PhysicsCollisionDatasWrapper, VoxelHit ByRef,
   HashSet`1[System.Int32], Single) */

void Assembly-CSharp.dll::MVRaycast::MVRaycast_HandleObjectsInsideBoxCollider
               (Ray ray,int32_t indexOfFirstHit,PhysicsCollisionDatasWrapper *collisionData,
               VoxelHit *voxelHit,HashSet_1_System_Int32_ *ignoreWoIds,float distance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MVRaycast);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  BStack_1.m_Center.x = 0.0;
  BStack_1.m_Center.y = 0.0;
  BStack_1.m_Center.z = 0.0;
  BStack_1.m_Extents.x = 0.0;
  BStack_1.m_Extents.y = 0.0;
  BStack_1.m_Extents.z = 0.0;
  func_?(&VStack_2,0,0x48);
  index = indexOfFirstHit;
  if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) {
    while( true ) {
      while( true ) {
        do {
          index = index + 1;
          if ((collisionData->fields).length <= index) {
            return;
          }
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                           );
            cRam_? = '\x01';
          }
          this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (collisionData->fields).physicsCollisionDatas;
          if ((this == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
             (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this,index,
                                 MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                                ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
          unaff_EBX = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                (*(Transform **)((int)RVar3 + 0x14),(MethodInfo *)0x0);
          if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
            RStack_4._cultureKey = (String *)TypeInfo__SharedCollisionFunctions;
            RStack_4._options = (int32_t)&UNK_?;
            func_?();
          }
          if (cRam_? == '\0') {
            func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
            cRam_? = '\x01';
          }
        } while ((unaff_EBX == (MVWorldObjectClient *)0x0) ||
                ((ignoreWoIds != (HashSet_1_System_Int32_ *)0x0 &&
                 (bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                          HashSet_1_System_Int32__Contains
                                    (ignoreWoIds,(unaff_EBX->fields)._.id,
                                     MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                    ), bVar5 != 0))));
        iVar6 = func_?(unaff_EBX,TypeInfo__ICubeModelCollider);
        if (iVar6 != 0) break;
        pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                           (collisionData,index,(MethodInfo *)0x0);
        if (pPVar7 == (PhysicsCollisionData *)0x0) goto code_?;
        if ((pPVar7->fields).isInsideCollider == 0) {
          pRVar8 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                   RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                   KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                             (&RStack_9,
                              (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)&ray,(MethodInfo *)0x0);
          uStack_10._0_4_ = pRVar8->_options;
          uStack_10._4_4_ = pRVar8->_cultureKey;
          pSStack_11 = pRVar8->_pattern;
          uStack_12._0_4_ = (voxelHit->point).x;
          uStack_12._4_4_ = (voxelHit->point).y;
          fStack_13 = (voxelHit->point).z;
          fVar14 = (float)(undefined4)uStack_10 - (float)(undefined4)uStack_12;
          fVar15 = (float)uStack_10._4_4_ - (float)uStack_12._4_4_;
          fVar16 = (float)pSStack_11 - fStack_13;
          pRVar8 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                   RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                   KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                             (&RStack_17,
                              (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)&ray,(MethodInfo *)0x0);
          uStack_18._0_4_ = (float)pRVar8->_options;
          uStack_18._4_4_ = (float)pRVar8->_cultureKey;
          pSStack_19 = pRVar8->_pattern;
          pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,index,(MethodInfo *)0x0);
          if (pPVar7 == (PhysicsCollisionData *)0x0) goto code_?;
          uStack_20._0_4_ = (pPVar7->fields).point.x;
          uStack_20._4_4_ = (pPVar7->fields).point.y;
          fStack_21 = (pPVar7->fields).point.z;
          if ((uStack_18._4_4_ - (float)uStack_20._4_4_) *
              (uStack_18._4_4_ - (float)uStack_20._4_4_) +
              ((float)uStack_18 - (float)(undefined4)uStack_20) *
              ((float)uStack_18 - (float)(undefined4)uStack_20) +
              ((float)pSStack_19 - fStack_21) * ((float)pSStack_19 - fStack_21) <
              fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16) {
            pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                               (collisionData,index,(MethodInfo *)0x0);
            woId = (unaff_EBX->fields)._.id;
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__SharedCollisionFunctions);
            }
            SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                      (voxelHit,pPVar7,woId,(MethodInfo *)0x0);
            return;
          }
        }
      }
      pRVar8 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                         (&RStack_22,
                          (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&ray,(MethodInfo *)0x0);
      uStack_23._0_4_ = pRVar8->_options;
      uStack_23._4_4_ = pRVar8->_cultureKey;
      pSStack_24 = pRVar8->_pattern;
      uStack_25._0_4_ = (voxelHit->point).x;
      uStack_25._4_4_ = (voxelHit->point).y;
      fStack_26 = (voxelHit->point).z;
      fVar14 = (float)(undefined4)uStack_23 - (float)(undefined4)uStack_25;
      fVar15 = (float)uStack_23._4_4_ - (float)uStack_25._4_4_;
      fVar16 = (float)pSStack_24 - fStack_26;
      pRVar8 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                         (&RStack_27,
                          (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&ray,(MethodInfo *)0x0);
      uStack_28._0_4_ = (float)pRVar8->_options;
      uStack_28._4_4_ = (float)pRVar8->_cultureKey;
      pSStack_29 = pRVar8->_pattern;
      pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,index,(MethodInfo *)0x0);
      if (pPVar7 == (PhysicsCollisionData *)0x0) break;
      uStack_30._0_4_ = (pPVar7->fields).point.x;
      uStack_30._4_4_ = (pPVar7->fields).point.y;
      fStack_31 = (pPVar7->fields).point.z;
      if (fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16 <
          (uStack_28._4_4_ - (float)uStack_30._4_4_) * (uStack_28._4_4_ - (float)uStack_30._4_4_) +
          ((float)uStack_28 - (float)(undefined4)uStack_30) *
          ((float)uStack_28 - (float)(undefined4)uStack_30) +
          ((float)pSStack_29 - fStack_31) * ((float)pSStack_29 - fStack_31)) {
        return;
      }
      pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
      if ((pPVar7 == (PhysicsCollisionData *)0x0) ||
         (this_00 = (pPVar7->fields).collider, this_00 == (Collider *)0x0)) break;
      pBVar32 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                         (&BStack_33,this_00,(MethodInfo *)0x0);
      BStack_1.m_Center.x = (pBVar32->m_Center).x;
      BStack_1.m_Center.y = (pBVar32->m_Center).y;
      BStack_1.m_Center.z = (pBVar32->m_Center).z;
      BStack_1.m_Extents.x = (pBVar32->m_Extents).x;
      BStack_1.m_Extents.y = (pBVar32->m_Extents).y;
      BStack_1.m_Extents.z = (pBVar32->m_Extents).z;
      pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,index,(MethodInfo *)0x0);
      if (pPVar7 == (PhysicsCollisionData *)0x0) break;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Contains
                        (&BStack_1,(pPVar7->fields).point,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return;
      }
      RStack_4._cultureKey = (String *)0x48;
      RStack_4._options = 0;
      func_?(&VStack_2);
      BStack_33.m_Center.z = ray.m_Origin.x;
      BStack_33.m_Extents.x = ray.m_Origin.y;
      BStack_33.m_Extents.y = ray.m_Origin.z;
      BStack_33.m_Extents.z = ray.m_Direction.x;
      fStack_34 = ray.m_Direction.y;
      fStack_35 = ray.m_Direction.z;
      pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,index,(MethodInfo *)0x0);
      if ((pPVar7 == (PhysicsCollisionData *)0x0) ||
         (this_01 = (pPVar7->fields).transform, this_01 == (Transform *)0x0)) break;
      pIStack_36 = (ICubeModelCollider__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_01,(MethodInfo *)0x0);
      pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,index,(MethodInfo *)0x0);
      if (pPVar7 == (PhysicsCollisionData *)0x0) break;
      uStack_37._0_4_ = (pPVar7->fields).point.x;
      uStack_37._4_4_ = (pPVar7->fields).point.y;
      fStack_38 = (pPVar7->fields).point.z;
      puVar39 = (undefined8 *)func_?(auStack_40,8,unaff_EBX);
      uStack_41 = *puVar39;
      fVar16 = *(float *)(puVar39 + 1);
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVRaycast);
      }
      pIStack_42 = TypeInfo__ICubeModelCollider;
      pIVar43 = (ICubeModelCollider *)func_?(unaff_EBX,TypeInfo__ICubeModelCollider);
      if (pIVar43 == (ICubeModelCollider *)0x0) goto code_?;
      ray_00.m_Origin.y = BStack_33.m_Extents.x;
      ray_00.m_Origin.x = BStack_33.m_Center.z;
      ray_00.m_Origin.z = BStack_33.m_Extents.y;
      ray_00.m_Direction.x = BStack_33.m_Extents.z;
      ray_00.m_Direction.y = fStack_34;
      ray_00.m_Direction.z = fStack_35;
      hitPoint.z = fStack_38;
      hitPoint.x = (float)(undefined4)uStack_37;
      hitPoint.y = (float)uStack_37._4_4_;
      scale.z = fVar16;
      scale.x = (float)(undefined4)uStack_41;
      scale.y = (float)uStack_41._4_4_;
      bVar5 = MVRaycast_GetCellOnRay
                        (ray_00,&VStack_2,(GameObject *)pIStack_36,pIVar43,hitPoint,distance,scale,
                         (MethodInfo *)0x0);
      if (bVar5 != 0) {
        pRVar8 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                 RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                 KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                           (&RStack_44,
                            (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)&ray,(MethodInfo *)0x0);
        uStack_45._0_4_ = pRVar8->_options;
        uStack_45._4_4_ = pRVar8->_cultureKey;
        pSStack_46 = pRVar8->_pattern;
        uStack_47._0_4_ = (voxelHit->point).x;
        uStack_47._4_4_ = (voxelHit->point).y;
        fStack_48 = (voxelHit->point).z;
        fVar14 = (float)(undefined4)uStack_45 - (float)(undefined4)uStack_47;
        fVar15 = (float)uStack_45._4_4_ - (float)uStack_47._4_4_;
        fVar16 = (float)pSStack_46 - fStack_48;
        pRVar8 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                 RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                 KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                           (&RStack_4,
                            (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)&ray,(MethodInfo *)0x0);
        uStack_49._0_4_ = pRVar8->_options;
        uStack_49._4_4_ = pRVar8->_cultureKey;
        pSStack_50 = pRVar8->_pattern;
        if (((float)uStack_49._4_4_ - VStack_2.point.y) *
            ((float)uStack_49._4_4_ - VStack_2.point.y) +
            ((float)(undefined4)uStack_49 - VStack_2.point.x) *
            ((float)(undefined4)uStack_49 - VStack_2.point.x) +
            ((float)pSStack_50 - VStack_2.point.z) * ((float)pSStack_50 - VStack_2.point.z) <
            fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16) {
          pPVar7 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,index,(MethodInfo *)0x0);
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVRaycast);
          }
          pIStack_36 = TypeInfo__ICubeModelCollider;
          pIVar43 = (ICubeModelCollider *)func_?(unaff_EBX,TypeInfo__ICubeModelCollider);
          if (pIVar43 == (ICubeModelCollider *)0x0) goto code_?;
          MVRaycast_SetFoundHitVariables(&VStack_2,pPVar7,pIVar43,(MethodInfo *)0x0);
          if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__SharedCollisionFunctions);
          }
          SharedCollisionFunctions::SharedCollisionFunctions_SetToVoxelHit
                    (voxelHit,&VStack_2,(MethodInfo *)0x0);
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EBX,pIStack_36);
code_?:
  func_?(unaff_EBX,pIStack_42);
  pcVar51 = (code *)swi(3);
  (*pcVar51)();
  return;
}


/* Boolean HitDetectOnWo(Ray, Int32, MVWorldObjectClient, PhysicsCollisionDatasWrapper, Boolean,
   VoxelHit ByRef, HashSet`1[System.Int32], Single) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_HitDetectOnWo
               (Ray ray,int32_t i,MVWorldObjectClient *wo,
               PhysicsCollisionDatasWrapper *collisionData,bool handleObjectsInsideBoxCollider,
               VoxelHit *voxelHit,HashSet_1_System_Int32_ *ignoreWoIds,float distance,
               MethodInfo *method)

{
  pMVar1 = wo;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MVRaycast);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  func_?(voxelHit,0,0x48);
  iVar2 = func_?(wo,TypeInfo__ICubeModelCollider);
  pMVar3 = wo;
  if (collisionData == (PhysicsCollisionDatasWrapper *)0x0) {
code_?:
    wo = pMVar3;
    func_?();
  }
  else {
    if (iVar2 == 0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (collisionData->fields).physicsCollisionDatas;
      if ((pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar4,i,
                             MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                            ), RVar5 != (RegexCharClass_SingleRange)0x0)) {
        if (*(char *)((int)RVar5 + 0x18) != '\0') {
          return 0;
        }
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                         );
          cRam_? = '\x01';
        }
        pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (collisionData->fields).physicsCollisionDatas;
        if ((pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
           (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar4,i,
                               MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                              ), wo != (MVWorldObjectClient *)0x0)) {
          woId = (wo->fields)._.id;
          if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__SharedCollisionFunctions);
          }
          SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                    (voxelHit,(PhysicsCollisionData *)RVar5,woId,(MethodInfo *)0x0);
          return 1;
        }
      }
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (collisionData->fields).physicsCollisionDatas;
    if (((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
        (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar4,i,
                            MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                           ), RVar5 == (RegexCharClass_SingleRange)0x0)) ||
       (*(Component **)((int)RVar5 + 0x14) == (Component *)0x0)) goto code_?;
    chunk = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (*(Component **)((int)RVar5 + 0x14),(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (collisionData->fields).physicsCollisionDatas;
    if ((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar4,i,
                           MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                          ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    uVar6 = *(undefined8 *)((int)RVar5 + 8);
    pMVar3 = *(MVWorldObjectClient **)((int)RVar5 + 0x10);
    if (wo == (MVWorldObjectClient *)0x0) goto code_?;
    pVVar7 = (Vector3 *)
             (*(wo->klass->vtable).get_Scale.methodPtr)
                       (&stack0xffffffd8,wo,(wo->klass->vtable).get_Scale.method);
    scale = *pVVar7;
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVRaycast);
    }
    pIStack_8 = TypeInfo__ICubeModelCollider;
    pIVar9 = (ICubeModelCollider *)func_?(wo,TypeInfo__ICubeModelCollider);
    if (pIVar9 == (ICubeModelCollider *)0x0) goto code_?;
    hitPoint.z = (float)pMVar3;
    uStack_10 = (undefined4)((ulonglong)uVar6 >> 0x20);
    hitPoint.x = (float)uVar11;
    hitPoint.y = (float)uStack_10;
    bVar12 = MVRaycast_GetCellOnRay
                      (ray,voxelHit,chunk,pIVar9,hitPoint,distance,scale,(MethodInfo *)0x0);
    if (bVar12 == 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (collisionData->fields).physicsCollisionDatas;
    if (pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar4,i,
                       MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                      );
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVRaycast);
    }
    wo = (MVWorldObjectClient *)TypeInfo__ICubeModelCollider;
    pIVar9 = (ICubeModelCollider *)func_?(pMVar1,TypeInfo__ICubeModelCollider);
    if (pIVar9 != (ICubeModelCollider *)0x0) {
      MVRaycast_SetFoundHitVariables
                (voxelHit,(PhysicsCollisionData *)RVar5,pIVar9,(MethodInfo *)0x0);
      if (handleObjectsInsideBoxCollider == 0) {
        return 1;
      }
      if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVRaycast_HandleObjectsInsideBoxCollider
                (ray,i,collisionData,voxelHit,ignoreWoIds,distance,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?(pMVar1,wo);
code_?:
  func_?(pMVar1,pIStack_8);
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Boolean IsWithinDistance(Single, Vector3, IntVector) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_IsWithinDistance
               (float distance,Vector3 localOrigin,IntVector voxelPos,MethodInfo *method)

{
  if (distance != _UNK_?) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_2._0_4_ = (pVVar1->oneVector).x;
    uStack_2._4_4_ = (pVVar1->oneVector).y;
    fStack_3 = (pVVar1->oneVector).z;
    fStack_4 = (float)uStack_2._4_4_ * _UNK_? * (float)uStack_2._4_4_ * _UNK_? +
               (float)(undefined4)uStack_2 * _UNK_? *
               (float)(undefined4)uStack_2 * _UNK_? +
               fStack_3 * _UNK_? * fStack_3 * _UNK_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_2._0_4_ = (pVVar1->oneVector).x;
    uStack_2._4_4_ = (pVVar1->oneVector).y;
    fStack_3 = (pVVar1->oneVector).z;
    fStack_5 = (float)uStack_2._4_4_ * _UNK_? * (float)uStack_2._4_4_ * _UNK_? +
               (float)(undefined4)uStack_2 * _UNK_? *
               (float)(undefined4)uStack_2 * _UNK_? +
               fStack_3 * _UNK_? * fStack_3 * _UNK_?;
    pVVar6 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalIntVectorToLocalPos(&VStack_7,voxelPos,(MethodInfo *)0x0);
    uVar8 = pVVar6->x;
    uVar9 = pVVar6->y;
    fVar10 = pVVar6->z - localOrigin.z;
    return ((float)uVar9 - localOrigin.y) * ((float)uVar9 - localOrigin.y) +
           ((float)uVar8 - localOrigin.x) * ((float)uVar8 - localOrigin.x) + fVar10 * fVar10 <=
           distance * distance + fStack_4 + fStack_5 * distance;
  }
  return 1;
}


/* Boolean MVHit(Ray, MVWorldObjectClient, VoxelHit ByRef, Single) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHit
               (Ray ray,MVWorldObjectClient *wo,VoxelHit *voxelHit,float distance,MethodInfo *method
               )

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff18;
  puVar5 = &stack0xffffff18;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__Add_UnityEngine__RaycastHit_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Add_UnityEngine__Collider_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Clear__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__ToArray__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__ToArray__
                   );
    func_?(&TypeInfo__MVRaycast);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PhysicsCollisionData);
    func_?(&TypeInfo__SharedCollisionFunctions);
    func_?(&StringLiteral_No_collider_on_wo_of_type_);
    func_?(&StringLiteral_Maybe_a_recursive_check_of_the_c);
    func_?(&StringLiteral_Remember_to_test_positive_infini);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&pPStack_6,0,0x2c);
  iStack_7 = 0;
  BStack_8.m_Extents.y = 0.0;
  BStack_8.m_Extents.z = 0.0;
  BStack_8.m_Center.x = 0.0;
  BStack_8.m_Center.y = 0.0;
  BStack_8.m_Center.z = 0.0;
  BStack_8.m_Extents.x = 0.0;
  func_?(&RStack_9,0,0x2c);
  func_?(voxelHit,0,0x48);
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  pLVar10 = TypeInfo__MVRaycast->static_fields->sortedHits;
  overlapResult = unaff_ESI;
  if (pLVar10 != (List_1_UnityEngine_RaycastHit_ *)0x0) {
    piVar11 = &(pLVar10->fields)._version;
    *piVar11 = *piVar11 + 1;
    (pLVar10->fields)._size = 0;
    iVar12 = func_?(wo,TypeInfo__ICubeModelCollider);
    overlapResult = (UnitySynchronizationContext_WorkRequest__Array *)TypeInfo__ICubeModelCollider;
    if (iVar12 == 0) {
      overlapResult = unaff_ESI;
      if (wo != (MVWorldObjectClient *)0x0) {
        overlapResult = (UnitySynchronizationContext_WorkRequest__Array *)(wo->fields).collider;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)overlapResult,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar13 != 0) {
          pTVar14 = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
          pSVar15 = StringLiteral_No_collider_on_wo_of_type_;
          if (pTVar14 == (Type *)0x0) {
            str1 = (String *)0x0;
          }
          else {
            str1 = (String *)
                   (*(pTVar14->klass->vtable).ToString.methodPtr)
                             (pTVar14,(pTVar14->klass->vtable).ToString.method);
          }
          pSVar15 = mscorlib.dll::System::String::String_Concat_3(pSVar15,str1,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar15,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Maybe_a_recursive_check_of_the_c,(MethodInfo *)0x0);
code_?:
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Remember_to_test_positive_infini,(MethodInfo *)0x0);
        this = (wo->fields).collider;
        if (this != (Collider *)0x0) {
          ray_02.m_Origin.y = ray.m_Origin.y;
          ray_02.m_Origin.x = ray.m_Origin.x;
          ray_02.m_Origin.z = ray.m_Origin.z;
          ray_02.m_Direction.x = ray.m_Direction.x;
          ray_02.m_Direction.y = ray.m_Direction.y;
          ray_02.m_Direction.z = ray.m_Direction.z;
          bVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                            (this,ray_02,&RStack_9,distance,(MethodInfo *)0x0);
          if (bVar13 == 0) goto code_?;
          pPStack_6 = TypeInfo__PhysicsCollisionData;
          this_01 = (PhysicsCollisionData *)func_?();
          overlapResult = (UnitySynchronizationContext_WorkRequest__Array *)0x0;
          if (this_01 != (PhysicsCollisionData *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)this_01,ExceptionArgument__Enum_obj,unaff_EDI);
            hit.m_Point.y = RStack_9.m_Point.y;
            hit.m_Point.x = RStack_9.m_Point.x;
            hit.m_Point.z = RStack_9.m_Point.z;
            hit.m_Normal.x = RStack_9.m_Normal.x;
            hit.m_Normal.y = RStack_9.m_Normal.y;
            hit.m_Normal.z = RStack_9.m_Normal.z;
            hit.m_FaceID = RStack_9.m_FaceID;
            hit.m_Distance = RStack_9.m_Distance;
            hit.m_UV.x = RStack_9.m_UV.x;
            hit.m_UV.y = RStack_9.m_UV.y;
            hit.m_Collider = RStack_9.m_Collider;
            PhysicsCollisionData::PhysicsCollisionData_Set(this_01,hit,(MethodInfo *)0x0);
            woId = (wo->fields)._.id;
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                      (voxelHit,this_01,woId,(MethodInfo *)0x0);
code_?:
            *unaff_FS_OFFSET = uStack_3;
            return 1;
          }
        }
      }
    }
    else if (wo != (MVWorldObjectClient *)0x0) {
      iVar12 = func_?(wo,TypeInfo__ICubeModelCollider);
      pUVar16 = (UnitySynchronizationContext_WorkRequest__Array *)TypeInfo__ICubeModelCollider;
      if (iVar12 == 0) {
        func_?(wo,overlapResult);
      }
      else {
        puVar17 = (uint *)func_?(wo,TypeInfo__ICubeModelCollider);
        uStack_18 = CONCAT44(puVar17,(undefined4)uStack_18);
        if (puVar17 == (uint *)0x0) goto code_?;
        uStack_19 = *puVar17;
        uVar20 = 0;
        uVar21 = *(ushort *)(uStack_19 + 0xb2);
        uStack_22 = (uint)uVar21;
        if (uVar21 != 0) {
          do {
            if (*(ICubeModelCollider__Class **)(*(int *)(uStack_19 + 0x58) + (uint)uVar20 * 8) ==
                TypeInfo__ICubeModelCollider) {
              puVar23 = (undefined4 *)
                        (*(int *)(*(int *)(*puVar17 + 0x58) + 4 + (uint)uVar20 * 8) * 8 + 0xdc +
                        *puVar17);
              goto code_?;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar21);
        }
        puVar23 = (undefined4 *)func_?(puVar17,TypeInfo__ICubeModelCollider,4);
code_?:
        overlapResult =
             (UnitySynchronizationContext_WorkRequest__Array *)
             (*(code *)*puVar23)(puVar17,puVar23[1]);
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVRaycast);
        }
        pLVar24 = TypeInfo__MVRaycast->static_fields->colliderList;
        if (pLVar24 != (List_1_UnityEngine_Collider_ *)0x0) {
          iVar12 = (pLVar24->fields)._size;
          piVar11 = &(pLVar24->fields)._version;
          *piVar11 = *piVar11 + 1;
          (pLVar24->fields)._size = 0;
          if (0 < iVar12) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar24->fields)._items,0,iVar12,(MethodInfo *)0x0);
          }
          if (overlapResult != (UnitySynchronizationContext_WorkRequest__Array *)0x0) {
            puStack_25 = (uint *)func_?(0,TypeInfo__System__Collections__IEnumerable,
                                                 overlapResult);
            piStack_26 = &iStack_7;
            ppuStack_27 = &puStack_25;
            fStack_28 = 0.0;
            uStack_1 = 1;
            while (puStack_25 != (uint *)0x0) {
              cVar29 = func_?(0,TypeInfo__System__Collections__IEnumerator,puStack_25);
              puVar17 = puStack_25;
              pUVar16 = (UnitySynchronizationContext_WorkRequest__Array *)
                        TypeInfo__System__Collections__IEnumerator;
              if (cVar29 == '\0') {
                uStack_1 = 0xffffffff;
                iStack_7 = func_?(puStack_25,TypeInfo__System__IDisposable);
                if (iStack_7 != 0) {
                  func_?(0,TypeInfo__System__IDisposable,iStack_7);
                }
                uStack_1 = 0xffffffff;
                if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MVRaycast);
                }
                this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                          TypeInfo__MVRaycast->static_fields->colliderList;
                if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
                  overlapResult =
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                       UnitySynchronizationContext+WorkRequest]::
                       List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                 (this_00,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__ToArray__
                                 );
                  pLVar10 = TypeInfo__MVRaycast->static_fields->sortedHits;
                  if (pLVar10 != (List_1_UnityEngine_RaycastHit_ *)0x0) {
                    hits = (RaycastHit__Array *)
                           mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           UnitySynchronizationContext+WorkRequest]::
                           List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                     ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *
                                      )pLVar10,
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__ToArray__
                                     );
                    pRVar30 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
                              Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                        (&RStack_31,
                                         (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                          *)&ray,(MethodInfo *)0x0);
                    uStack_18._0_4_ = pRVar30->_options;
                    uStack_18._4_4_ = pRVar30->_cultureKey;
                    _fStack_34 = CONCAT44(pRVar30->_pattern,fStack_32);
                    if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    origin.z = (float)pSStack_33;
                    origin.x = (float)(undefined4)uStack_18;
                    origin.y = (float)uStack_18._4_4_;
                    collisionData =
                         SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData
                                   ((Collider__Array *)overlapResult,hits,origin,(MethodInfo *)0x0);
                    overlapResult = (UnitySynchronizationContext_WorkRequest__Array *)0x0;
                    if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
                  }
                }
                break;
              }
              _fStack_34 = CONCAT44(puStack_25,fStack_32);
              if (puStack_25 == (uint *)0x0) break;
              uStack_22 = *puStack_25;
              uVar20 = 0;
              uStack_18 = uStack_18 & 0xffffffff;
              uVar21 = *(ushort *)(uStack_22 + 0xb2);
              uStack_19 = (uint)uVar21;
              if (uVar21 != 0) {
                do {
                  if (*(IEnumerator__Class **)(*(int *)(uStack_22 + 0x58) + (uint)uVar20 * 8) ==
                      TypeInfo__System__Collections__IEnumerator) {
                    puVar23 = (undefined4 *)
                              (*(int *)(*(int *)(*puStack_25 + 0x58) + 4 + (uint)uVar20 * 8) * 8 +
                               0xc4 + *puStack_25);
                    goto code_?;
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar21);
              }
              puVar23 = (undefined4 *)
                        func_?(puStack_25,TypeInfo__System__Collections__IEnumerator,1);
code_?:
              piVar34 = (int *)(*(code *)*puVar23)(puVar17,puVar23[1]);
              uVar35 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                ,piVar34);
              overlapResult = pUVar16;
              if (piVar34 == (int *)0x0) break;
              if (*(Il2CppClass **)(*piVar34 + 0x20) !=
                  (
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                  ->_0).element_class) goto code_?;
              iVar12 = func_?(piVar34);
              overlapResult = *(UnitySynchronizationContext_WorkRequest__Array **)(iVar12 + 0xc);
              if (overlapResult == (UnitySynchronizationContext_WorkRequest__Array *)0x0) break;
              ray_00.m_Origin.y = ray.m_Origin.y;
              ray_00.m_Origin.x = ray.m_Origin.x;
              ray_00.m_Origin.z = ray.m_Origin.z;
              ray_00.m_Direction.x = ray.m_Direction.x;
              ray_00.m_Direction.y = ray.m_Direction.y;
              ray_00.m_Direction.z = ray.m_Direction.z;
              bVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                                ((Collider *)overlapResult,ray_00,(RaycastHit *)&pPStack_6,distance
                                 ,(MethodInfo *)0x0);
              if (bVar13 == 0) {
                pBVar36 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                                    ((Bounds *)&stack0xffffff24,(Collider *)overlapResult,
                                     (MethodInfo *)0x0);
                BStack_8.m_Center.x = (pBVar36->m_Center).x;
                BStack_8.m_Center.y = (pBVar36->m_Center).y;
                BStack_8.m_Center.z = (pBVar36->m_Center).z;
                BStack_8.m_Extents.x = (pBVar36->m_Extents).x;
                BStack_8.m_Extents.y = (pBVar36->m_Extents).y;
                BStack_8.m_Extents.z = (pBVar36->m_Extents).z;
                pRVar30 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                          RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                          KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                    (&RStack_31,
                                     (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                      *)&ray,(MethodInfo *)0x0);
                bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Contains
                                  (&BStack_8,(Vector3)*pRVar30,(MethodInfo *)0x0);
                if (bVar13 != 0) {
                  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
                    pMStack_37 = TypeInfo__MVRaycast;
                    func_?();
                  }
                  pLVar24 = TypeInfo__MVRaycast->static_fields->colliderList;
                  if (pLVar24 == (List_1_UnityEngine_Collider_ *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pLVar24,(Object *)overlapResult,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Add_UnityEngine__Collider_
                            );
                }
              }
              else {
                if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MVRaycast);
                }
                pLVar10 = TypeInfo__MVRaycast->static_fields->sortedHits;
                if (pLVar10 == (List_1_UnityEngine_RaycastHit_ *)0x0) break;
                func_?(pLVar10,pPStack_6,pMStack_37,in_stack_38,in_stack_39,
                                in_stack_40,in_stack_41,uStack_42,fStack_43,VStack_44.x,
                                VStack_44.y,iStack_45,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__Add_UnityEngine__RaycastHit_
                               );
              }
            }
          }
        }
      }
    }
  }
  uVar35 = func_?();
  pUVar16 = overlapResult;
code_?:
  func_?(uVar35);
code_?:
  func_?(wo,pUVar16);
  pcVar46 = (code *)swi(3);
  bVar13 = (*pcVar46)();
  return bVar13;
code_?:
  if ((collisionData->fields).length <= (int)overlapResult) goto code_?;
  fStack_47 = ray.m_Origin.x;
  fStack_28 = ray.m_Origin.y;
  ppuStack_27 = (uint **)ray.m_Origin.z;
  piStack_26 = (int *)ray.m_Direction.x;
  fStack_32 = ray.m_Direction.y;
  pSStack_33 = (String *)ray.m_Direction.z;
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  ray_01.m_Origin.y = fStack_28;
  ray_01.m_Origin.x = fStack_47;
  ray_01.m_Origin.z = (float)ppuStack_27;
  ray_01.m_Direction.x = (float)piStack_26;
  ray_01.m_Direction.y = (float)_fStack_34;
  ray_01.m_Direction.z = SUB84(_fStack_34,4);
  bVar13 = MVRaycast_HitDetectOnWo
                    (ray_01,(int32_t)overlapResult,wo,collisionData,0,voxelHit,
                     (HashSet_1_System_Int32_ *)0x0,distance,(MethodInfo *)0x0);
  if (bVar13 != 0) goto code_?;
  overlapResult =
       (UnitySynchronizationContext_WorkRequest__Array *)
       ((int)&((Il2CppClass_0 *)&overlapResult->klass)->image + 1);
  goto code_?;
}


/* List`1[VoxelHit] MVHitAll(Ray, Single, Int32, HashSet`1[System.Int32]) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHitAll
          (Ray ray,float distance,int32_t layerMask,HashSet_1_System_Int32_ *ignoreWoIds,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVRaycast);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  pLVar1 = MVRaycast_MVHit_2(ray,1,distance,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return pLVar1;
}


/* Boolean MVHit(Ray, VoxelHit ByRef, Single, Int32, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHit_1
               (Ray ray,VoxelHit *voxelHit,float distance,int32_t layerMask,
               HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    func_?(&TypeInfo__MVRaycast);
    func_?(&StringLiteral_Hit_counter_greater_than_1_);
    cRam_? = '\x01';
  }
  func_?(voxelHit,0,0x48);
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  this = (List_1_GameTierProgressBar_TierProgressData_ *)
         MVRaycast_MVHit_2(ray,0,distance,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  if (this != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    if ((this->fields)._size != 0) {
      if ((this->fields)._size < 2) {
        pGVar1 = mscorlib.dll::System::Collections::Generic::
                  List`1[GameTierProgressBar+TierProgressData]::
                  List_1_GameTierProgressBar_TierProgressData__get_Item
                            ((GameTierProgressBar_TierProgressData *)&stack0xffffffb4,this,0,
                             MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                            );
        pTVar2 = pGVar1->progressText;
        pGVar3 = pGVar1->progressDivider;
        pGVar4 = pGVar1->progressBarTextBubble;
        pGVar5 = pGVar1->avatarHead;
        pRVar6 = pGVar1->avatarHeadImage;
        pGVar7 = pGVar1->avatarHeadUI;
        pPVar8 = pGVar1->disabledProgressBar;
        pGVar9 = pGVar1->disabledProgressDivider;
        pGVar10 = pGVar1->disabledBarTextBubble;
        pGVar11 = pGVar1->tierIconTempUnlock;
        pCVar12 = (Cube *)pGVar1->tierIconNumber;
        pPVar13 = pGVar1->endResultProgressBar;
        pCVar14 = (Collider *)pGVar1->tempProgress;
        pTVar15 = (Transform *)pGVar1->disabledTempProgress;
        pGVar16 = pGVar1->freeTryTextBubble;
        iVar17 = *(int64_t *)&pGVar1->hoverInputHandler;
        (voxelHit->point).x = (float)pGVar1->progressBar;
        (voxelHit->point).y = (float)pTVar2;
        (voxelHit->point).z = (float)pGVar3;
        (voxelHit->normal).x = (float)pGVar4;
        (voxelHit->normal).y = (float)pGVar5;
        (voxelHit->normal).z = (float)pRVar6;
        *(GameObject **)&voxelHit->cubePos = pGVar7;
        *(ProgressBar **)&(voxelHit->cubePos).z = pPVar8;
        voxelHit->face = (int32_t)pGVar9;
        *(GamePassesTextBubble **)&voxelHit->isCubeHit = pGVar10;
        voxelHit->woId = (int32_t)pGVar11;
        voxelHit->cube = pCVar12;
        voxelHit->distance = (float)pPVar13;
        voxelHit->collider = pCVar14;
        voxelHit->transform = pTVar15;
        *(GamePassesTextBubble **)&voxelHit->field_0x3c = pGVar16;
        voxelHit->interactionFlags = iVar17;
        func_?();
        return 1;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
    return 0;
  }
  func_?();
  pcVar18 = (code *)swi(3);
  bVar19 = (*pcVar18)();
  return bVar19;
}


/* List`1[VoxelHit] MVHit(Ray, Boolean, Single, Int32, HashSet`1[System.Int32]) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVRaycast::MVRaycast_MVHit_2
          (Ray ray,bool all,float distance,int32_t layerMask,HashSet_1_System_Int32_ *ignoreWoIds,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__Clear__);
    func_?(&TypeInfo__MVRaycast);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  func_?(&puStack_1,0,0x48);
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRaycast);
  }
  pLVar2 = TypeInfo__MVRaycast->static_fields->voxelHits;
  if (pLVar2 != (List_1_VoxelHit_ *)0x0) {
    iVar3 = (pLVar2->fields)._size;
    piVar4 = &(pLVar2->fields)._version;
    *piVar4 = *piVar4 + 1;
    (pLVar2->fields)._size = 0;
    if (0 < iVar3) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar2->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
    pRVar5 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                        (&RStack_6,
                         (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)&ray,(MethodInfo *)0x0);
    uVar7 = pRVar5->_options;
    uVar8 = pRVar5->_cultureKey;
    if ((float)uVar8 * (float)uVar8 + (float)uVar7 * (float)uVar7 +
        (float)pRVar5->_pattern * (float)pRVar5->_pattern != 0.0) {
      if (all != 0) {
        if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVRaycast);
        }
        this = (HashSet_1_UnityEngine_Vector3_ *)TypeInfo__MVRaycast->static_fields->foundWos;
        if (this == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3__Clear
                  (this,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
      }
      RStack_6._cultureKey = (String *)ray.m_Direction.y;
      RStack_6._pattern = (String *)ray.m_Direction.z;
      fVar9 = ray.m_Origin.x;
      fVar10 = ray.m_Origin.y;
      pSVar11 = (String *)ray.m_Origin.z;
      pSVar12 = (String *)ray.m_Direction.x;
      if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CollisionDetectionGlobalBuffers);
      }
      ray_01.m_Origin.y = fVar10;
      ray_01.m_Origin.x = fVar9;
      ray_01.m_Origin.z = (float)pSVar11;
      ray_01.m_Direction.x = (float)pSVar12;
      ray_01.m_Direction.y = (float)RStack_6._cultureKey;
      ray_01.m_Direction.z = (float)RStack_6._pattern;
      hitAmount = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastNonAlloc_1
                            (ray_01,TypeInfo__CollisionDetectionGlobalBuffers->static_fields->
                                    rayHitBuffer,distance,layerMask,(MethodInfo *)0x0);
      pRVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          ((Regex_CachedCodeEntryKey *)&stack0xffffffdc,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&ray,(MethodInfo *)0x0);
      uVar13 = pRVar5->_options;
      uVar14 = pRVar5->_cultureKey;
      pSVar11 = pRVar5->_pattern;
      overlapAmount =
           UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                     ((Vector3)*pRVar5,0.0,
                      TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer,
                      layerMask,(MethodInfo *)0x0);
      fVar9 = 0.0;
      RStack_6._pattern =
           (String *)TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
      pRStack_15 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
      this_03 = (Cube *)&ray;
      pRVar5 = (Regex_CachedCodeEntryKey *)&stack0xffffffd0;
      puVar16 = &UNK_?;
      pRVar17 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          (pRVar5,(KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                    *)this_03,(MethodInfo *)0x0);
      uVar18 = pRVar17->_options;
      uVar19 = pRVar17->_cultureKey;
      origin.y = (float)uVar19;
      origin.x = (float)uVar18;
      pSStack_20 = pRVar17->_pattern;
      if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      origin.z = (float)pSStack_20;
      pCVar21 = (Collider__Array *)RStack_6._pattern;
      pSStack_20 = (String *)
                  SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData_1
                            (overlapAmount,(Collider__Array *)RStack_6._pattern,hitAmount,pRStack_15
                             ,origin,(MethodInfo *)0x0);
      iVar3 = 0;
      if (pSStack_20 == (String *)0x0) goto code_?;
      for (; pSVar12 = pSStack_20,
          iVar3 < ((PhysicsCollisionDatasWrapper__Fields *)&pSStack_20->fields)->length;
          iVar3 = iVar3 + 1) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                         );
          cRam_? = '\x01';
        }
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  ((PhysicsCollisionDatasWrapper__Fields *)&pSVar12->fields)->physicsCollisionDatas;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        RVar22 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (this_00,iVar3,
                            MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                           );
        if (RVar22 == (RegexCharClass_SingleRange)0x0) goto code_?;
        wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                       (*(Transform **)((int)RVar22 + 0x14),(MethodInfo *)0x0);
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          pSStack_23 = TypeInfo__SharedCollisionFunctions;
          func_?();
        }
        if (cRam_? == '\0') {
          func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
          cRam_? = '\x01';
        }
        if (wo != (MVWorldObjectClient *)0x0) {
          if (ignoreWoIds != (HashSet_1_System_Int32_ *)0x0) {
            bVar24 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                    HashSet_1_System_Int32__Contains
                              (ignoreWoIds,(wo->fields)._.id,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                              );
            if (bVar24 != 0) goto code_?;
          }
          if (all != 0) {
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVRaycast);
            }
            this_01 = TypeInfo__MVRaycast->static_fields->foundWos;
            if (this_01 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
            bVar24 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                    HashSet_1_System_Int32__Contains
                              (this_01,(wo->fields)._.id,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                              );
            if (bVar24 != 0) goto code_?;
          }
          pSStack_25 = ray.m_Direction.y;
          pSStack_26 = ray.m_Direction.z;
          fVar10 = ray.m_Origin.x;
          fVar27 = ray.m_Origin.y;
          pSVar12 = (String *)ray.m_Origin.z;
          pSVar28 = (String *)ray.m_Direction.x;
          if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVRaycast);
          }
          ray_00.m_Origin.y = fVar27;
          ray_00.m_Origin.x = fVar10;
          ray_00.m_Origin.z = (float)pSVar12;
          ray_00.m_Direction.x = (float)pSVar28;
          ray_00.m_Direction.y = (float)pSStack_25;
          ray_00.m_Direction.z = (float)pSStack_26;
          bVar24 = MVRaycast_HitDetectOnWo
                            (ray_00,iVar3,wo,(PhysicsCollisionDatasWrapper *)pSStack_20,all ^ 1,
                             (VoxelHit *)&puStack_1,ignoreWoIds,distance,(MethodInfo *)0x0);
          if (bVar24 != 0) {
            if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVRaycast);
            }
            pLVar2 = TypeInfo__MVRaycast->static_fields->voxelHits;
            if (pLVar2 == (List_1_VoxelHit_ *)0x0) goto code_?;
            func_?(pLVar2,puStack_1,pSStack_23,fStack_29,fStack_30,fStack_31,puStack_32,
                            uVar13,uVar14,pSVar11,puVar16,pRVar5,this_03,fVar9,pCStack_33,
                            &UNK_?,overlapAmount,pCVar21,hitAmount,
                            MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_)
            ;
            this_02 = (HashSet_1_System_Object_ *)TypeInfo__MVRaycast->static_fields->foundWos;
            if (this_02 == (HashSet_1_System_Object_ *)0x0) goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Add
                      (this_02,(Object *)(wo->fields)._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            if (all == 0) break;
          }
        }
code_?:
      }
    }
    if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVRaycast);
    }
    return TypeInfo__MVRaycast->static_fields->voxelHits;
  }
code_?:
  func_?();
  pcVar34 = (code *)swi(3);
  pLVar2 = (List_1_VoxelHit_ *)(*pcVar34)();
  return pLVar2;
}


/* Void SetFoundHitVariables(VoxelHit ByRef, PhysicsCollisionData, ICubeModelCollider) */

void Assembly-CSharp.dll::MVRaycast::MVRaycast_SetFoundHitVariables
               (VoxelHit *voxelHit,PhysicsCollisionData *collisionData,
               ICubeModelCollider *cubeModelBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&TypeInfo__ICubeModelCollider);
    cRam_? = '\x01';
  }
  voxelHit->isCubeHit = 1;
  if (cubeModelBase != (ICubeModelCollider *)0x0) {
    iVar1 = func_?(0,TypeInfo__ICubeModelCollider,cubeModelBase);
    voxelHit->woId = iVar1;
    uVar2 = 0;
    uVar3 = (cubeModelBase->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (cubeModelBase->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          pVVar4 = &(cubeModelBase->klass->vtable).get_GameObject +
                   cubeModelBase->klass->interfaceOffsets[uVar2].offset;
          goto code_?;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    pVVar4 = (VirtualInvokeData *)func_?(cubeModelBase,TypeInfo__ICubeModelCollider,1);
code_?:
    this = (GameObject *)(*pVVar4->methodPtr)(cubeModelBase,pVVar4->method);
    if (this != (GameObject *)0x0) {
      pCVar5 = (Collider *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this,
                          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                         );
      voxelHit->collider = pCVar5;
      func_?(&voxelHit->collider,pCVar5);
      uVar2 = 0;
      uVar3 = (cubeModelBase->klass->_1).interface_offsets_count;
      if (uVar3 != 0) {
        do {
          if (cubeModelBase->klass->interfaceOffsets[uVar2].interfaceType ==
              (Il2CppClass *)TypeInfo__ICubeModelCollider) {
            pVVar4 = &(cubeModelBase->klass->vtable).get_Transform +
                     cubeModelBase->klass->interfaceOffsets[uVar2].offset;
            goto code_?;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      pVVar4 = (VirtualInvokeData *)func_?(cubeModelBase,TypeInfo__ICubeModelCollider,2);
code_?:
      pTVar6 = (Transform *)(*pVVar4->methodPtr)(cubeModelBase,pVVar4->method);
      voxelHit->transform = pTVar6;
      func_?(&voxelHit->transform,pTVar6);
      iVar7 = func_?(3,TypeInfo__ICubeModelCollider,cubeModelBase);
      voxelHit->interactionFlags = iVar7;
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVRaycast() */

void Assembly-CSharp.dll::MVRaycast::MVRaycast__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Collider>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>);
    func_?(&TypeInfo__System__Collections__Generic__List<VoxelHit>);
    func_?(&TypeInfo__MVRaycast);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  center = TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  pLStack_2 = (List_1_VoxelHit___Class *)0x0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
            ((Bounds *)&puStack_1,center,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
             (MethodInfo *)0x0);
  pMVar5 = TypeInfo__MVRaycast->static_fields;
  (pMVar5->cubeBounds).m_Center.x = (float)puStack_1;
  (pMVar5->cubeBounds).m_Center.y = (float)pLStack_2;
  (pMVar5->cubeBounds).m_Center.z = fVar3;
  (pMVar5->cubeBounds).m_Extents.x = fVar4;
  (pMVar5->cubeBounds).m_Extents.y = 0.0;
  (pMVar5->cubeBounds).m_Extents.z = 0.0;
  pMVar5 = TypeInfo__MVRaycast->static_fields;
  (pMVar5->intersectRay).m_Origin.x = 0.0;
  (pMVar5->intersectRay).m_Origin.y = 0.0;
  (pMVar5->intersectRay).m_Origin.z = 0.0;
  (pMVar5->intersectRay).m_Direction.x = 0.0;
  (pMVar5->intersectRay).m_Direction.y = 0.0;
  (pMVar5->intersectRay).m_Direction.z = 0.0;
  this = (HashSet_1_UnityEngine_Vector3_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    TypeInfo__MVRaycast->static_fields->foundWos = (HashSet_1_System_Int32_ *)this;
    func_?();
    pLStack_2 = TypeInfo__System__Collections__Generic__List<VoxelHit>;
    this_00 = (List_1_VoxelHit_ *)func_?();
    if (this_00 != (List_1_VoxelHit_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
      TypeInfo__MVRaycast->static_fields->voxelHits = this_00;
      func_?();
      pLStack_2 = (List_1_VoxelHit___Class *)
                   TypeInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>;
      this_01 = (List_1_UnityEngine_RaycastHit_ *)func_?();
      if (this_01 != (List_1_UnityEngine_RaycastHit_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::RaycastHit>__List__);
        TypeInfo__MVRaycast->static_fields->sortedHits = this_01;
        func_?();
        pLStack_2 = (List_1_VoxelHit___Class *)
                     TypeInfo__System__Collections__Generic__List<UnityEngine::Collider>;
        this_02 = (List_1_UnityEngine_Collider_ *)func_?();
        if (this_02 != (List_1_UnityEngine_Collider_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)this_02,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
          TypeInfo__MVRaycast->static_fields->colliderList = this_02;
          func_?();
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

