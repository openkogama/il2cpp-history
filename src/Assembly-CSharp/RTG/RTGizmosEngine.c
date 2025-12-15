
/* Void AddRenderCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_AddRenderCamera
               (RTGizmosEngine *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._renderCameras;
  if (pLVar1 != (List_1_UnityEngine_Camera_ *)0x0) {
    cVar2 = FUN_?(pLVar1,camera);
    if (cVar2 == '\0') {
      pLVar1 = (this->fields)._renderCameras;
      if (pLVar1 == (List_1_UnityEngine_Camera_ *)0x0) goto code_?;
      FUN_?(pLVar1,camera);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Gizmo CreateGizmo() */

Gizmo * Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateGizmo
                  (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Gizmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Gizmo *)FUN_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(this_00,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,this_00,(MethodInfo *)0x0);
  return this_00;
}


/* MoveGizmo CreateMoveGizmo() */

MoveGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateMoveGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__MoveGizmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Gizmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Gizmo *)FUN_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(this_00,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,this_00,(MethodInfo *)0x0);
  pMVar1 = (MoveGizmo *)FUN_?(TypeInfo__RTG__MoveGizmo);
  MoveGizmo::MoveGizmo__ctor(pMVar1,(MethodInfo *)0x0);
  if ((this_00 != (Gizmo *)0x0) &&
     (Gizmo::Gizmo_AddBehaviour(this_00,(IGizmoBehaviour *)pMVar1,(MethodInfo *)0x0),
     pMVar1 != (MoveGizmo *)0x0)) {
    (pMVar1->fields)._sharedHotkeys = (this->fields)._moveGizmoHotkeys;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(pMVar1->fields)._sharedHotkeys >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    iVar7 = iRam_?;
    (pMVar1->fields)._sharedLookAndFeel2D = (this->fields)._moveGizmoLookAndFeel2D;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(pMVar1->fields)._sharedLookAndFeel2D >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    MoveGizmo::MoveGizmo_SetupSharedLookAndFeel(pMVar1,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (pMVar1->fields)._sharedLookAndFeel3D = (this->fields)._moveGizmoLookAndFeel3D;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(pMVar1->fields)._sharedLookAndFeel3D >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    MoveGizmo::MoveGizmo_SetupSharedLookAndFeel(pMVar1,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (pMVar1->fields)._sharedSettings2D = (this->fields)._moveGizmoSettings2D;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(pMVar1->fields)._sharedSettings2D >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    MoveGizmo::MoveGizmo_SetupSharedSettings(pMVar1,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (pMVar1->fields)._sharedSettings3D = (this->fields)._moveGizmoSettings3D;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(pMVar1->fields)._sharedSettings3D >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    MoveGizmo::MoveGizmo_SetupSharedSettings(pMVar1,(MethodInfo *)0x0);
    return pMVar1;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pMVar1 = (MoveGizmo *)(*pcVar8)();
  return pMVar1;
}


/* ObjectTransformGizmo CreateObjectMoveGizmo() */

ObjectTransformGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateObjectMoveGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = RTGizmosEngine_CreateMoveGizmo(this,(MethodInfo *)0x0);
  pMVar2 = 
  RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__;
  if ((pMVar1 != (MoveGizmo *)0x0) && (pGVar3 = (pMVar1->fields)._._gizmo, pGVar3 != (Gizmo *)0x0))
  {
    if ((RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                   );
    }
    pOVar4 = (ObjectTransformGizmo *)
             mscorlib.dll::System::Activator::Activator_CreateInstance_24
                       (((pMVar2->field7_0x38).rgctx_data)->method);
    Gizmo::Gizmo_AddBehaviour(pGVar3,(IGizmoBehaviour *)pOVar4,(MethodInfo *)0x0);
    if ((pOVar4 != (ObjectTransformGizmo *)0x0) &&
       (pGVar3 = (pOVar4->fields)._._gizmo, pGVar3 != (Gizmo *)0x0)) {
      if ((pGVar3->fields)._dragInfo._isDragged == 0) {
        (pOVar4->fields)._transformChannelFlags = 1;
      }
      bVar5 = iRam_? != 0;
      (pOVar4->fields)._sharedSettings = (this->fields)._objectMoveGizmoSettings;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pOVar4->fields)._sharedSettings >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      return pOVar4;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pOVar4 = (ObjectTransformGizmo *)(*pcVar10)();
  return pOVar4;
}


/* ObjectTransformGizmo CreateObjectRotationGizmo() */

ObjectTransformGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateObjectRotationGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RotationGizmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Gizmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (Gizmo *)FUN_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(pGVar1,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,pGVar1,(MethodInfo *)0x0);
  this_00 = (RotationGizmo *)FUN_?(TypeInfo__RTG__RotationGizmo);
  RotationGizmo::RotationGizmo__ctor(this_00,(MethodInfo *)0x0);
  if ((pGVar1 != (Gizmo *)0x0) &&
     (Gizmo::Gizmo_AddBehaviour(pGVar1,(IGizmoBehaviour *)this_00,(MethodInfo *)0x0),
     this_00 != (RotationGizmo *)0x0)) {
    bVar2 = iRam_? != 0;
    (this_00->fields)._sharedLookAndFeel3D = (this->fields)._rotationGizmoLookAndFeel3D;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this_00->fields)._sharedLookAndFeel3D >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    RotationGizmo::RotationGizmo_SetupSharedLookAndFeel(this_00,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this_00->fields)._sharedSettings3D = (this->fields)._rotationGizmoSettings3D;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this_00->fields)._sharedSettings3D >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    RotationGizmo::RotationGizmo_SetupSharedSettings(this_00,(MethodInfo *)0x0);
    pMVar7 = 
    RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__;
    pGVar1 = (this_00->fields)._._gizmo;
    if (pGVar1 != (Gizmo *)0x0) {
      if ((
          RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                     );
      }
      pOVar8 = (ObjectTransformGizmo *)
               mscorlib.dll::System::Activator::Activator_CreateInstance_24
                         (((pMVar7->field7_0x38).rgctx_data)->method);
      Gizmo::Gizmo_AddBehaviour(pGVar1,(IGizmoBehaviour *)pOVar8,(MethodInfo *)0x0);
      if ((pOVar8 != (ObjectTransformGizmo *)0x0) &&
         (pGVar1 = (pOVar8->fields)._._gizmo, pGVar1 != (Gizmo *)0x0)) {
        if ((pGVar1->fields)._dragInfo._isDragged == 0) {
          (pOVar8->fields)._transformChannelFlags = 2;
        }
        bVar2 = iRam_? != 0;
        (pOVar8->fields)._sharedSettings = (this->fields)._objectRotationGizmoSettings;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(pOVar8->fields)._sharedSettings >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        return pOVar8;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pOVar8 = (ObjectTransformGizmo *)(*pcVar9)();
  return pOVar8;
}


/* ObjectTransformGizmo CreateObjectScaleGizmo() */

ObjectTransformGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateObjectScaleGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = RTGizmosEngine_CreateScaleGizmo(this,(MethodInfo *)0x0);
  pMVar2 = 
  RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__;
  if ((pSVar1 != (ScaleGizmo *)0x0) && (pGVar3 = (pSVar1->fields)._._gizmo, pGVar3 != (Gizmo *)0x0))
  {
    if ((RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                   );
    }
    pOVar4 = (ObjectTransformGizmo *)
             mscorlib.dll::System::Activator::Activator_CreateInstance_24
                       (((pMVar2->field7_0x38).rgctx_data)->method);
    Gizmo::Gizmo_AddBehaviour(pGVar3,(IGizmoBehaviour *)pOVar4,(MethodInfo *)0x0);
    if ((pOVar4 != (ObjectTransformGizmo *)0x0) &&
       (pGVar3 = (pOVar4->fields)._._gizmo, pGVar3 != (Gizmo *)0x0)) {
      if ((pGVar3->fields)._dragInfo._isDragged == 0) {
        (pOVar4->fields)._transformChannelFlags = 4;
      }
      if (pGVar3 != (Gizmo *)0x0) {
        if (((pGVar3->fields)._dragInfo._isDragged == 0) &&
           ((pOVar4->fields)._isTransformSpacePermanent == 0)) {
          (pOVar4->fields)._transformSpace = 1;
          ObjectTransformGizmo::ObjectTransformGizmo_RefreshRotation(pOVar4,(MethodInfo *)0x0);
        }
        bVar5 = iRam_? != 0;
        (pOVar4->fields)._isTransformSpacePermanent = 1;
        (pOVar4->fields)._sharedSettings = (this->fields)._objectScaleGizmoSettings;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(pOVar4->fields)._sharedSettings >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar7;
            LOCK();
            uVar9 = *puVar7;
            if (uVar8 == uVar9) {
              *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
        return pOVar4;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pOVar4 = (ObjectTransformGizmo *)(*pcVar10)();
  return pOVar4;
}


/* ObjectTransformGizmo CreateObjectUniversalGizmo() */

ObjectTransformGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateObjectUniversalGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = RTGizmosEngine_CreateUniversalGizmo(this,(MethodInfo *)0x0);
  pMVar2 = 
  RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__;
  if ((pUVar1 != (UniversalGizmo *)0x0) &&
     (pGVar3 = (pUVar1->fields)._._gizmo, pGVar3 != (Gizmo *)0x0)) {
    if ((RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                   );
    }
    pOVar4 = (ObjectTransformGizmo *)
             mscorlib.dll::System::Activator::Activator_CreateInstance_24
                       (((pMVar2->field7_0x38).rgctx_data)->method);
    Gizmo::Gizmo_AddBehaviour(pGVar3,(IGizmoBehaviour *)pOVar4,(MethodInfo *)0x0);
    if ((pOVar4 != (ObjectTransformGizmo *)0x0) &&
       (pGVar3 = (pOVar4->fields)._._gizmo, pGVar3 != (Gizmo *)0x0)) {
      if ((pGVar3->fields)._dragInfo._isDragged == 0) {
        (pOVar4->fields)._transformChannelFlags = 7;
      }
      bVar5 = iRam_? != 0;
      (pOVar4->fields)._sharedSettings = (this->fields)._objectUniversalGizmoSettings;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pOVar4->fields)._sharedSettings >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      return pOVar4;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pOVar4 = (ObjectTransformGizmo *)(*pcVar10)();
  return pOVar4;
}


/* RotationGizmo CreateRotationGizmo() */

RotationGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateRotationGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RotationGizmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Gizmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Gizmo *)FUN_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(this_00,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,this_00,(MethodInfo *)0x0);
  pRVar1 = (RotationGizmo *)FUN_?(TypeInfo__RTG__RotationGizmo);
  RotationGizmo::RotationGizmo__ctor(pRVar1,(MethodInfo *)0x0);
  if ((this_00 != (Gizmo *)0x0) &&
     (Gizmo::Gizmo_AddBehaviour(this_00,(IGizmoBehaviour *)pRVar1,(MethodInfo *)0x0),
     pRVar1 != (RotationGizmo *)0x0)) {
    bVar2 = iRam_? != 0;
    (pRVar1->fields)._sharedLookAndFeel3D = (this->fields)._rotationGizmoLookAndFeel3D;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pRVar1->fields)._sharedLookAndFeel3D >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    RotationGizmo::RotationGizmo_SetupSharedLookAndFeel(pRVar1,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (pRVar1->fields)._sharedSettings3D = (this->fields)._rotationGizmoSettings3D;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pRVar1->fields)._sharedSettings3D >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    RotationGizmo::RotationGizmo_SetupSharedSettings(pRVar1,(MethodInfo *)0x0);
    return pRVar1;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pRVar1 = (RotationGizmo *)(*pcVar7)();
  return pRVar1;
}


/* ScaleGizmo CreateScaleGizmo() */

ScaleGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateScaleGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ScaleGizmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Gizmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Gizmo *)FUN_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(this_00,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,this_00,(MethodInfo *)0x0);
  pSVar1 = (ScaleGizmo *)FUN_?(TypeInfo__RTG__ScaleGizmo);
  ScaleGizmo::ScaleGizmo__ctor(pSVar1,(MethodInfo *)0x0);
  if (this_00 != (Gizmo *)0x0) {
    Gizmo::Gizmo_AddBehaviour(this_00,(IGizmoBehaviour *)pSVar1,(MethodInfo *)0x0);
    pSVar2 = (this->fields)._scaleGizmoHotkeys;
    if (pSVar1 != (ScaleGizmo *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Application);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        pSVar1 = (ScaleGizmo *)(*pcVar3)();
        return pSVar1;
      }
      pcRam_? = pcVar3;
      cVar5 = (*pcRam_?)();
      if ((cVar5 != '\0') &&
         (bVar6 = iRam_? != 0, (pSVar1->fields)._sharedHotkeys = pSVar2, bVar6)) {
        uVar7 = (uint)((ulonglong)&(pSVar1->fields)._sharedHotkeys >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      bVar6 = iRam_? != 0;
      (pSVar1->fields)._sharedLookAndFeel3D = (this->fields)._scaleGizmoLookAndFeel3D;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(pSVar1->fields)._sharedLookAndFeel3D >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      ScaleGizmo::ScaleGizmo_SetupSharedLookAndFeel(pSVar1,(MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      (pSVar1->fields)._sharedSettings3D = (this->fields)._scaleGizmoSettings3D;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(pSVar1->fields)._sharedSettings3D >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      ScaleGizmo::ScaleGizmo_SetupSharedSettings(pSVar1,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar1 = (ScaleGizmo *)(*pcVar3)();
  return pSVar1;
}


/* UniversalGizmo CreateUniversalGizmo() */

UniversalGizmo *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_CreateUniversalGizmo
          (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__UniversalGizmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Gizmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Gizmo *)FUN_?(TypeInfo__RTG__Gizmo);
  Gizmo::Gizmo__ctor(this_00,(MethodInfo *)0x0);
  RTGizmosEngine_RegisterGizmo(this,this_00,(MethodInfo *)0x0);
  pUVar1 = (UniversalGizmo *)FUN_?(TypeInfo__RTG__UniversalGizmo);
  UniversalGizmo::UniversalGizmo__ctor(pUVar1,(MethodInfo *)0x0);
  if ((this_00 != (Gizmo *)0x0) &&
     (Gizmo::Gizmo_AddBehaviour(this_00,(IGizmoBehaviour *)pUVar1,(MethodInfo *)0x0),
     pUVar1 != (UniversalGizmo *)0x0)) {
    (pUVar1->fields)._sharedHotkeys = (this->fields)._universalGizmoHotkeys;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(pUVar1->fields)._sharedHotkeys >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    iVar7 = iRam_?;
    (pUVar1->fields)._sharedLookAndFeel2D = (this->fields)._universalGizmoLookAndFeel2D;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(pUVar1->fields)._sharedLookAndFeel2D >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    UniversalGizmo::UniversalGizmo_SetupSharedLookAndFeel(pUVar1,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (pUVar1->fields)._sharedLookAndFeel3D = (this->fields)._universalGizmoLookAndFeel3D;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(pUVar1->fields)._sharedLookAndFeel3D >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    UniversalGizmo::UniversalGizmo_SetupSharedLookAndFeel(pUVar1,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (pUVar1->fields)._sharedSettings2D = (this->fields)._universalGizmoSettings2D;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(pUVar1->fields)._sharedSettings2D >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    UniversalGizmo::UniversalGizmo_SetupSharedSettings(pUVar1,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (pUVar1->fields)._sharedSettings3D = (this->fields)._universalGizmoSettings3D;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(pUVar1->fields)._sharedSettings3D >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    UniversalGizmo::UniversalGizmo_SetupSharedSettings(pUVar1,(MethodInfo *)0x0);
    return pUVar1;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pUVar1 = (UniversalGizmo *)(*pcVar8)();
  return pUVar1;
}


/* GizmoHandleHoverData GetGizmoHandleHoverData(Gizmo) */

GizmoHandleHoverData *
Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_GetGizmoHandleHoverData
          (RTGizmosEngine *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<RTG::GizmoHandleHoverData>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Sort_System__Comparison<RTG::GizmoHandleHoverData>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RTGizmosEngine____c__DisplayClass102_0___GetGizmoHandleHoverData_b__0_RTG__GizmoHandleHoverData__RTG__GizmoHandleHoverData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RTGizmosEngine____c__DisplayClass102_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RTG__RTGizmosEngine____c__DisplayClass102_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)gizmo;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    if ((Gizmo *)object[1].klass != (Gizmo *)0x0) {
      obj = Gizmo::Gizmo_get_FocusCamera((Gizmo *)object[1].klass,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar6 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
      if ((pOVar6 != (Object *)0x0) && (pOVar6[2].klass != (Object__Class *)0x0)) {
        pCVar7 = obj;
        puVar8 = (undefined8 *)FUN_?(auStack_9);
        uStack_10 = *puVar8;
        uStack_11 = puVar8[1];
        RStack_12.m_Direction._4_8_ = puVar8[2];
        if ((object[1].klass != (Object__Class *)0x0) &&
           (this_00 = (GizmoHandleCollection *)(object[1].klass)->interfaceOffsets,
           this_00 != (GizmoHandleCollection *)0x0)) {
          RStack_12.m_Origin._0_8_ = *puVar8;
          RStack_12._8_8_ = puVar8[1];
          RStack_12.m_Direction._4_8_ = puVar8[2];
          this_01 = GizmoHandleCollection::GizmoHandleCollection_GetAllHandlesHoverData
                              (this_00,&RStack_12,(MethodInfo *)0x0);
          if (obj != (Camera *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            RStack_12.m_Origin._0_8_ = (MonitorData *)0x0;
            RStack_12._8_8_ = RStack_12._8_8_ & 0xffffffff00000000;
            pvVar13 = (obj->fields)._._._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              pGVar15 = (GizmoHandleHoverData *)(*pcVar14)();
              return pGVar15;
            }
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar14 = (code *)swi(3);
              pGVar15 = (GizmoHandleHoverData *)(*pcVar14)();
              return pGVar15;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(pvVar13,&uStack_10,2,&RStack_12,pCVar7);
            object[1].monitor = (MonitorData *)RStack_12.m_Origin._0_8_;
            *(float *)&object[2].klass = RStack_12.m_Origin.z;
            this_02 = (Func_3_Object_Object_Int32_ *)
                      FUN_?(TypeInfo__System__Comparison<RTG::GizmoHandleHoverData>);
            mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
                      (this_02,object,
                       MethodInfo__RTG__RTGizmosEngine____c__DisplayClass102_0___GetGizmoHandleHoverData_b__0_RTG__GizmoHandleHoverData__RTG__GizmoHandleHoverData_
                       ,(MethodInfo *)0x0);
            if (this_01 != (List_1_RTG_GizmoHandleHoverData_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Sort_1
                        ((List_1_System_Object_ *)this_01,(Comparison_1_Object_ *)this_02,
                         MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Sort_System__Comparison<RTG::GizmoHandleHoverData>_
                        );
              if ((this_01->fields)._size == 0) {
                pGVar15 = (GizmoHandleHoverData *)0x0;
              }
              else {
                pGVar17 = (this_01->fields)._items;
                if (pGVar17 == (GizmoHandleHoverData__Array *)0x0) goto code_?;
                if ((int)pGVar17->max_length == 0) {
                  FUN_?();
                  pcVar14 = (code *)swi(3);
                  pGVar15 = (GizmoHandleHoverData *)(*pcVar14)();
                  return pGVar15;
                }
                pGVar15 = pGVar17->vector[0];
              }
              return pGVar15;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  pGVar15 = (GizmoHandleHoverData *)(*pcVar14)();
  return pGVar15;
}


/* Boolean IsRenderCamera(Camera) */

bool Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_IsRenderCamera
               (RTGizmosEngine *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._renderCameras;
  if (pLVar1 != (List_1_UnityEngine_Camera_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    iVar2 = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((Object__Array *)(pLVar1->fields)._items,(Object *)camera,0,
                       (pLVar1->fields)._size,
                       (MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                        ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    return iVar2 != -1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnGUI() */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_OnGUI
               (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._pipelineStage = 4;
  pLVar1 = (this->fields)._gizmos;
  if (pLVar1 == (List_1_RTG_Gizmo_ *)0x0) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                        );
      if (bVar10 == 0) {
        (this->fields)._pipelineStage = 5;
        return;
      }
      if ((Gizmo *)LStack_9._current == (Gizmo *)0x0) break;
      Gizmo::Gizmo_OnGUI_SystemCall((Gizmo *)LStack_9._current,(MethodInfo *)0x0);
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnGizmoDragEnd(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_OnGizmoDragEnd
               (RTGizmosEngine *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields)._draggedGizmo = (Gizmo *)0x0;
  if (bVar1) {
    (this->fields)._justReleasedDrag = 1;
    return;
  }
  uVar2 = (uint)((ulonglong)&(this->fields)._draggedGizmo >> 0xc);
  puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar4 = *puVar3;
    LOCK();
    uVar5 = *puVar3;
    if (uVar4 == uVar5) {
      *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
    }
    UNLOCK();
  } while (uVar4 != uVar5);
  (this->fields)._justReleasedDrag = 1;
  return;
}


/* Void RegisterGizmo(Gizmo) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_RegisterGizmo
               (RTGizmosEngine *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreDragBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreDragEndHandler);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Add_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__RTGizmosEngine__OnGizmoDragBegin_RTG__Gizmo__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__RTGizmosEngine__OnGizmoDragEnd_RTG__Gizmo__int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Add_RTG__Gizmo_;
  this_00 = (this->fields)._gizmos;
  if (this_00 != (List_1_RTG_Gizmo_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pGVar3 = (this_00->fields)._items;
    if (pGVar3 != (Gizmo__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (uVar4 < (uint)pGVar3->max_length) {
        (this_00->fields)._size = uVar4 + 1;
        FUN_?(pGVar3,(longlong)(int)uVar4,gizmo);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_00,(Object *)gizmo,
                   pMVar1->klass->rgctx_data[0xe].method);
      }
      pUVar5 = (UnityAction_2_System_Object_System_Int32_ *)
                FUN_?(TypeInfo__RTG__GizmoPreDragBeginHandler);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
      UnityAction_2_System_Object_System_Int32___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__RTG__RTGizmosEngine__OnGizmoDragBegin_RTG__Gizmo__int_,
                 (MethodInfo *)0x0);
      if (gizmo != (Gizmo *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__RTG__GizmoPreDragBeginHandler);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        a = (gizmo->fields).PreDragBegin;
        do {
          pGVar6 = (GizmoPreDragBeginHandler *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)pUVar5,(MethodInfo *)0x0);
          pGVar7 = (GizmoPreDragBeginHandler *)0x0;
          if (pGVar6 != (GizmoPreDragBeginHandler *)0x0) {
            if (pGVar6->klass == TypeInfo__RTG__GizmoPreDragBeginHandler) {
              pGVar7 = pGVar6;
            }
            if (pGVar7 == (GizmoPreDragBeginHandler *)0x0) {
              FUN_?(pGVar6);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          ppGVar9 = &(gizmo->fields).PreDragBegin;
          LOCK();
          pGVar6 = *ppGVar9;
          bVar10 = a == pGVar6;
          if (bVar10) {
            *ppGVar9 = pGVar7;
            pGVar6 = a;
          }
          UNLOCK();
          pGVar7 = a;
          if (!bVar10) {
            pGVar7 = pGVar6;
          }
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)&(gizmo->fields).PreDragBegin >> 0xc);
            lVar11 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar13 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar10 = uVar12 == *puVar13;
              if (bVar10) {
                *puVar13 = uVar12 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          bVar10 = pGVar7 != a;
          a = pGVar7;
        } while (bVar10);
        pUVar5 = (UnityAction_2_System_Object_System_Int32_ *)
                  FUN_?(TypeInfo__RTG__GizmoPreDragEndHandler);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]
        ::UnityAction_2_System_Object_System_Int32___ctor
                  (pUVar5,(Object *)this,
                   MethodInfo__RTG__RTGizmosEngine__OnGizmoDragEnd_RTG__Gizmo__int_,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__RTG__GizmoPreDragEndHandler);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        a_00 = (gizmo->fields).PreDragEnd;
        do {
          pGVar14 = (GizmoPreDragEndHandler *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a_00,(Delegate *)pUVar5,(MethodInfo *)0x0);
          pGVar15 = (GizmoPreDragEndHandler *)0x0;
          if (pGVar14 != (GizmoPreDragEndHandler *)0x0) {
            if (pGVar14->klass == TypeInfo__RTG__GizmoPreDragEndHandler) {
              pGVar15 = pGVar14;
            }
            if (pGVar15 == (GizmoPreDragEndHandler *)0x0) {
              FUN_?(pGVar14);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          ppGVar16 = &(gizmo->fields).PreDragEnd;
          LOCK();
          pGVar14 = *ppGVar16;
          bVar10 = a_00 == pGVar14;
          if (bVar10) {
            *ppGVar16 = pGVar15;
            pGVar14 = a_00;
          }
          UNLOCK();
          pGVar15 = a_00;
          if (!bVar10) {
            pGVar15 = pGVar14;
          }
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)&(gizmo->fields).PreDragEnd >> 0xc);
            lVar11 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar13 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar10 = uVar12 == *puVar13;
              if (bVar10) {
                *puVar13 = uVar12 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          bVar10 = pGVar15 == a_00;
          a_00 = pGVar15;
          if (bVar10) {
            return;
          }
        } while( true );
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RemoveGizmo(Gizmo) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_RemoveGizmo
               (RTGizmosEngine *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreDragBeginHandler,gizmo,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreDragEndHandler);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Remove_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__RTGizmosEngine__OnGizmoDragBegin_RTG__Gizmo__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__RTGizmosEngine__OnGizmoDragEnd_RTG__Gizmo__int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._gizmos;
  if (this_00 == (List_1_RTG_Gizmo_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Remove
                    ((List_1_System_Object_ *)this_00,(Object *)gizmo,
                     MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Remove_RTG__Gizmo_)
  ;
  if (bVar2 != 0) {
    pUVar3 = (UnityAction_2_System_Object_System_Int32_ *)
             FUN_?(TypeInfo__RTG__GizmoPreDragBeginHandler);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
    UnityAction_2_System_Object_System_Int32___ctor
              (pUVar3,(Object *)this,
               MethodInfo__RTG__RTGizmosEngine__OnGizmoDragBegin_RTG__Gizmo__int_,(MethodInfo *)0x0)
    ;
    if (gizmo == (Gizmo *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__GizmoPreDragBeginHandler);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    source = (gizmo->fields).PreDragBegin;
    do {
      pGVar4 = (GizmoPreDragBeginHandler *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pGVar5 = (GizmoPreDragBeginHandler *)0x0;
      if (pGVar4 != (GizmoPreDragBeginHandler *)0x0) {
        if (pGVar4->klass == TypeInfo__RTG__GizmoPreDragBeginHandler) {
          pGVar5 = pGVar4;
        }
        if (pGVar5 == (GizmoPreDragBeginHandler *)0x0) {
          FUN_?(pGVar4);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      ppGVar6 = &(gizmo->fields).PreDragBegin;
      LOCK();
      pGVar4 = *ppGVar6;
      bVar7 = source == pGVar4;
      if (bVar7) {
        *ppGVar6 = pGVar5;
        pGVar4 = source;
      }
      UNLOCK();
      pGVar5 = source;
      if (!bVar7) {
        pGVar5 = pGVar4;
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(gizmo->fields).PreDragBegin >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      bVar7 = pGVar5 != source;
      source = pGVar5;
    } while (bVar7);
    pUVar3 = (UnityAction_2_System_Object_System_Int32_ *)
             FUN_?(TypeInfo__RTG__GizmoPreDragEndHandler);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
    UnityAction_2_System_Object_System_Int32___ctor
              (pUVar3,(Object *)this,
               MethodInfo__RTG__RTGizmosEngine__OnGizmoDragEnd_RTG__Gizmo__int_,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__GizmoPreDragEndHandler);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    source_00 = (gizmo->fields).PreDragEnd;
    do {
      pGVar12 = (GizmoPreDragEndHandler *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)source_00,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pGVar13 = (GizmoPreDragEndHandler *)0x0;
      if (pGVar12 != (GizmoPreDragEndHandler *)0x0) {
        if (pGVar12->klass == TypeInfo__RTG__GizmoPreDragEndHandler) {
          pGVar13 = pGVar12;
        }
        if (pGVar13 == (GizmoPreDragEndHandler *)0x0) {
          FUN_?(pGVar12);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      ppGVar14 = &(gizmo->fields).PreDragEnd;
      LOCK();
      pGVar12 = *ppGVar14;
      bVar7 = source_00 == pGVar12;
      if (bVar7) {
        *ppGVar14 = pGVar13;
        pGVar12 = source_00;
      }
      UNLOCK();
      pGVar13 = source_00;
      if (!bVar7) {
        pGVar13 = pGVar12;
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(gizmo->fields).PreDragEnd >> 0xc);
        uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar15 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar15 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      bVar7 = pGVar13 != source_00;
      source_00 = pGVar13;
    } while (bVar7);
  }
  return;
}


/* Void RemoveRenderCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_RemoveRenderCamera
               (RTGizmosEngine *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_;
  this_00 = (this->fields)._renderCameras;
  if (this_00 != (List_1_UnityEngine_Camera_ *)0x0) {
    index = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((Object__Array *)(this_00->fields)._items,(Object *)camera,0,
                       (this_00->fields)._size,
                       (MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
                        ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    if (index < 0) {
      return;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAt
              ((List_1_System_Object_ *)this_00,index,pMVar1->klass->rgctx_data[0x2b].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Render_SystemCall(Camera) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_Render_SystemCall
               (RTGizmosEngine *this,Camera *renderCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<RTG::Gizmo>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Sort_System__Comparison<RTG::Gizmo>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__List_System__Collections__Generic__IEnumerable<RTG::Gizmo>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::Gizmo>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RTGizmosEngine____c__DisplayClass103_0___Render_SystemCall_b__0_RTG__Gizmo__RTG__Gizmo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RTGizmosEngine____c__DisplayClass103_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  (this->fields)._pipelineStage = 2;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._renderCameras != (List_1_UnityEngine_Camera_ *)0x0) {
    cVar2 = FUN_?();
    if (cVar2 == '\0') {
code_?:
      (this->fields)._pipelineStage = 3;
      return;
    }
    pGVar3 = (this->fields)._settings;
    if (pGVar3 != (GizmoEngineSettings *)0x0) {
      if ((pGVar3->fields)._enableGizmoSorting == 0) {
        pPVar4 = CameraViewVolume::CameraViewVolume_GetCameraWorldPlanes
                            (renderCamera,(MethodInfo *)0x0);
        pLVar5 = (this->fields)._gizmos;
        if (pLVar5 != (List_1_RTG_Gizmo_ *)0x0) {
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)&pOStack_7 >> 0xc);
            lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
              puVar10 = (ulonglong *)(lVar8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          pLStack_12 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)(uint)(pLVar5->fields)._version << 0x20);
          uStack_13 = 0;
          LStack_1._8_8_ = pLStack_12;
          LStack_1._current = (Object *)0x0;
          pOStack_7 = (Object__Class *)0x0;
          pLStack_12 = &LStack_1;
          LStack_1._list = (List_1_System_Object_ *)pLVar5;
          while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Object]::List_1_T_Enumerator_System_Object__MoveNext
                                   (&LStack_1,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                                   ), bVar14 != 0) {
            if ((Gizmo *)LStack_1._current == (Gizmo *)0x0) goto code_?;
            Gizmo::Gizmo_Render_SystemCall
                      ((Gizmo *)LStack_1._current,renderCamera,pPVar4,(MethodInfo *)0x0);
          }
          goto code_?;
        }
      }
      else {
        object = (Object *)FUN_?(TypeInfo__RTG__RTGizmosEngine____c__DisplayClass103_0);
        this_00 = RTGizmosEngine_get_RenderStageCamera(this,(MethodInfo *)0x0);
        if ((this_00 != (Camera *)0x0) &&
           (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOStack_7 = (Object__Class *)0x0;
          pLStack_12 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)pLStack_12 & 0xffffffff00000000);
          pvVar15 = (obj->fields)._._.m_CachedPtr;
          if (pvVar15 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
code_?:
            FUN_?();
            FUN_?();
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pcVar16 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
            uVar17 = func_?(&UNK_?);
            FUN_?(uVar17,0);
code_?:
            FUN_?();
            FUN_?();
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pcRam_? = pcVar16;
          (*pcRam_?)(pvVar15,&pOStack_7);
          if (object != (Object *)0x0) {
            object[1].klass = pOStack_7;
            *(undefined4 *)&object[1].monitor = pLStack_12._0_4_;
            pLVar5 = (this->fields)._gizmos;
            this_01 = (List_1_RTG_Gizmo_ *)
                      FUN_?(TypeInfo__System__Collections__Generic__List<RTG::Gizmo>);
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object___ctor_1
                      ((List_1_System_Object_ *)this_01,(IEnumerable_1_System_Object_ *)pLVar5,
                       MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__List_System__Collections__Generic__IEnumerable<RTG::Gizmo>_
                      );
            this_02 = (Func_3_Object_Object_Int32_ *)
                      FUN_?(TypeInfo__System__Comparison<RTG::Gizmo>);
            mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
                      (this_02,object,
                       MethodInfo__RTG__RTGizmosEngine____c__DisplayClass103_0___Render_SystemCall_b__0_RTG__Gizmo__RTG__Gizmo_
                       ,(MethodInfo *)0x0);
            if (this_01 != (List_1_RTG_Gizmo_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Sort_1
                        ((List_1_System_Object_ *)this_01,(Comparison_1_Object_ *)this_02,
                         MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Sort_System__Comparison<RTG::Gizmo>_
                        );
              pPVar4 = CameraViewVolume::CameraViewVolume_GetCameraWorldPlanes
                                  (renderCamera,(MethodInfo *)0x0);
              if (iRam_? != 0) {
                uVar6 = (uint)((ulonglong)&pOStack_7 >> 0xc);
                lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
                  puVar10 = (ulonglong *)(lVar8 + 0xADDR);
                  LOCK();
                  bVar11 = uVar9 == *puVar10;
                  if (bVar11) {
                    *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar11);
              }
              pLStack_12 = (List_1_T_Enumerator_System_Object_ *)
                           ((ulonglong)(uint)(this_01->fields)._version << 0x20);
              uStack_13 = 0;
              LStack_1._8_8_ = pLStack_12;
              LStack_1._current = (Object *)0x0;
              pOStack_7 = (Object__Class *)0x0;
              pLStack_12 = &LStack_1;
              LStack_1._list = (List_1_System_Object_ *)this_01;
              while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System
                             ::Object]::List_1_T_Enumerator_System_Object__MoveNext
                                       (&LStack_1,
                                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                                       ), bVar14 != 0) {
                if ((Gizmo *)LStack_1._current == (Gizmo *)0x0) goto code_?;
                Gizmo::Gizmo_Render_SystemCall
                          ((Gizmo *)LStack_1._current,renderCamera,pPVar4,(MethodInfo *)0x0);
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SortHandleHoverDataCollection(List`1[RTG.GizmoHandleHoverData], Vector3) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_SortHandleHoverDataCollection
               (RTGizmosEngine *this,List_1_RTG_GizmoHandleHoverData_ *hoverDataCollection,
               Vector3 *inputDevicePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<RTG::GizmoHandleHoverData>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Sort_System__Comparison<RTG::GizmoHandleHoverData>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RTGizmosEngine____c__DisplayClass104_0___SortHandleHoverDataCollection_b__0_RTG__GizmoHandleHoverData__RTG__GizmoHandleHoverData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RTGizmosEngine____c__DisplayClass104_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RTG__RTGizmosEngine____c__DisplayClass104_0);
  if (object != (Object *)0x0) {
    fVar1 = inputDevicePos->z;
    object[1].klass = *(Object__Class **)inputDevicePos;
    *(float *)&object[1].monitor = fVar1;
    if (hoverDataCollection != (List_1_RTG_GizmoHandleHoverData_ *)0x0) {
      if ((hoverDataCollection->fields)._size == 0) {
        return;
      }
      pGVar2 = (hoverDataCollection->fields)._items;
      if (pGVar2 != (GizmoHandleHoverData__Array *)0x0) {
        if ((int)pGVar2->max_length == 0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pGVar4 = pGVar2->vector[0];
        if (pGVar4 != (GizmoHandleHoverData *)0x0) {
          fVar1 = (pGVar4->fields)._hoverRay.m_Origin.y;
          fVar5 = (pGVar4->fields)._hoverRay.m_Origin.z;
          fVar6 = (pGVar4->fields)._hoverRay.m_Direction.x;
          uVar7 = *(undefined8 *)&(pGVar4->fields)._hoverRay.m_Direction.y;
          *(float *)((longlong)&object[1].monitor + 4) = (pGVar4->fields)._hoverRay.m_Origin.x;
          *(float *)&object[2].klass = fVar1;
          *(float *)((longlong)&object[2].klass + 4) = fVar5;
          *(float *)&object[2].monitor = fVar6;
          *(undefined8 *)((longlong)&object[2].monitor + 4) = uVar7;
          this_00 = (Func_3_Object_Object_Int32_ *)
                    FUN_?(TypeInfo__System__Comparison<RTG::GizmoHandleHoverData>);
          mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
                    (this_00,object,
                     MethodInfo__RTG__RTGizmosEngine____c__DisplayClass104_0___SortHandleHoverDataCollection_b__0_RTG__GizmoHandleHoverData__RTG__GizmoHandleHoverData_
                     ,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Sort_1
                    ((List_1_System_Object_ *)hoverDataCollection,(Comparison_1_Object_ *)this_00,
                     MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Sort_System__Comparison<RTG::GizmoHandleHoverData>_
                    );
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnregisterGizmo(Gizmo) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_UnregisterGizmo
               (RTGizmosEngine *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreDragBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreDragEndHandler);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Remove_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__RTGizmosEngine__OnGizmoDragBegin_RTG__Gizmo__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__RTGizmosEngine__OnGizmoDragEnd_RTG__Gizmo__int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._gizmos;
  if (this_00 == (List_1_RTG_Gizmo_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Remove
                    ((List_1_System_Object_ *)this_00,(Object *)gizmo,
                     MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__Remove_RTG__Gizmo_)
  ;
  if (bVar2 != 0) {
    pUVar3 = (UnityAction_2_System_Object_System_Int32_ *)
             FUN_?(TypeInfo__RTG__GizmoPreDragBeginHandler);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
    UnityAction_2_System_Object_System_Int32___ctor
              (pUVar3,(Object *)this,
               MethodInfo__RTG__RTGizmosEngine__OnGizmoDragBegin_RTG__Gizmo__int_,(MethodInfo *)0x0)
    ;
    if (gizmo == (Gizmo *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__GizmoPreDragBeginHandler);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    source = (gizmo->fields).PreDragBegin;
    do {
      pGVar4 = (GizmoPreDragBeginHandler *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pGVar5 = (GizmoPreDragBeginHandler *)0x0;
      if (pGVar4 != (GizmoPreDragBeginHandler *)0x0) {
        if (pGVar4->klass == TypeInfo__RTG__GizmoPreDragBeginHandler) {
          pGVar5 = pGVar4;
        }
        if (pGVar5 == (GizmoPreDragBeginHandler *)0x0) {
          FUN_?(pGVar4);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      ppGVar6 = &(gizmo->fields).PreDragBegin;
      LOCK();
      pGVar4 = *ppGVar6;
      bVar7 = source == pGVar4;
      if (bVar7) {
        *ppGVar6 = pGVar5;
        pGVar4 = source;
      }
      UNLOCK();
      pGVar5 = source;
      if (!bVar7) {
        pGVar5 = pGVar4;
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(gizmo->fields).PreDragBegin >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      bVar7 = pGVar5 != source;
      source = pGVar5;
    } while (bVar7);
    pUVar3 = (UnityAction_2_System_Object_System_Int32_ *)
             FUN_?(TypeInfo__RTG__GizmoPreDragEndHandler);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
    UnityAction_2_System_Object_System_Int32___ctor
              (pUVar3,(Object *)this,
               MethodInfo__RTG__RTGizmosEngine__OnGizmoDragEnd_RTG__Gizmo__int_,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__GizmoPreDragEndHandler);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    source_00 = (gizmo->fields).PreDragEnd;
    do {
      pGVar12 = (GizmoPreDragEndHandler *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)source_00,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pGVar13 = (GizmoPreDragEndHandler *)0x0;
      if (pGVar12 != (GizmoPreDragEndHandler *)0x0) {
        if (pGVar12->klass == TypeInfo__RTG__GizmoPreDragEndHandler) {
          pGVar13 = pGVar12;
        }
        if (pGVar13 == (GizmoPreDragEndHandler *)0x0) {
          FUN_?(pGVar12);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      ppGVar14 = &(gizmo->fields).PreDragEnd;
      LOCK();
      pGVar12 = *ppGVar14;
      bVar7 = source_00 == pGVar12;
      if (bVar7) {
        *ppGVar14 = pGVar13;
        pGVar12 = source_00;
      }
      UNLOCK();
      pGVar13 = source_00;
      if (!bVar7) {
        pGVar13 = pGVar12;
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(gizmo->fields).PreDragEnd >> 0xc);
        uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar15 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar15 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      bVar7 = pGVar13 != source_00;
      source_00 = pGVar13;
    } while (bVar7);
  }
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_Update_SystemCall
               (RTGizmosEngine *this,MethodInfo *method)

{
  pRStack_1 = this;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Add_RTG__GizmoHandleHoverData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__YesNoAnswer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = false;
  bVar3 = false;
  (this->fields)._pipelineStage = 0;
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar4 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar4 == (Object *)0x0) || (pOVar5 = pOVar4[2].klass, pOVar5 == (Object__Class *)0x0))
  goto code_?;
  bVar6 = FUN_?(8,TypeInfo__RTG__IInputDevice,pOVar5);
  puVar7 = (undefined8 *)FUN_?(&GStack_8,7,TypeInfo__RTG__IInputDevice,pOVar5);
  pOVar5 = (Object__Class *)*puVar7;
  uStack_9 = *(undefined4 *)(puVar7 + 1);
  pOStack_10 = pOVar5;
  uStack_11 = uStack_9;
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (RTScene *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
  if (this_00 == (RTScene *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::EventSystems::RaycastResult>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar12 = RTScene::RTScene_GetHoveredUIElements(this_00,(MethodInfo *)0x0);
  if (pLVar12 == (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) goto code_?;
  if (((this->fields)._draggedGizmo == (Gizmo *)0x0) && ((pLVar12->fields)._size == 0)) {
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcRam_? = pcVar13;
    iVar15 = (*pcRam_?)();
    bVar2 = iVar15 == 0;
  }
  (this->fields)._justReleasedDrag = 0;
  bVar16 = false;
  if (bVar2) {
    lVar17 = FUN_?(TypeInfo__RTG__YesNoAnswer);
    if ((this->fields).CanDoHoverUpdate != (GizmoEngineCanDoHoverUpdateHandler *)0x0) {
      pGVar18 = (this->fields).CanDoHoverUpdate;
      (*(pGVar18->fields)._._.invoke_impl)((pGVar18->fields)._._.method_code,lVar17);
    }
    if (lVar17 == 0) goto code_?;
    bVar16 = *(char *)(lVar17 + 0x11) == '\0';
  }
  (this->fields)._hoveredGizmo = (Gizmo *)0x0;
  if (iRam_? != 0) {
    uVar19 = (uint)((ulonglong)&(this->fields)._hoveredGizmo >> 0xc);
    uVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
    do {
      uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
      puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar21 == *puVar22;
      if (bVar2) {
        *puVar22 = uVar21 | 1L << (ulonglong)(uVar19 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields)._gizmoHoverInfo._isHovered = 0;
  (this->fields)._gizmoHoverInfo._handleId = 0;
  (this->fields)._gizmoHoverInfo._handleDimension = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar23 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar24 = (pVVar23->zeroVector).z;
  fVar25 = (pVVar23->zeroVector).y;
  (this->fields)._gizmoHoverInfo._hoverPoint.x = (pVVar23->zeroVector).x;
  (this->fields)._gizmoHoverInfo._hoverPoint.y = fVar25;
  (this->fields)._gizmoHoverInfo._hoverPoint.z = fVar24;
  if (bVar6 != 0) {
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar4 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    if (pOVar4 == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__IInputDevice);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar26 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if ((pOVar26 == (Object *)0x0) || (pOVar26[2].klass == (Object__Class *)0x0))
    goto code_?;
    puVar7 = (undefined8 *)FUN_?(&uStack_27,7,TypeInfo__RTG__IInputDevice);
    GStack_8._0_8_ = *puVar7;
    GStack_8._handleDimension = *(undefined4 *)(puVar7 + 1);
    pOVar4 = (Object *)pOVar4[4].monitor;
    if (pOVar4 == (Object *)0x0) goto code_?;
    GStack_8._8_8_ = (ulonglong)(uint)GStack_8._hoverPoint.x << 0x20;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_28 = (List_1_System_Object_ *)0x0;
    uStack_29 = 0;
    pOVar30 = pOVar4[1].klass;
    if (pOVar30 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar4,(MethodInfo *)0x0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcRam_? = pcVar13;
    (*pcRam_?)(pOVar30,&GStack_8);
    if (((0.0 <= (float)uStack_28) && ((float)uStack_28 <= _UNK_?)) &&
       (0.0 <= uStack_28._4_4_)) {
      bVar3 = uStack_28._4_4_ <= _UNK_?;
    }
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar4 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar4 == (Object *)0x0) goto code_?;
  pMVar31 = pOVar4[4].monitor;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar32 = (this->fields)._renderCameras;
  if (pLVar32 == (List_1_UnityEngine_Camera_ *)0x0) goto code_?;
  bVar33 = FUN_?(pLVar32,pMVar31);
  this_01 = (List_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>);
  pvVar34 = MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__List_int_->
            klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar34 + 0x135) & 1) == 0) {
    pvVar34 = (void *)FUN_?(pvVar34);
  }
  pOVar35 = (Object__Array *)FUN_?(pvVar34,10);
  (this_01->fields)._items = pOVar35;
  if (iRam_? != 0) {
    uVar19 = (uint)((ulonglong)&this_01->fields >> 0xc);
    uVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
    do {
      uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
      puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar21 == *puVar22;
      if (bVar2) {
        *puVar22 = uVar21 | 1L << (ulonglong)(uVar19 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar36 = (this->fields)._gizmos;
  uStack_28 = this_01;
  if (pLVar36 == (List_1_RTG_Gizmo_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar19 = (uint)((ulonglong)&uStack_27 >> 0xc);
    uVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
    do {
      uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
      puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar21 == *puVar22;
      if (bVar2) {
        *puVar22 = uVar21 | 1L << (ulonglong)(uVar19 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLStack_37 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(pLVar36->fields)._version << 0x20);
  uStack_38 = 0;
  LStack_39._8_8_ = pLStack_37;
  LStack_39._current = (Object *)0x0;
  uStack_27 = 0;
  pLStack_37 = &LStack_39;
  LStack_39._list = (List_1_System_Object_ *)pLVar36;
  while (bVar40 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_39,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                            ), pOVar4 = LStack_39._current, uVar41 = uStack_9, bVar40 != 0) {
    if ((Gizmo *)LStack_39._current == (Gizmo *)0x0) goto code_?;
    Gizmo::Gizmo_OnUpdateBegin_SystemCall((Gizmo *)LStack_39._current,(MethodInfo *)0x0);
    bVar42 = 0;
    if (bVar16) {
      bVar42 = ((Gizmo__Fields *)((longlong)pOVar4 + 0x10))->_isEnabled;
    }
    if (((bVar42 & bVar33 & bVar6 & bVar3) != 0) &&
       (pGVar43 = RTGizmosEngine_GetGizmoHandleHoverData(this,(Gizmo *)pOVar4,(MethodInfo *)0x0),
       pGVar43 != (GizmoHandleHoverData *)0x0)) {
      if (this_01 == (List_1_System_Object_ *)0x0) goto code_?;
      FUN_?(this_01,pGVar43);
    }
  }
  if (bVar16) {
    if (this_01 == (List_1_System_Object_ *)0x0) goto code_?;
    if ((this_01->fields)._size != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Comparison<RTG::GizmoHandleHoverData>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Sort_System__Comparison<RTG::GizmoHandleHoverData>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__RTG__RTGizmosEngine____c__DisplayClass104_0___SortHandleHoverDataCollection_b__0_RTG__GizmoHandleHoverData__RTG__GizmoHandleHoverData_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__RTG__RTGizmosEngine____c__DisplayClass104_0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar4 = (Object *)FUN_?();
      if (pOVar4 == (Object *)0x0) goto code_?;
      pOVar4[1].klass = pOVar5;
      *(undefined4 *)&pOVar4[1].monitor = uVar41;
      if ((this_01->fields)._size != 0) {
        pOVar35 = (this_01->fields)._items;
        if (pOVar35 == (Object__Array *)0x0) goto code_?;
        if ((int)pOVar35->max_length == 0) goto code_?;
        pOVar26 = pOVar35->vector[0];
        if (pOVar26 == (Object *)0x0) goto code_?;
        uVar41 = *(undefined4 *)&pOVar26[2].monitor;
        uVar44 = *(undefined4 *)((longlong)&pOVar26[2].monitor + 4);
        uVar45 = *(undefined4 *)&pOVar26[3].klass;
        uVar14 = *(undefined8 *)((longlong)&pOVar26[3].klass + 4);
        *(undefined4 *)((longlong)&pOVar4[1].monitor + 4) =
             *(undefined4 *)((longlong)&pOVar26[2].klass + 4);
        *(undefined4 *)&pOVar4[2].klass = uVar41;
        *(undefined4 *)((longlong)&pOVar4[2].klass + 4) = uVar44;
        *(undefined4 *)&pOVar4[2].monitor = uVar45;
        *(undefined8 *)((longlong)&pOVar4[2].monitor + 4) = uVar14;
        this_02 = (Func_3_Object_Object_Int32_ *)
                  FUN_?(TypeInfo__System__Comparison<RTG::GizmoHandleHoverData>);
        mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
                  (this_02,pOVar4,
                   MethodInfo__RTG__RTGizmosEngine____c__DisplayClass104_0___SortHandleHoverDataCollection_b__0_RTG__GizmoHandleHoverData__RTG__GizmoHandleHoverData_
                   ,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Sort_1
                  (this_01,(Comparison_1_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Sort_System__Comparison<RTG::GizmoHandleHoverData>_
                  );
      }
      if ((this_01->fields)._size == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pOVar35 = (this_01->fields)._items;
      if (pOVar35 == (Object__Array *)0x0) goto code_?;
      if ((int)pOVar35->max_length == 0) {
code_?:
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pOVar4 = pOVar35->vector[0];
      if (pOVar4 == (Object *)0x0) goto code_?;
      (this->fields)._hoveredGizmo = (Gizmo *)pOVar4[1].monitor;
      if (iRam_? != 0) {
        uVar19 = (uint)((ulonglong)&(this->fields)._hoveredGizmo >> 0xc);
        uVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
        do {
          uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
          puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar21 == *puVar22;
          if (bVar3) {
            *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      (pRStack_1->fields)._gizmoHoverInfo._handleId = *(int32_t *)&pOVar4[1].klass;
      (pRStack_1->fields)._gizmoHoverInfo._handleDimension = *(int32_t *)&pOVar4[2].klass;
      fVar24 = *(float *)((longlong)&pOVar4[4].klass + 4);
      uVar14 = *(undefined8 *)((longlong)&pOVar4[3].monitor + 4);
      (pRStack_1->fields)._gizmoHoverInfo._hoverPoint.x = (float)(int)uVar14;
      (pRStack_1->fields)._gizmoHoverInfo._hoverPoint.y = (float)(int)((ulonglong)uVar14 >> 0x20);
      (pRStack_1->fields)._gizmoHoverInfo._hoverPoint.z = fVar24;
      (this->fields)._gizmoHoverInfo._isHovered = 1;
    }
  }
  pLVar36 = (this->fields)._gizmos;
  if (pLVar36 != (List_1_RTG_Gizmo_ *)0x0) {
    if (iRam_? != 0) {
      uVar19 = (uint)((ulonglong)&uStack_27 >> 0xc);
      uVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
      do {
        uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
        puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar21 == *puVar22;
        if (bVar3) {
          *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pLStack_37 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar36->fields)._version << 0x20);
    uStack_38 = 0;
    LStack_39._8_8_ = pLStack_37;
    LStack_39._current = (Object *)0x0;
    uStack_27 = 0;
    pLStack_37 = &LStack_39;
    LStack_39._list = (List_1_System_Object_ *)pLVar36;
    do {
      bVar40 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         (&LStack_39,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Gizmo>__MoveNext__
                         );
      pOVar4 = LStack_39._current;
      if (bVar40 == 0) {
        (this->fields)._pipelineStage = 1;
        return;
      }
      (this->fields)._gizmoHoverInfo._isHovered =
           (Gizmo *)LStack_39._current == (this->fields)._hoveredGizmo;
      if ((Gizmo *)LStack_39._current == (Gizmo *)0x0) goto code_?;
      GStack_8._isHovered = (this->fields)._gizmoHoverInfo._isHovered;
      GStack_8._1_3_ = *(undefined3 *)&(this->fields)._gizmoHoverInfo.field_0x1;
      GStack_8._handleId = (this->fields)._gizmoHoverInfo._handleId;
      GStack_8._handleDimension = (this->fields)._gizmoHoverInfo._handleDimension;
      GStack_8._hoverPoint.x = (this->fields)._gizmoHoverInfo._hoverPoint.x;
      GStack_8._hoverPoint.y = (this->fields)._gizmoHoverInfo._hoverPoint.y;
      GStack_8._hoverPoint.z = (this->fields)._gizmoHoverInfo._hoverPoint.z;
      Gizmo::Gizmo_UpdateHandleHoverInfo_SystemCall
                ((Gizmo *)LStack_39._current,&GStack_8,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__IInputDevice);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (((Gizmo__Fields *)((longlong)pOVar4 + 0x10))->_isEnabled != 0) {
        if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar26 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
        if (pOVar26 == (Object *)0x0) goto code_?;
        pOVar5 = pOVar26[2].klass;
        if (pOVar5 == (Object__Class *)0x0) goto code_?;
        cVar46 = FUN_?(10,TypeInfo__RTG__IInputDevice,pOVar5,0);
        if (cVar46 == '\0') {
          cVar46 = FUN_?(0xb,TypeInfo__RTG__IInputDevice,pOVar5,0);
          if (cVar46 != '\0') {
            Gizmo::Gizmo_EndDragSession((Gizmo *)pOVar4,(MethodInfo *)0x0);
          }
        }
        else {
          Gizmo::Gizmo_OnInputDevicePickButtonDown((Gizmo *)pOVar4,(MethodInfo *)0x0);
        }
        cVar46 = FUN_?(0xc);
        if (cVar46 != '\0') {
          Gizmo::Gizmo_OnInputDeviceMoved((Gizmo *)pOVar4,(MethodInfo *)0x0);
        }
      }
      Gizmo::Gizmo_OnUpdateEnd_SystemCall((Gizmo *)pOVar4,(MethodInfo *)0x0);
    } while( true );
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* RTGizmosEngine() */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine__ctor
               (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__EditorToolbarTab);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__EditorToolbarTab);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__EditorToolbar);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoEngineSettings);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::Gizmo>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__MonoSingleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MoveGizmoHotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MoveGizmoLookAndFeel2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MoveGizmoLookAndFeel3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MoveGizmoSettings2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MoveGizmoSettings3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectTransformGizmoSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RotationGizmoLookAndFeel3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RotationGizmoSettings3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ScaleGizmoHotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ScaleGizmoLookAndFeel3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ScaleGizmoSettings3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UniversalGizmoConfig);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UniversalGizmoHotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UniversalGizmoLookAndFeel2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UniversalGizmoLookAndFeel3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UniversalGizmoSettings2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UniversalGizmoSettings3D);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_General_gizmo_engine_settings_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rotation_gizmo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_General);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Universal_gizmo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Scale_gizmo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Move_gizmo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Allows_you_to_change_scale_gizmo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Scene_gizmo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Allows_you_to_change_rotation_se);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Allows_you_to_change_move_gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Allows_you_to_change_universal_g);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Scene_gizmo_specific_settings_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (EditorToolbarTab__Array *)FUN_?(TypeInfo__RTG__EditorToolbarTab,6);
  pEVar2 = (EditorToolbarTab *)FUN_?(TypeInfo__RTG__EditorToolbarTab);
  EditorToolbarTab::EditorToolbarTab__ctor
            (pEVar2,StringLiteral_General,StringLiteral_General_gizmo_engine_settings_,
             (MethodInfo *)0x0);
  if (pEVar1 != (EditorToolbarTab__Array *)0x0) {
    if ((pEVar2 != (EditorToolbarTab *)0x0) &&
       (lVar3 = FUN_?(pEVar2,(pEVar1->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pEVar1,0,pEVar2);
    pEVar2 = (EditorToolbarTab *)FUN_?(TypeInfo__RTG__EditorToolbarTab);
    EditorToolbarTab::EditorToolbarTab__ctor
              (pEVar2,StringLiteral_Scene_gizmo,StringLiteral_Scene_gizmo_specific_settings_,
               (MethodInfo *)0x0);
    if ((pEVar2 != (EditorToolbarTab *)0x0) &&
       (lVar3 = FUN_?(pEVar2,(pEVar1->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pEVar1,1,pEVar2);
    pEVar2 = (EditorToolbarTab *)FUN_?(TypeInfo__RTG__EditorToolbarTab);
    EditorToolbarTab::EditorToolbarTab__ctor
              (pEVar2,StringLiteral_Move_gizmo,StringLiteral_Allows_you_to_change_move_gizmo_,
               (MethodInfo *)0x0);
    if ((pEVar2 != (EditorToolbarTab *)0x0) &&
       (lVar3 = FUN_?(pEVar2,(pEVar1->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pEVar1,2,pEVar2);
    pEVar2 = (EditorToolbarTab *)FUN_?(TypeInfo__RTG__EditorToolbarTab);
    EditorToolbarTab::EditorToolbarTab__ctor
              (pEVar2,StringLiteral_Rotation_gizmo,StringLiteral_Allows_you_to_change_rotation_se,
               (MethodInfo *)0x0);
    if ((pEVar2 != (EditorToolbarTab *)0x0) &&
       (lVar3 = FUN_?(pEVar2,(pEVar1->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pEVar1,3,pEVar2);
    pEVar2 = (EditorToolbarTab *)FUN_?(TypeInfo__RTG__EditorToolbarTab);
    EditorToolbarTab::EditorToolbarTab__ctor
              (pEVar2,StringLiteral_Scale_gizmo,StringLiteral_Allows_you_to_change_scale_gizmo,
               (MethodInfo *)0x0);
    if ((pEVar2 != (EditorToolbarTab *)0x0) &&
       (lVar3 = FUN_?(pEVar2,(pEVar1->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pEVar1,4,pEVar2);
    pEVar2 = (EditorToolbarTab *)FUN_?(TypeInfo__RTG__EditorToolbarTab);
    EditorToolbarTab::EditorToolbarTab__ctor
              (pEVar2,StringLiteral_Universal_gizmo,StringLiteral_Allows_you_to_change_universal_g,
               (MethodInfo *)0x0);
    if ((pEVar2 != (EditorToolbarTab *)0x0) &&
       (lVar3 = FUN_?(pEVar2,(pEVar1->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pEVar1,5,pEVar2);
    pEVar6 = (EditorToolbar *)FUN_?(TypeInfo__RTG__EditorToolbar);
    uVar7 = _UNK_?;
    uVar4 = _UNK_?;
    bVar8 = iRam_? != 0;
    uVar9 = _UNK_?;
    (pEVar6->fields)._activeTabColor.r = (float)_UNK_?;
    uVar10 = _UNK_?;
    (pEVar6->fields)._activeTabColor.g = (float)uVar9;
    _UNK_? = (undefined4)uVar7;
    _UNK_? = SUB84(uVar7,4);
    uVar9 = _UNK_?;
    (pEVar6->fields)._activeTabColor.b = (float)_UNK_?;
    _UNK_? = uVar10;
    (pEVar6->fields)._activeTabColor.a = (float)uVar9;
    (pEVar6->fields)._numTabsPerRow = 3;
    (pEVar6->fields)._tabs = pEVar1;
    if (bVar8) {
      uVar11 = (uint)((ulonglong)&(pEVar6->fields)._tabs >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar13 == *puVar14;
        if (bVar8) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    uVar10 = _UNK_?;
    _UNK_? = (undefined4)uVar4;
    _UNK_? = SUB84(uVar4,4);
    uVar9 = _UNK_?;
    (pEVar6->fields)._activeTabColor.r = (float)_UNK_?;
    _UNK_? = uVar10;
    uVar4 = _UNK_?;
    (pEVar6->fields)._activeTabColor.g = (float)uVar9;
    _UNK_? = (undefined4)uVar7;
    _UNK_? = SUB84(uVar7,4);
    uVar9 = _UNK_?;
    (pEVar6->fields)._activeTabColor.b = (float)_UNK_?;
    _UNK_? = uVar4;
    (pEVar6->fields)._activeTabColor.a = (float)uVar9;
    (pEVar6->fields)._numTabsPerRow = 6;
    (this->fields)._mainToolbar = pEVar6;
    func_?(&(this->fields)._mainToolbar);
    this_00 = (GizmoEngineSettings *)FUN_?(TypeInfo__RTG__GizmoEngineSettings);
    (this_00->fields)._enableGizmoSorting = 1;
    Settings::Settings__ctor((Settings *)this_00,(MethodInfo *)0x0);
    (this->fields)._settings = this_00;
    func_?(&(this->fields)._settings);
    this_01 = (List_1_RTG_Gizmo_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<RTG::Gizmo>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
               MethodInfo__System__Collections__Generic__List<RTG::Gizmo>__List__);
    (this->fields)._gizmos = this_01;
    func_?(&(this->fields)._gizmos);
    this_02 = (List_1_UnityEngine_Camera_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
    (this->fields)._renderCameras = this_02;
    func_?(&(this->fields)._renderCameras);
    this_03 = (MoveGizmoSettings2D *)FUN_?(TypeInfo__RTG__MoveGizmoSettings2D);
    MoveGizmoSettings2D::MoveGizmoSettings2D__ctor(this_03,(MethodInfo *)0x0);
    if (this_03 != (MoveGizmoSettings2D *)0x0) {
      (this_03->fields)._._isExpanded = 0;
      (this->fields)._moveGizmoSettings2D = this_03;
      func_?(&(this->fields)._moveGizmoSettings2D);
      this_04 = (MoveGizmoSettings3D *)FUN_?(TypeInfo__RTG__MoveGizmoSettings3D);
      MoveGizmoSettings3D::MoveGizmoSettings3D__ctor(this_04,(MethodInfo *)0x0);
      if (this_04 != (MoveGizmoSettings3D *)0x0) {
        (this_04->fields)._._isExpanded = 0;
        (this->fields)._moveGizmoSettings3D = this_04;
        func_?(&(this->fields)._moveGizmoSettings3D);
        this_05 = (MoveGizmoLookAndFeel2D *)FUN_?(TypeInfo__RTG__MoveGizmoLookAndFeel2D);
        MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D__ctor(this_05,(MethodInfo *)0x0);
        if (this_05 != (MoveGizmoLookAndFeel2D *)0x0) {
          (this_05->fields)._._isExpanded = 0;
          (this->fields)._moveGizmoLookAndFeel2D = this_05;
          func_?(&(this->fields)._moveGizmoLookAndFeel2D);
          this_06 = (MoveGizmoLookAndFeel3D *)FUN_?(TypeInfo__RTG__MoveGizmoLookAndFeel3D);
          MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D__ctor(this_06,(MethodInfo *)0x0);
          if (this_06 != (MoveGizmoLookAndFeel3D *)0x0) {
            (this_06->fields)._._isExpanded = 0;
            (this->fields)._moveGizmoLookAndFeel3D = this_06;
            func_?(&(this->fields)._moveGizmoLookAndFeel3D);
            this_07 = (MoveGizmoHotkeys *)FUN_?(TypeInfo__RTG__MoveGizmoHotkeys);
            MoveGizmoHotkeys::MoveGizmoHotkeys__ctor(this_07,(MethodInfo *)0x0);
            if (this_07 != (MoveGizmoHotkeys *)0x0) {
              (this_07->fields)._._isExpanded = 0;
              (this->fields)._moveGizmoHotkeys = this_07;
              func_?(&(this->fields)._moveGizmoHotkeys);
              pOVar15 = (ObjectTransformGizmoSettings *)
                        FUN_?(TypeInfo__RTG__ObjectTransformGizmoSettings);
              ObjectTransformGizmoSettings::ObjectTransformGizmoSettings__ctor
                        (pOVar15,(MethodInfo *)0x0);
              if (pOVar15 != (ObjectTransformGizmoSettings *)0x0) {
                (pOVar15->fields)._._isExpanded = 0;
                (this->fields)._objectMoveGizmoSettings = pOVar15;
                func_?(&(this->fields)._objectMoveGizmoSettings);
                this_08 = (RotationGizmoSettings3D *)
                          FUN_?(TypeInfo__RTG__RotationGizmoSettings3D);
                RotationGizmoSettings3D::RotationGizmoSettings3D__ctor(this_08,(MethodInfo *)0x0);
                if (this_08 != (RotationGizmoSettings3D *)0x0) {
                  (this_08->fields)._._isExpanded = 0;
                  (this->fields)._rotationGizmoSettings3D = this_08;
                  func_?(&(this->fields)._rotationGizmoSettings3D);
                  this_09 = (RotationGizmoLookAndFeel3D *)
                            FUN_?(TypeInfo__RTG__RotationGizmoLookAndFeel3D);
                  RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D__ctor
                            (this_09,(MethodInfo *)0x0);
                  if (this_09 != (RotationGizmoLookAndFeel3D *)0x0) {
                    (this_09->fields)._._isExpanded = 0;
                    (this->fields)._rotationGizmoLookAndFeel3D = this_09;
                    func_?(&(this->fields)._rotationGizmoLookAndFeel3D);
                    pOVar15 = (ObjectTransformGizmoSettings *)
                              FUN_?(TypeInfo__RTG__ObjectTransformGizmoSettings);
                    ObjectTransformGizmoSettings::ObjectTransformGizmoSettings__ctor
                              (pOVar15,(MethodInfo *)0x0);
                    if (pOVar15 != (ObjectTransformGizmoSettings *)0x0) {
                      (pOVar15->fields)._._isExpanded = 0;
                      (this->fields)._objectRotationGizmoSettings = pOVar15;
                      func_?(&(this->fields)._objectRotationGizmoSettings);
                      this_10 = (ScaleGizmoSettings3D *)
                                FUN_?(TypeInfo__RTG__ScaleGizmoSettings3D);
                      ScaleGizmoSettings3D::ScaleGizmoSettings3D__ctor(this_10,(MethodInfo *)0x0);
                      if (this_10 != (ScaleGizmoSettings3D *)0x0) {
                        (this_10->fields)._._isExpanded = 0;
                        (this->fields)._scaleGizmoSettings3D = this_10;
                        func_?(&(this->fields)._scaleGizmoSettings3D);
                        this_11 = (ScaleGizmoLookAndFeel3D *)
                                  FUN_?(TypeInfo__RTG__ScaleGizmoLookAndFeel3D);
                        ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D__ctor
                                  (this_11,(MethodInfo *)0x0);
                        if (this_11 != (ScaleGizmoLookAndFeel3D *)0x0) {
                          (this_11->fields)._._isExpanded = 0;
                          (this->fields)._scaleGizmoLookAndFeel3D = this_11;
                          func_?(&(this->fields)._scaleGizmoLookAndFeel3D);
                          this_12 = (ScaleGizmoHotkeys *)
                                    FUN_?(TypeInfo__RTG__ScaleGizmoHotkeys);
                          ScaleGizmoHotkeys::ScaleGizmoHotkeys__ctor(this_12,(MethodInfo *)0x0);
                          if (this_12 != (ScaleGizmoHotkeys *)0x0) {
                            (this_12->fields)._._isExpanded = 0;
                            (this->fields)._scaleGizmoHotkeys = this_12;
                            func_?(&(this->fields)._scaleGizmoHotkeys);
                            pOVar15 = (ObjectTransformGizmoSettings *)
                                      FUN_?(TypeInfo__RTG__ObjectTransformGizmoSettings);
                            ObjectTransformGizmoSettings::ObjectTransformGizmoSettings__ctor
                                      (pOVar15,(MethodInfo *)0x0);
                            if (pOVar15 != (ObjectTransformGizmoSettings *)0x0) {
                              bVar8 = iRam_? != 0;
                              (pOVar15->fields)._._isExpanded = 0;
                              (this->fields)._objectScaleGizmoSettings = pOVar15;
                              if (bVar8) {
                                uVar11 = (uint)((ulonglong)&(this->fields)._objectScaleGizmoSettings
                                               >> 0xc);
                                uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                                do {
                                  uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                                  puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                                  LOCK();
                                  bVar8 = uVar13 == *puVar14;
                                  if (bVar8) {
                                    *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar8);
                              }
                              this_13 = (UniversalGizmoConfig *)
                                        FUN_?(TypeInfo__RTG__UniversalGizmoConfig);
                              (this_13->fields)._inheritType = 3;
                              Settings::Settings__ctor((Settings *)this_13,(MethodInfo *)0x0);
                              bVar8 = iRam_? != 0;
                              (this->fields)._universalGizmoConfig = this_13;
                              if (bVar8) {
                                uVar11 = (uint)((ulonglong)&(this->fields)._universalGizmoConfig >>
                                               0xc);
                                uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                                do {
                                  uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                                  puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                                  LOCK();
                                  bVar8 = uVar13 == *puVar14;
                                  if (bVar8) {
                                    *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar8);
                              }
                              this_14 = (UniversalGizmoSettings2D *)
                                        FUN_?(TypeInfo__RTG__UniversalGizmoSettings2D);
                              UniversalGizmoSettings2D::UniversalGizmoSettings2D__ctor
                                        (this_14,(MethodInfo *)0x0);
                              if (this_14 != (UniversalGizmoSettings2D *)0x0) {
                                bVar8 = iRam_? != 0;
                                (this_14->fields)._._isExpanded = 0;
                                (this->fields)._universalGizmoSettings2D = this_14;
                                if (bVar8) {
                                  uVar11 = (uint)((ulonglong)
                                                  &(this->fields)._universalGizmoSettings2D >> 0xc);
                                  uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                                  do {
                                    uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                                    puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                                    LOCK();
                                    bVar8 = uVar13 == *puVar14;
                                    if (bVar8) {
                                      *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar8);
                                }
                                this_15 = (UniversalGizmoSettings3D *)
                                          FUN_?(TypeInfo__RTG__UniversalGizmoSettings3D);
                                UniversalGizmoSettings3D::UniversalGizmoSettings3D__ctor
                                          (this_15,(MethodInfo *)0x0);
                                if (this_15 != (UniversalGizmoSettings3D *)0x0) {
                                  (this_15->fields)._._isExpanded = 0;
                                  (this->fields)._universalGizmoSettings3D = this_15;
                                  func_?(&(this->fields)._universalGizmoSettings3D);
                                  this_16 = (UniversalGizmoLookAndFeel2D *)
                                            FUN_?(TypeInfo__RTG__UniversalGizmoLookAndFeel2D
                                                         );
                                  UniversalGizmoLookAndFeel2D::UniversalGizmoLookAndFeel2D__ctor
                                            (this_16,(MethodInfo *)0x0);
                                  if (this_16 != (UniversalGizmoLookAndFeel2D *)0x0) {
                                    bVar8 = iRam_? != 0;
                                    (this_16->fields)._._isExpanded = 0;
                                    (this->fields)._universalGizmoLookAndFeel2D = this_16;
                                    if (bVar8) {
                                      uVar11 = (uint)((ulonglong)
                                                      &(this->fields)._universalGizmoLookAndFeel2D
                                                     >> 0xc);
                                      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                                      do {
                                        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                                        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                                        LOCK();
                                        bVar8 = uVar13 == *puVar14;
                                        if (bVar8) {
                                          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar8);
                                    }
                                    this_17 = (UniversalGizmoLookAndFeel3D *)
                                              FUN_?(
                                                  TypeInfo__RTG__UniversalGizmoLookAndFeel3D);
                                    UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D__ctor
                                              (this_17,(MethodInfo *)0x0);
                                    if (this_17 != (UniversalGizmoLookAndFeel3D *)0x0) {
                                      bVar8 = iRam_? != 0;
                                      (this_17->fields)._._isExpanded = 0;
                                      (this->fields)._universalGizmoLookAndFeel3D = this_17;
                                      if (bVar8) {
                                        uVar11 = (uint)((ulonglong)
                                                        &(this->fields)._universalGizmoLookAndFeel3D
                                                       >> 0xc);
                                        uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                                        do {
                                          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                                          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                                          LOCK();
                                          bVar8 = uVar13 == *puVar14;
                                          if (bVar8) {
                                            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar8);
                                      }
                                      this_18 = (UniversalGizmoHotkeys *)
                                                FUN_?(TypeInfo__RTG__UniversalGizmoHotkeys);
                                      UniversalGizmoHotkeys::UniversalGizmoHotkeys__ctor
                                                (this_18,(MethodInfo *)0x0);
                                      if (this_18 != (UniversalGizmoHotkeys *)0x0) {
                                        bVar8 = iRam_? != 0;
                                        (this_18->fields)._._isExpanded = 0;
                                        (this->fields)._universalGizmoHotkeys = this_18;
                                        if (bVar8) {
                                          uVar11 = (uint)((ulonglong)
                                                          &(this->fields)._universalGizmoHotkeys >>
                                                         0xc);
                                          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                                          do {
                                            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                                            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                                            LOCK();
                                            bVar8 = uVar13 == *puVar14;
                                            if (bVar8) {
                                              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                                            }
                                            UNLOCK();
                                          } while (!bVar8);
                                        }
                                        pOVar15 = (ObjectTransformGizmoSettings *)
                                                  FUN_?(
                                                  TypeInfo__RTG__ObjectTransformGizmoSettings);
                                        ObjectTransformGizmoSettings::
                                        ObjectTransformGizmoSettings__ctor
                                                  (pOVar15,(MethodInfo *)0x0);
                                        if (pOVar15 != (ObjectTransformGizmoSettings *)0x0) {
                                          bVar8 = iRam_? != 0;
                                          (pOVar15->fields)._._isExpanded = 0;
                                          (this->fields)._objectUniversalGizmoSettings = pOVar15;
                                          if (bVar8) {
                                            uVar11 = (uint)((ulonglong)
                                                            &(this->fields).
                                                             _objectUniversalGizmoSettings >> 0xc);
                                            uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                                            do {
                                              uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                                              puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                                              LOCK();
                                              bVar8 = uVar13 == *puVar14;
                                              if (bVar8) {
                                                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar8);
                                          }
                                          if (*(int *)&(
                                                  TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>
                                                  ->_1).field_0x1c == 0) {
                                            FUN_?();
                                          }
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__UnityEngine__Object);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).
                                                       field_0x1c == 0) {
                                            FUN_?();
                                          }
                                          return;
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void add_CanDoHoverUpdate(GizmoEngineCanDoHoverUpdateHandler) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_add_CanDoHoverUpdate
               (RTGizmosEngine *this,GizmoEngineCanDoHoverUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).CanDoHoverUpdate;
  a = (this->fields).CanDoHoverUpdate;
  do {
    pGVar2 = (GizmoEngineCanDoHoverUpdateHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoEngineCanDoHoverUpdateHandler *)0x0;
    if (pGVar2 != (GizmoEngineCanDoHoverUpdateHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoEngineCanDoHoverUpdateHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Int32 get_NumRenderCameras() */

int32_t Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras
                  (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._renderCameras;
  if (pLVar1 != (List_1_UnityEngine_Camera_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Camera get_RenderStageCamera() */

Camera * Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_get_RenderStageCamera
                   (RTGizmosEngine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    return (Camera *)pOVar1[2].monitor;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Camera *)(*pcVar2)();
  return pCVar3;
}


/* Void remove_CanDoHoverUpdate(GizmoEngineCanDoHoverUpdateHandler) */

void Assembly-CSharp.dll::RTG::RTGizmosEngine::RTGizmosEngine_remove_CanDoHoverUpdate
               (RTGizmosEngine *this,GizmoEngineCanDoHoverUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).CanDoHoverUpdate;
  source = (this->fields).CanDoHoverUpdate;
  do {
    pGVar2 = (GizmoEngineCanDoHoverUpdateHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoEngineCanDoHoverUpdateHandler *)0x0;
    if (pGVar2 != (GizmoEngineCanDoHoverUpdateHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoEngineCanDoHoverUpdateHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoEngineCanDoHoverUpdateHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}

