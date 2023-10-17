
/* Void InitializeGreyOutScript() */

void Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_InitializeGreyOutScript
               (CollectTheItemObject *this,MethodInfo *method)

{
  pGVar1 = (this->fields).greyOutObject;
  if (pGVar1 != (GreyOutObjectScript *)0x0) {
    if (cRam_? == '\0') {
      ppMStack_2 = &
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
      ;
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                     );
      func_?(&TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
      cRam_? = '\x01';
    }
    pLVar3 = (pGVar1->fields).pickupOriginalMaterials;
    if (pLVar3 != (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
      length = (pLVar3->fields)._size;
      piVar4 = &(pLVar3->fields)._version;
      *piVar4 = *piVar4 + 1;
      (pLVar3->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      source = (pGVar1->fields).pickupObject;
      if (source != (GameObject *)0x0) {
        pLVar5 = (List_1_System_Object_ *)
                 Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                           ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                           );
        uVar6 = 0;
        if (pLVar5 != (List_1_System_Object_ *)0x0) {
          ppMVar7 = (MonitorData **)&(pLVar5->fields)._version;
          while( true ) {
            if ((pLVar5->fields)._size <= (int)uVar6) {
              return;
            }
            if ((uint)(pLVar5->fields)._size <= uVar6) break;
            this_00 = (Object__Class *)*ppMVar7;
            value = (Object *)func_?();
            if (value == (Object *)0x0) goto code_?;
            *(undefined1 *)&value[2].klass = 1;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (value,ExceptionArgument__Enum_obj,unaff_EDI);
            value[1].klass = this_00;
            func_?();
            if (this_00 == (Object__Class *)0x0) goto code_?;
            pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                               ((Renderer *)this_00,(MethodInfo *)0x0);
            value[1].monitor = (MonitorData *)pMVar8;
            func_?();
            if (_UNK_? == (List_1_System_Object_ *)0x0) goto code_?;
            pLVar5 = _UNK_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (_UNK_?,value,
                       MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                      );
            uVar6 = uVar6 + 1;
            ppMVar7 = &value->monitor;
          }
          func_?();
        }
      }
    }
  }
code_?:
  uVar9 = func_?(&ppMStack_2);
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean ShouldDoBlinking() */

bool Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_ShouldDoBlinking
               (CollectTheItemObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).fadeTimer;
  if (fVar1 < _UNK_?) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).fadeTimer = fVar2 + fVar1;
    return 0;
  }
  return 1;
}


/* Void Update() */

void Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_Update
               (CollectTheItemObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).fadeTimer;
  if (fVar1 < _UNK_?) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).fadeTimer = fVar2 + fVar1;
    return;
  }
  this_00 = (this->fields).blinker;
  if (this_00 != (CollectTheItemBlinker *)0x0) {
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,INFINITY,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_EnableFading() */

bool Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_get_EnableFading
               (CollectTheItemObject *this,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(this);
  return bVar1;
}


/* Void set_EnableFading(Boolean) */

void Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_set_EnableFading
               (CollectTheItemObject *this,bool value,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  (*pcRam_?)(this,_value);
  return;
}

