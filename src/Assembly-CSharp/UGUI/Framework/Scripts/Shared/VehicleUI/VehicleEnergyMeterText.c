
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText_Awake(VehicleEnergyMeterText *this,MethodInfo *method)

{
  pTVar1 = (this->fields).energyText;
  if (pTVar1 != (Text *)0x0) {
    pfVar2 = (float *)(*(code *)(pTVar1->klass->vtable).get_color.method)
                                (auStack_3,pTVar1,(pTVar1->klass->vtable).set_color.methodPtr);
    fVar4 = pfVar2[1];
    fVar5 = pfVar2[2];
    fVar6 = pfVar2[3];
    (this->fields).originalColor.r = *pfVar2;
    (this->fields).originalColor.g = fVar4;
    (this->fields).originalColor.b = fVar5;
    (this->fields).originalColor.a = fVar6;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(Boolean, MVRigidBody) */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText_Initialize
               (VehicleEnergyMeterText *this,bool insideVehicle,MVRigidBody *rigidBody,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__Component__GetComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText__OnRefillCallback__
                   );
    cRam_? = '\x01';
  }
  ppVVar1 = &(this->fields).vehicleEnergyContainer;
  *ppVVar1 = (VehicleEnergyContainer *)0x0;
  func_?(ppVVar1,0);
  pTVar2 = (this->fields).energyText;
  if ((pTVar2 == (Text *)0x0) ||
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
  goto code_?;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                     ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
  fVar5 = pVVar4->y;
  fVar6 = pVVar4->z;
  (this->fields).originalTextPos.x = pVVar4->x;
  (this->fields).originalTextPos.y = fVar5;
  (this->fields).originalTextPos.z = fVar6;
  (this->fields).currentEnergyStatus = 100;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)rigidBody,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    if (rigidBody == (MVRigidBody *)0x0) goto code_?;
    pVVar8 = (VehicleEnergyContainer *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)rigidBody,
                         WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__Component__GetComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                        );
    *ppVVar1 = pVVar8;
    func_?();
  }
  pVVar8 = *ppVVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pVVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    (this->fields).updateEnergy = 0;
code_?:
    this_00 = (this->fields).vehicleEnergyMeterTextGroup;
    fVar6 = _UNK_?;
    if ((this->fields).updateEnergy == 0) {
      fVar6 = 0.0;
    }
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,fVar6,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((this->fields).updateEnergy == 0) {
        return;
      }
      pVVar8 = (this->fields).vehicleEnergyContainer;
      if (pVVar8 != (VehicleEnergyContainer *)0x0) {
        fVar6 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
                 VehicleEnergyContainer_get_EnergyStatus(pVVar8,(MethodInfo *)0x0);
        piVar9 = &(this->fields).currentEnergyStatus;
        iVar10 = *piVar9;
        iVar11 = (int)(fVar6 * _UNK_?);
        if (iVar11 < iVar10) {
code_?:
          *piVar9 = iVar11;
        }
        else if (iVar10 < iVar11) {
          iVar11 = iVar10 + 1;
          goto code_?;
        }
        pTVar2 = (this->fields).energyText;
        mscorlib.dll::System::Int32::Int32_ToString((Int32 *)piVar9,(MethodInfo *)0x0);
        if (pTVar2 != (Text *)0x0) {
          (*(code *)(pTVar2->klass->vtable).set_text.method)();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pTVar2 = (this->fields).energyText;
          if (*piVar9 < 0x14) {
            if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            if (pTVar2 != (Text *)0x0) {
              (*(code *)(pTVar2->klass->vtable).set_color.method)(pTVar2);
              if (3 < (this->fields).lastBlink) {
                (this->fields).lastBlink = -4;
              }
              pTVar2 = (this->fields).energyText;
              if ((pTVar2 != (Text *)0x0) &&
                 (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pTVar2,(MethodInfo *)0x0),
                 pTVar3 != (Transform *)0x0)) {
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localPosition
                                   ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
                if ((this->fields).lastBlink < 0) {
                  fVar6 = pVVar4->y + _UNK_?;
                }
                else {
                  fVar6 = pVVar4->y - _UNK_?;
                }
                pTVar2 = (this->fields).energyText;
                if (pTVar2 != (Text *)0x0) {
                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pTVar2,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    value.y = fVar6;
                    value.x = (this->fields).originalTextPos.x;
                    value.z = (this->fields).originalTextPos.z;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar3,value,(MethodInfo *)0x0);
                    piVar9 = &(this->fields).lastBlink;
                    *piVar9 = *piVar9 + 1;
                    return;
                  }
                }
              }
            }
          }
          else if (pTVar2 != (Text *)0x0) {
            (*(code *)(pTVar2->klass->vtable).set_color.method)(pTVar2);
            pTVar2 = (this->fields).energyText;
            if ((pTVar2 != (Text *)0x0) &&
               (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pTVar2,(MethodInfo *)0x0),
               pTVar3 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar3,(this->fields).originalTextPos,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
code_?:
    func_?();
  }
  else {
    pVVar8 = *ppVVar1;
    if (pVVar8 == (VehicleEnergyContainer *)0x0) goto code_?;
    (this->fields).updateEnergy = (pVVar8->fields)._UsingEnergy_k__BackingField;
    pAVar12 = (pVVar8->fields).OnRefill;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText__OnRefillCallback__
               ,(MethodInfo *)0x0);
    pAVar12 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar12,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar12 == (Action *)0x0) {
      (pVVar8->fields).OnRefill = (Action *)0x0;
code_?:
      func_?();
      goto code_?;
    }
    pAVar13 = (Action *)0x0;
    if (pAVar12->klass == TypeInfo__System__Action) {
      pAVar13 = pAVar12;
    }
    if (pAVar13 == (Action *)0x0) goto code_?;
    (pVVar8->fields).OnRefill = pAVar13;
    pAVar13 = (Action *)0x0;
    if (pAVar12->klass == TypeInfo__System__Action) {
      pAVar13 = pAVar12;
    }
    if (pAVar13 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdateEnergy() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText_UpdateEnergy(VehicleEnergyMeterText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((this->fields).updateEnergy == 0) {
    return;
  }
  this_00 = (this->fields).vehicleEnergyContainer;
  if (this_00 == (VehicleEnergyContainer *)0x0) goto code_?;
  fVar1 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
           VehicleEnergyContainer_get_EnergyStatus(this_00,(MethodInfo *)0x0);
  piVar2 = &(this->fields).currentEnergyStatus;
  iVar3 = *piVar2;
  unique0x0000aa00 = (double)(fVar1 * _UNK_?);
  iVar4 = (int)(fVar1 * _UNK_?);
  if (iVar4 < iVar3) {
code_?:
    *piVar2 = iVar4;
  }
  else if (iVar3 < iVar4) {
    iVar4 = iVar3 + 1;
    goto code_?;
  }
  pTVar5 = (this->fields).energyText;
  pSVar6 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)piVar2,(MethodInfo *)0x0);
  pSVar7 = ::StringLiteral__;
  if (pSVar6 != (String *)0x0) {
    pSVar7 = pSVar6;
  }
  if (pTVar5 != (Text *)0x0) {
    auStack_8._0_4_ = (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    (*(code *)(pTVar5->klass->vtable).set_text.method)(pTVar5,pSVar7);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText
                     );
      cRam_? = '\x01';
    }
    pTVar5 = (this->fields).energyText;
    if (*piVar2 < 0x14) {
      if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(
                       TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText
                       );
      }
      pVVar9 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->
               static_fields;
      if (pTVar5 != (Text *)0x0) {
        (*(code *)(pTVar5->klass->vtable).set_color.method)
                  (pTVar5,(pVVar9->WarningColor).r,(pVVar9->WarningColor).g,(pVVar9->WarningColor).b
                   ,(pVVar9->WarningColor).a,(pTVar5->klass->vtable).get_raycastTarget.methodPtr);
        if (3 < (this->fields).lastBlink) {
          (this->fields).lastBlink = -4;
        }
        pTVar5 = (this->fields).energyText;
        if (pTVar5 != (Text *)0x0) {
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar5,(MethodInfo *)0x0);
          if (pTVar10 != (Transform *)0x0) {
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)auStack_8,pTVar10,(MethodInfo *)0x0);
            if ((this->fields).lastBlink < 0) {
              fVar1 = pVVar11->y + _UNK_?;
            }
            else {
              fVar1 = pVVar11->y - _UNK_?;
            }
            pTVar5 = (this->fields).energyText;
            if (pTVar5 != (Text *)0x0) {
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pTVar5,(MethodInfo *)0x0);
              auStack_8._0_4_ = (this->fields).originalTextPos.x;
              fStack_12 = (this->fields).originalTextPos.z;
              unique0x100002f6 = (double)CONCAT44(fStack_12,fVar1);
              if (pTVar10 != (Transform *)0x0) {
                value.y = fVar1;
                value.x = (float)auStack_8._0_4_;
                value.z = fStack_12;
                auStack_8._4_4_ = fVar1;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar10,value,(MethodInfo *)0x0);
                piVar2 = &(this->fields).lastBlink;
                *piVar2 = *piVar2 + 1;
                return;
              }
            }
          }
        }
      }
    }
    else if (pTVar5 != (Text *)0x0) {
      (*(code *)(pTVar5->klass->vtable).set_color.method)
                (pTVar5,(this->fields).originalColor.r,(this->fields).originalColor.g,
                 (this->fields).originalColor.b,(this->fields).originalColor.a,
                 (pTVar5->klass->vtable).get_raycastTarget.methodPtr);
      pTVar5 = (this->fields).energyText;
      if (pTVar5 != (Text *)0x0) {
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar5,(MethodInfo *)0x0);
        if (pTVar10 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar10,(this->fields).originalTextPos,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void VisualStuff() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText_VisualStuff(VehicleEnergyMeterText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).energyText;
  if ((this->fields).currentEnergyStatus < 0x14) {
    if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText)
      ;
    }
    pVVar2 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->
             static_fields;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_color.method)
                (pTVar1,(pVVar2->WarningColor).r,(pVVar2->WarningColor).g,(pVVar2->WarningColor).b,
                 (pVVar2->WarningColor).a,(pTVar1->klass->vtable).get_raycastTarget.methodPtr);
      if (3 < (this->fields).lastBlink) {
        (this->fields).lastBlink = -4;
      }
      pTVar1 = (this->fields).energyText;
      if (pTVar1 != (Text *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             (&VStack_5,pTVar3,(MethodInfo *)0x0);
          if ((this->fields).lastBlink < 0) {
            fVar6 = pVVar4->y + _UNK_?;
          }
          else {
            fVar6 = pVVar4->y - _UNK_?;
          }
          pTVar1 = (this->fields).energyText;
          if (pTVar1 != (Text *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pTVar1,(MethodInfo *)0x0);
            VStack_5.x = (this->fields).originalTextPos.x;
            VStack_5.z = (this->fields).originalTextPos.z;
            VStack_5.y = fVar6;
            if (pTVar3 != (Transform *)0x0) {
              value.y = fVar6;
              value.x = VStack_5.x;
              value.z = VStack_5.z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar3,value,(MethodInfo *)0x0);
              piVar7 = &(this->fields).lastBlink;
              *piVar7 = *piVar7 + 1;
              return;
            }
          }
        }
      }
    }
  }
  else if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_color.method)
              (pTVar1,(this->fields).originalColor.r,(this->fields).originalColor.g,
               (this->fields).originalColor.b,(this->fields).originalColor.a,
               (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
    pTVar1 = (this->fields).energyText;
    if (pTVar1 != (Text *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar3,(this->fields).originalTextPos,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* VehicleEnergyMeterText() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  pVVar4 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->
           static_fields;
  (pVVar4->WarningColor).r = _UNK_?;
  (pVVar4->WarningColor).g = fVar3;
  (pVVar4->WarningColor).b = fVar2;
  (pVVar4->WarningColor).a = fVar1;
  return;
}


/* VehicleEnergyMeterText() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText__ctor(VehicleEnergyMeterText *this,MethodInfo *method)

{
  (this->fields).currentEnergyStatus = 100;
  (this->fields).lastBlink = -4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_IsVisible() */

bool Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText_get_IsVisible(VehicleEnergyMeterText *this,MethodInfo *method)

{
  this_00 = (this->fields).vehicleEnergyMeterTextGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    fVar1 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (this_00,(MethodInfo *)0x0);
    return _UNK_? < fVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

