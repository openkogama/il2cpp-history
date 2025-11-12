
/* Void OnEndEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBaseBlueprint
     ::MVMeleeWeaponBaseBlueprint_OnEndEditing(MVMeleeWeaponBaseBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.editableCubeModel;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
     (this_00 = (pMVar1->fields)._._.transform, this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,(this->fields)._.cubeModelBaseParent,1,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.editableCubeModel;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pBVar2 = MVCubeModelBase::MVCubeModelBase_GetBounds
                         (aBStack_3,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
      uStack_4._0_4_ = (pBVar2->m_Center).x;
      uStack_4._4_4_ = (pBVar2->m_Center).y;
      fStack_5 = (pBVar2->m_Center).z;
      fStack_6 = (pBVar2->m_Extents).x;
      uStack_7._0_4_ = (pBVar2->m_Extents).y;
      uStack_7._4_4_ = (pBVar2->m_Extents).z;
      pMVar1 = (this->fields)._.editableCubeModel;
      if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
         (obj = (pMVar1->fields)._._.transform, obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_8 = 0;
        fStack_9 = 0.0;
        pvVar10 = (obj->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10);
        fStack_5 = (float)_UNK_?;
        uStack_4 = CONCAT44((uint)((float)uStack_7 * uStack_8._4_4_ * _UNK_?) ^
                             _UNK_?,_UNK_?);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar10 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pQVar13 = TypeInfo__UnityEngine__Quaternion->static_fields;
        uStack_8._0_4_ = (pQVar13->identityQuaternion).x;
        uStack_8._4_4_ = (pQVar13->identityQuaternion).y;
        fStack_9 = (pQVar13->identityQuaternion).z;
        fStack_14 = (pQVar13->identityQuaternion).w;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar10 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10,&uStack_8);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar16 = (pVVar15->oneVector).x;
        uVar17 = (pVVar15->oneVector).y;
        fVar18 = (pVVar15->oneVector).z;
        fVar19 = (float)(*(this->klass->vtable).get_CubeModelScale.methodPtr)(this);
        fStack_5 = fVar18 * fVar19;
        uStack_4 = CONCAT44((float)uVar17 * fVar19,(float)uVar16 * fVar19);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar10 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10,&uStack_4);
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

