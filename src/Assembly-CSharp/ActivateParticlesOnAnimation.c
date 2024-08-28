
/* Void OnAvatarAnimationChange(String) */

void Assembly-CSharp.dll::ActivateParticlesOnAnimation::
     ActivateParticlesOnAnimation_OnAvatarAnimationChange
               (ActivateParticlesOnAnimation *this,String *newAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ActivateParticlesOnAnimation::ActivationData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ActivateParticlesOnAnimation::ActivationData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).activationDataList;
  do {
    if (pLVar1 == (List_1_ActivateParticlesOnAnimation_ActivationData_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    pLVar1 = (this->fields).activationDataList;
    if (pLVar1 == (List_1_ActivateParticlesOnAnimation_ActivationData_ *)0x0) goto code_?;
    XVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)pLVar1
                       ,index,
                       MethodInfo__System__Collections__Generic__List<ActivateParticlesOnAnimation::ActivationData>__get_Item_int_
                      );
    bVar4 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)XVar3.qname,newAnimation,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 == (GameObject *)0x0) goto code_?;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (this_00,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pLVar1 = (this->fields).activationDataList;
        if (pLVar1 != (List_1_ActivateParticlesOnAnimation_ActivationData_ *)0x0) {
          XVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                  XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                  List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                            ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                             pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<ActivateParticlesOnAnimation::ActivationData>__get_Item_int_
                            );
          routine = ActivateParticlesOnAnimation_PlayParticles
                              (this,(float)XVar3.xso,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    pLVar1 = (this->fields).activationDataList;
    index = index + 1;
  } while( true );
}


/* IEnumerator PlayParticles(Single) */

IEnumerator *
Assembly-CSharp.dll::ActivateParticlesOnAnimation::ActivateParticlesOnAnimation_PlayParticles
          (ActivateParticlesOnAnimation *this,float activationDelay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ActivateParticlesOnAnimation___PlayParticles_d__4);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ActivateParticlesOnAnimation___PlayParticles_d__4;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].monitor = (MonitorData *)this;
  func_?(&value[2].monitor,this);
  value[2].klass = (Object__Class *)activationDelay;
  return (IEnumerator *)value;
}

