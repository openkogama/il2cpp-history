
/* Void DebugAll() */

void Assembly-CSharp.dll::CellTraverser::CellTraverser_DebugAll
               (CellTraverser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_localChunkSpaceVoxelPos_);
    func_?(&StringLiteral_stepZ_);
    func_?(&StringLiteral_stepX_);
    func_?(&StringLiteral_tMax_);
    func_?(&StringLiteral_tDelta_);
    func_?(&StringLiteral_initialtMax_);
    func_?(&StringLiteral_intersectRay_);
    func_?(&StringLiteral_stepDir_);
    func_?(&StringLiteral_stepY_);
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  IStack_2.x = 0;
  IStack_2.y = 0;
  IStack_2.z = 0;
  VStack_1.z = 0.0;
  pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_ToString
                     ((Ray *)&stack0xffffffd0,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_intersectRay_,pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  VStack_1.z = (this->fields).tMax.z;
  VStack_1.x = (this->fields).tMax.x;
  VStack_1.y = (this->fields).tMax.y;
  pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_ToString
                     (&VStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_tMax_,pSVar3,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  IStack_2.x = (this->fields).localChunkSpaceVoxelPos.x;
  IStack_2.y = (this->fields).localChunkSpaceVoxelPos.y;
  IStack_2.z = (this->fields).localChunkSpaceVoxelPos.z;
  pSVar3 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                     (&IStack_2,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_localChunkSpaceVoxelPos_,pSVar3,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).stepX,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_stepX_,pSVar3,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).stepY,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_stepY_,pSVar3,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).stepZ,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_stepZ_,pSVar3,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  VStack_1.z = (this->fields).tDelta.z;
  VStack_1.x = (this->fields).tDelta.x;
  VStack_1.y = (this->fields).tDelta.y;
  pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_ToString
                     (&VStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_tDelta_,pSVar3,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  IStack_2.x = (this->fields).stepDir.x;
  IStack_2.y = (this->fields).stepDir.y;
  IStack_2.z = (this->fields).stepDir.z;
  pSVar3 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                     (&IStack_2,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_stepDir_,pSVar3,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  VStack_1.z = (this->fields).initialtMax.z;
  VStack_1.x = (this->fields).initialtMax.x;
  VStack_1.y = (this->fields).initialtMax.y;
  pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_ToString
                     (&VStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_initialtMax_,pSVar3,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  return;
}


/* Void Init(Vector3, CollisionState) */

void Assembly-CSharp.dll::CellTraverser::CellTraverser_Init
               (CellTraverser *this,Vector3 localOrigin,CollisionState collisionState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  pIVar1 = collisionState.cmb;
  if (collisionState.cmb != (ICubeModelCollider *)0x0) {
    uVar2 = 0;
    uVar3 = ((collisionState.cmb)->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if ((collisionState.cmb)->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          pVVar4 = &((collisionState.cmb)->klass->vtable).get_PrototypeCubeModel +
                    (collisionState.cmb)->klass->interfaceOffsets[uVar2].offset;
          goto code_?;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    pVVar4 = (VirtualInvokeData *)
              func_?(collisionState.cmb,TypeInfo__ICubeModelCollider,8);
code_?:
    iVar5 = (*pVVar4->methodPtr)(pIVar1,pVVar4->method);
    if (iVar5 != 0) {
      (this->fields).chunkSize = *(int32_t *)(iVar5 + 0x18);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
      ParticleSystem_Particle_set_position
                ((ParticleSystem_Particle *)&this->fields,localOrigin,(MethodInfo *)0x0);
      value.y = collisionState.localDirection.y;
      value.x = collisionState.localDirection.x;
      value.z = collisionState.localDirection.z;
      UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_set_direction
                (&(this->fields).intersectRay,value,(MethodInfo *)0x0);
      pRVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          ((Regex_CachedCodeEntryKey *)&stack0xffffffd0,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&this->fields,(MethodInfo *)0x0);
      uVar7 = pRVar6->_options;
      uVar8 = pRVar6->_cultureKey;
      localPos.y = (float)uVar7;
      localPos.x = (float)&stack0xffffffd4;
      localPos.z = (float)uVar8;
      IVar9 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector(localPos,(MethodInfo *)pRVar6->_pattern);
      uVar10 = *IVar9._0_4_;
      iVar11 = *(int16_t *)(IVar9._0_4_ + 1);
      (this->fields).voxelPos.x = (short)uVar10;
      (this->fields).voxelPos.y = (short)((uint)uVar10 >> 0x10);
      (this->fields).voxelPos.z = iVar11;
      this_00 = &(this->fields).voxelPos;
      pSVar12 = (String *)collisionState.scanAxis;
      iVar13 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&(this->fields).voxelPos,collisionState.scanAxis,(MethodInfo *)0x0);
      iVar11 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState.minBounds,collisionState.scanAxis,(MethodInfo *)0x0);
      iVar14 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState.maxBounds,collisionState.scanAxis,(MethodInfo *)0x0);
      if ((iVar11 <= iVar13) && (iVar11 = iVar13, iVar14 < iVar13)) {
        iVar11 = iVar14;
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                (this_00,(int32_t)pSVar12,iVar11,(MethodInfo *)0x0);
      auStack_15._4_4_ = (String *)0x0;
      uStack_16 = (String *)((uint)uStack_16._2_2_ << 0x10);
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)(auStack_15 + 4),(uint)(ushort)(this->fields).voxelPos.x,
                 (uint)(ushort)(this->fields).voxelPos.y,(uint)(ushort)(this->fields).voxelPos.z,
                 (MethodInfo *)0x0);
      pIVar1 = collisionState.cmb;
      (this->fields).localChunkSpaceVoxelPos.x = auStack_15._4_2_;
      (this->fields).localChunkSpaceVoxelPos.y = auStack_15._6_2_;
      (this->fields).localChunkSpaceVoxelPos.z = (int16_t)uStack_16;
      if (collisionState.cmb != (ICubeModelCollider *)0x0) {
        uVar2 = 0;
        uVar3 = ((collisionState.cmb)->klass->_1).interface_offsets_count;
        if (uVar3 != 0) {
          do {
            if ((collisionState.cmb)->klass->interfaceOffsets[uVar2].interfaceType ==
                (Il2CppClass *)TypeInfo__ICubeModelCollider) {
              pVVar4 = &((collisionState.cmb)->klass->vtable).CubePosToChunkPos +
                        (collisionState.cmb)->klass->interfaceOffsets[uVar2].offset;
              goto code_?;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar3);
        }
        pVVar4 = (VirtualInvokeData *)
                  func_?(collisionState.cmb,TypeInfo__ICubeModelCollider,9);
code_?:
        (*pVVar4->methodPtr)(pIVar1,&(this->fields).localChunkSpaceVoxelPos,pVVar4->method);
        pRVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            ((Regex_CachedCodeEntryKey *)&stack0xffffffd0,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&this->fields,(MethodInfo *)0x0);
        pSVar12 = (String *)pRVar6->_options;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        iVar17 = mscorlib.dll::System::Math::Math_Sign_2((float)pSVar12,(MethodInfo *)0x0);
        (this->fields).stepX = iVar17;
        pRVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            ((Regex_CachedCodeEntryKey *)&stack0xffffffd0,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&this->fields,(MethodInfo *)0x0);
        iVar17 = mscorlib.dll::System::Math::Math_Sign_2
                           ((float)pRVar6->_cultureKey,(MethodInfo *)0x0);
        (this->fields).stepY = iVar17;
        pRVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            ((Regex_CachedCodeEntryKey *)&stack0xffffffd0,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&this->fields,(MethodInfo *)0x0);
        iVar17 = mscorlib.dll::System::Math::Math_Sign_2((float)pRVar6->_pattern,(MethodInfo *)0x0)
        ;
        (this->fields).stepZ = iVar17;
        uVar10 = _UNK_?;
        sVar18 = (this->fields).voxelPos.y;
        iVar5 = (this->fields).stepX;
        iVar19 = (this->fields).stepY;
        sVar20 = (this->fields).voxelPos.x;
        uStack_16 = (String *)0x7f800000;
        sVar21 = (this->fields).voxelPos.z;
        (this->fields).tMax.x = (float)_UNK_?;
        (this->fields).tMax.y = (float)uVar10;
        (this->fields).tMax.z = INFINITY;
        pRVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            ((Regex_CachedCodeEntryKey *)auStack_15,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&this->fields,(MethodInfo *)0x0);
        if ((float)pRVar6->_options != 0.0) {
          mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
          RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
          KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                    ((Regex_CachedCodeEntryKey *)auStack_15,
                     (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)&this->fields,(MethodInfo *)0x0);
          pSVar12 = (String *)&UNK_?;
          pRVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                              ((Regex_CachedCodeEntryKey *)auStack_15,
                               (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)&this->fields,(MethodInfo *)0x0);
          (this->fields).tMax.x =
               ((float)(int)((int)sVar20 + (uint)(0 < iVar5)) - ((float)pSVar12 + _UNK_?)) /
               (float)pRVar6->_options;
        }
        pRVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            ((Regex_CachedCodeEntryKey *)auStack_15,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&this->fields,(MethodInfo *)0x0);
        if ((float)pRVar6->_cultureKey != 0.0) {
          pRVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                              ((Regex_CachedCodeEntryKey *)auStack_15,
                               (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)&this->fields,(MethodInfo *)0x0);
          fVar22 = (float)pRVar6->_cultureKey + _UNK_?;
          pRVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                              ((Regex_CachedCodeEntryKey *)auStack_15,
                               (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)&this->fields,(MethodInfo *)0x0);
          (this->fields).tMax.y =
               ((float)(int)((uint)(0 < iVar19) + (int)sVar18) - fVar22) / (float)pRVar6->_cultureKey
          ;
        }
        collisionState.localHitPoint.x = 0.0;
        collisionState.localOrigin.z = (float)&this->fields;
        collisionState.localOrigin.y = (float)auStack_15;
        collisionState.localOrigin.x = (float)&UNK_?;
        pRVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            ((Regex_CachedCodeEntryKey *)collisionState.localOrigin.y,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)collisionState.localOrigin.z,(MethodInfo *)0x0);
        if ((float)pRVar6->_pattern != 0.0) {
          collisionState.localNormal.x = 0.0;
          collisionState.localHitPoint.z = (float)&this->fields;
          collisionState.localHitPoint.y = (float)auStack_15;
          collisionState.localHitPoint.x = (float)&UNK_?;
          pRVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                              ((Regex_CachedCodeEntryKey *)collisionState.localHitPoint.y,
                               (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)collisionState.localHitPoint.z,(MethodInfo *)0x0);
          collisionState.localNormal.x = 0.0;
          collisionState.localHitPoint.z = (float)&this->fields;
          fVar22 = (float)pRVar6->_pattern + _UNK_?;
          collisionState.localHitPoint.y = (float)auStack_15;
          collisionState.localHitPoint.x = (float)&UNK_?;
          pRVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                              ((Regex_CachedCodeEntryKey *)collisionState.localHitPoint.y,
                               (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)collisionState.localHitPoint.z,(MethodInfo *)0x0);
          (this->fields).tMax.z =
               ((float)(int)((uint)(0 < iVar17) + (int)sVar21) - fVar22) / (float)pRVar6->_pattern;
        }
        fVar22 = (this->fields).tMax.z;
        fVar23 = (this->fields).tMax.y;
        (this->fields).initialtMax.x = (this->fields).tMax.x;
        (this->fields).initialtMax.y = fVar23;
        (this->fields).initialtMax.z = fVar22;
        uStack_16 = (String *)0x7f800000;
        (this->fields).tDelta.x = (float)uVar10;
        (this->fields).tDelta.y = (float)uVar10;
        (this->fields).tDelta.z = INFINITY;
        collisionState.localDirection.z = (float)&this->fields;
        collisionState.origin.x = 0.0;
        collisionState.localDirection.y = (float)auStack_15;
        collisionState.localDirection.x = (float)&UNK_?;
        pRVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            ((Regex_CachedCodeEntryKey *)collisionState.localDirection.y,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)collisionState.localDirection.z,(MethodInfo *)0x0);
        if ((float)pRVar6->_options != 0.0) {
          iVar5 = (this->fields).stepX;
          collisionState.origin.z = (float)&this->fields;
          collisionState.direction.x = 0.0;
          collisionState.origin.y = (float)auStack_15;
          collisionState.origin.x = (float)&UNK_?;
          pRVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                              ((Regex_CachedCodeEntryKey *)collisionState.origin.y,
                               (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)collisionState.origin.z,(MethodInfo *)0x0);
          (this->fields).tDelta.x = (float)iVar5 / (float)pRVar6->_options;
        }
        collisionState.cmb = (ICubeModelCollider *)0x0;
        collisionState.direction.z = (float)&this->fields;
        collisionState.direction.y = (float)auStack_15;
        collisionState.direction.x = (float)&UNK_?;
        pRVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            ((Regex_CachedCodeEntryKey *)collisionState.direction.y,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)collisionState.direction.z,(MethodInfo *)0x0);
        if ((float)pRVar6->_cultureKey != 0.0) {
          iVar5 = (this->fields).stepY;
          collisionState.localToElipsoidSpace.m10 = (float)&this->fields;
          collisionState.localToElipsoidSpace.m20 = 0.0;
          collisionState.localToElipsoidSpace.m00 = (float)auStack_15;
          collisionState.cmb = (ICubeModelCollider *)&UNK_?;
          pRVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                              ((Regex_CachedCodeEntryKey *)collisionState.localToElipsoidSpace.m00,
                               (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)collisionState.localToElipsoidSpace.m10,(MethodInfo *)0x0);
          (this->fields).tDelta.y = (float)iVar5 / (float)pRVar6->_cultureKey;
        }
        collisionState.localToElipsoidSpace.m11 = 0.0;
        collisionState.localToElipsoidSpace.m01 = (float)&this->fields;
        collisionState.localToElipsoidSpace.m30 = (float)auStack_15;
        collisionState.localToElipsoidSpace.m20 = (float)&UNK_?;
        pRVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            ((Regex_CachedCodeEntryKey *)collisionState.localToElipsoidSpace.m30,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)collisionState.localToElipsoidSpace.m01,(MethodInfo *)0x0);
        if ((float)pRVar6->_pattern != 0.0) {
          iVar5 = (this->fields).stepZ;
          collisionState.localToElipsoidSpace.m31 = (float)&this->fields;
          collisionState.localToElipsoidSpace.m02 = 0.0;
          collisionState.localToElipsoidSpace.m21 = (float)auStack_15;
          collisionState.localToElipsoidSpace.m11 = (float)&UNK_?;
          pRVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                              ((Regex_CachedCodeEntryKey *)collisionState.localToElipsoidSpace.m21,
                               (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)collisionState.localToElipsoidSpace.m31,(MethodInfo *)0x0);
          (this->fields).tDelta.z = (float)iVar5 / (float)pRVar6->_pattern;
        }
        return;
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Boolean Step() */

bool Assembly-CSharp.dll::CellTraverser::CellTraverser_Step(CellTraverser *this,MethodInfo *method)

{
  bVar1 = 1;
  fVar2 = (this->fields).tMax.y;
  pVVar3 = &(this->fields).tMax;
  if ((pVVar3->x <= fVar2 && fVar2 != pVVar3->x) &&
     (fVar2 = (this->fields).tMax.z, pVVar3 = &(this->fields).tMax,
     pVVar3->x <= fVar2 && fVar2 != pVVar3->x)) {
    pIVar4 = &(this->fields).localChunkSpaceVoxelPos;
    pIVar4->x = pIVar4->x + (short)(this->fields).stepX;
    pIVar4 = &(this->fields).voxelPos;
    pIVar4->x = pIVar4->x + (short)(this->fields).stepX;
    (this->fields).tMax.x = (this->fields).tDelta.x + (this->fields).tMax.x;
    if (((int)(this->fields).localChunkSpaceVoxelPos.x == (this->fields).chunkSize) ||
       ((this->fields).localChunkSpaceVoxelPos.x < 0)) {
      bVar1 = 0;
    }
    iVar5 = (this->fields).stepX;
    (this->fields).stepDir.y = 0;
    (this->fields).stepDir.z = 0;
    (this->fields).stepDir.x = (int16_t)iVar5;
    return bVar1;
  }
  fVar2 = (this->fields).tMax.z;
  pfVar6 = &(this->fields).tMax.y;
  if (fVar2 < *pfVar6 || fVar2 == *pfVar6) {
    piVar7 = &(this->fields).localChunkSpaceVoxelPos.z;
    *piVar7 = *piVar7 + (short)(this->fields).stepZ;
    piVar7 = &(this->fields).voxelPos.z;
    *piVar7 = *piVar7 + (short)(this->fields).stepZ;
    (this->fields).tMax.z = (this->fields).tDelta.z + (this->fields).tMax.z;
    if (((int)(this->fields).localChunkSpaceVoxelPos.z == (this->fields).chunkSize) ||
       ((this->fields).localChunkSpaceVoxelPos.z < 0)) {
      bVar1 = 0;
    }
    (this->fields).stepDir.x = 0;
    (this->fields).stepDir.y = 0;
    (this->fields).stepDir.z = (int16_t)(this->fields).stepZ;
    return bVar1;
  }
  piVar7 = &(this->fields).localChunkSpaceVoxelPos.y;
  *piVar7 = *piVar7 + (short)(this->fields).stepY;
  piVar7 = &(this->fields).voxelPos.y;
  *piVar7 = *piVar7 + (short)(this->fields).stepY;
  (this->fields).tMax.y = (this->fields).tDelta.y + (this->fields).tMax.y;
  if (((int)(this->fields).localChunkSpaceVoxelPos.y == (this->fields).chunkSize) ||
     ((this->fields).localChunkSpaceVoxelPos.y < 0)) {
    bVar1 = 0;
  }
  (this->fields).stepDir.x = 0;
  (this->fields).stepDir.y = (int16_t)(this->fields).stepY;
  (this->fields).stepDir.z = 0;
  return bVar1;
}


/* CellTraverser() */

void Assembly-CSharp.dll::CellTraverser::CellTraverser__ctor(CellTraverser *this,MethodInfo *method)

{
  method_00 = (MethodInfo *)0x0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xfffffff4,0,0,0,(MethodInfo *)0x0);
  *(MethodInfo **)&(this->fields).voxelPos = method_00;
  (this->fields).voxelPos.z = 0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* IntVector get_StepDir() */

IntVector Assembly-CSharp.dll::CellTraverser::CellTraverser_get_StepDir
                    (CellTraverser *this,MethodInfo *method)

{
  IVar1.z = (int16_t)method;
  IVar1._0_4_ = this;
  this->klass = *(CellTraverser__Class **)((int)&method[1].token + 2);
  *(uint16_t *)&this->monitor = method[1].iflags;
  return IVar1;
}


/* IntVector get_VoxelPos() */

IntVector Assembly-CSharp.dll::CellTraverser::CellTraverser_get_VoxelPos
                    (CellTraverser *this,MethodInfo *method)

{
  IVar1.z = (int16_t)method;
  IVar1._0_4_ = this;
  this->klass = (CellTraverser__Class *)method[1].field8_0x20;
  *(short *)&this->monitor = (short)method[1].token;
  return IVar1;
}

